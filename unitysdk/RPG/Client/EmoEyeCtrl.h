#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EmoEyeCtrl_EyeLookAtCurveBlend.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Timeline { class EmoEyeCtrlData; }
namespace RPGTools::Timeline { class EmoEyeCtrlOffsetData; }
namespace RPGTools::Timeline { class EmoEyeCtrlShakeData; }
namespace RPGTools::Timeline { class EmoEyeCtrlShakeNoiseData; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EMOEYECTRL_AJUSTROTATION_OFFSET UNITYSDK_OFFSET(0x18D8A140)
#define RPG_CLIENT_EMOEYECTRL_AWAKE_OFFSET UNITYSDK_OFFSET(0x18D86580)
#define RPG_CLIENT_EMOEYECTRL_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x18D86B20)
#define RPG_CLIENT_EMOEYECTRL_EYEEULER_OFFSET UNITYSDK_OFFSET(0x18D89700)
#define RPG_CLIENT_EMOEYECTRL_EYELOOKAT_1_OFFSET UNITYSDK_OFFSET(0x18D86110)
#define RPG_CLIENT_EMOEYECTRL_EYELOOKAT_OFFSET UNITYSDK_OFFSET(0x18D85EF0)
#define RPG_CLIENT_EMOEYECTRL_GET_ENABLEEYELOOKAT_OFFSET UNITYSDK_OFFSET(0x18D85DF0)
#define RPG_CLIENT_EMOEYECTRL_HASDATA_OFFSET UNITYSDK_OFFSET(0x18D85E00)
#define RPG_CLIENT_EMOEYECTRL_INITIALIZELOOKAT_OFFSET UNITYSDK_OFFSET(0x18D85FA0)
#define RPG_CLIENT_EMOEYECTRL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18D87D00)
#define RPG_CLIENT_EMOEYECTRL_SCALEADD_OFFSET UNITYSDK_OFFSET(0x18D897E0)
#define RPG_CLIENT_EMOEYECTRL_SETBLINKWEIGHT_OFFSET UNITYSDK_OFFSET(0x18D8A1C0)
#define RPG_CLIENT_EMOEYECTRL_SETBLINK_OFFSET UNITYSDK_OFFSET(0x18D89B80)
#define RPG_CLIENT_EMOEYECTRL_SETDATA_OFFSET UNITYSDK_OFFSET(0x18D85E50)
#define RPG_CLIENT_EMOEYECTRL_SETEYECTRL_OFFSET UNITYSDK_OFFSET(0x18D86B80)
#define RPG_CLIENT_EMOEYECTRL_SETEYELOOKATWEIGHT_OFFSET UNITYSDK_OFFSET(0x18D86280)
#define RPG_CLIENT_EMOEYECTRL_SETSHAKEDATA_OFFSET UNITYSDK_OFFSET(0x18D85EA0)
#define RPG_CLIENT_EMOEYECTRL_SETUPEYELOOKATCURVEBLEND_OFFSET UNITYSDK_OFFSET(0x18D862F0)
#define RPG_CLIENT_EMOEYECTRL_STOPEYELOOKAT_OFFSET UNITYSDK_OFFSET(0x18D861D0)
#define RPG_CLIENT_EMOEYECTRL_UPDATEEYELOOKAT_OFFSET UNITYSDK_OFFSET(0x18D87DA0)
#define RPG_CLIENT_EMOEYECTRL__CTOR_OFFSET UNITYSDK_OFFSET(0x18D8A220)
#define RPG_CLIENT_EMOEYECTRL__SHAKEOFFSET_OFFSET UNITYSDK_OFFSET(0x18D88C00)
#define RPG_CLIENT_EMOEYECTRL__SHAKERATIO_OFFSET UNITYSDK_OFFSET(0x18D898A0)

namespace RPG::Client
{
	inline static constexpr unsigned int EmoEyeCtrl_TypeDefinitionIndex = 67922;

	class EmoEyeCtrl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _mEnableEyeLookAt; // 0x18
		::System::Single _mEyeLookAtWeight; // 0x1C
		::UnityEngine::Transform* _mEyeLookAtTarget; // 0x20
		::UnityEngine::Vector3 _mEyeLookAtTargetPos; // 0x28
		::UnityEngine::Transform* EyeLookAtOrigin; // 0x38
		::System::Single EyeLookAtStopTime; // 0x40
		::UnityEngine::Vector2 EyeLookAtAxisXRange; // 0x44
		::UnityEngine::Vector2 EyeLookAtAxisYRange; // 0x4C
		::UnityEngine::Vector2 EyeLookAtSpeed; // 0x54
		::UnityEngine::Vector2 EyeLookAtForwardRange; // 0x5C
		::System::Boolean UseRotZ; // 0x64
		::UnityEngine::Transform* LeftEyeEnd; // 0x68
		::UnityEngine::Transform* RightEyeEnd; // 0x70
		::UnityEngine::Transform* LeftEye; // 0x78
		::UnityEngine::Transform* RightEye; // 0x80
		::UnityEngine::Transform* LeftEyeEnd01; // 0x88
		::UnityEngine::Transform* RightEyeEnd01; // 0x90
		::System::Single BlinkEyeXRot; // 0x98
		::RPGTools::Timeline::EmoEyeCtrlData* originData; // 0xA0
		::RPGTools::Timeline::EmoEyeCtrlOffsetData* _eyeOffsetData; // 0xA8
		::RPGTools::Timeline::EmoEyeCtrlOffsetData* _ShakedEyeOffsetData; // 0xB0
		::RPGTools::Timeline::EmoEyeCtrlShakeData* _ShakeData; // 0xB8
		::System::Single _ShakeTimer_Eye; // 0xC0
		::System::Single _ShakeTimer_EyeEnd; // 0xC4
		::System::Single _ShakeTimer_EyeEnd01; // 0xC8
		::UnityEngine::Vector3 _mEyeLookAtOffset; // 0xCC
		::UnityEngine::Vector3 _mLeftEyeLookAtRotOffset; // 0xD8
		::UnityEngine::Vector3 _mRightEyeLookAtRotOffset; // 0xE4
		::System::Boolean _mBlinking; // 0xF0
		::System::Single _mLeftDeltaRotation; // 0xF4
		::System::Single _mRightDeltaRotation; // 0xF8
		::UnityEngine::Quaternion _mLeftRotation; // 0xFC
		::UnityEngine::Quaternion _mRightRotation; // 0x10C
		::System::Boolean _mLeftNeedRotate; // 0x11C
		::System::Boolean _mRightNeedRotate; // 0x11D
		::System::Single _mBlinkingWeight; // 0x120
		::UnityEngine::Vector3 _eyeLocalUp; // 0x124
		::UnityEngine::Vector3 _eyeLocalForward; // 0x130
		::RPG::Client::EmoEyeCtrl_EyeLookAtCurveBlend _eyeCurveBlend; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL__CTOR_OFFSET))(this);
		}

		::System::Boolean get_EnableEyeLookAt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_GET_ENABLEEYELOOKAT_OFFSET))(this);
		}

		::System::Boolean HasData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_HASDATA_OFFSET))(this);
		}

		::System::Void SetData(::RPGTools::Timeline::EmoEyeCtrlOffsetData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EmoEyeCtrlOffsetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_SETDATA_OFFSET))(this, a1);
		}

		::System::Void SetShakeData(::RPGTools::Timeline::EmoEyeCtrlShakeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EmoEyeCtrlShakeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_SETSHAKEDATA_OFFSET))(this, a1);
		}

		::System::Void EyeLookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_EYELOOKAT_OFFSET))(this, a1);
		}

		::System::Void EyeLookAt_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_EYELOOKAT_1_OFFSET))(this, a1);
		}

		::System::Void StopEyeLookAt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_STOPEYELOOKAT_OFFSET))(this);
		}

		::System::Void SetEyeLookAtWeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_SETEYELOOKATWEIGHT_OFFSET))(this, a1);
		}

		::System::Void SetupEyeLookAtCurveBlend(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_SETUPEYELOOKATCURVEBLEND_OFFSET))(this, a1, a2);
		}

		::System::Void InitializeLookAt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_INITIALIZELOOKAT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_AWAKE_OFFSET))(this);
		}

		::System::Void DoUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_DOUPDATE_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetEyeCtrl(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_SETEYECTRL_OFFSET))(this, a1);
		}

		::System::Boolean _ShakeOffset(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL__SHAKEOFFSET_OFFSET))(this, a1);
		}

		::System::Single _ShakeRatio(::System::Single a1, ::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData* a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL__SHAKERATIO_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Quaternion EyeEuler(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_EYEEULER_OFFSET))(this, a1);
		}

		::System::Void UpdateEyeLookAt(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_UPDATEEYELOOKAT_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector3 ScaleAdd(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_SCALEADD_OFFSET))(a1, a2);
		}

		::System::Void SetBlink(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_SETBLINK_OFFSET))(this, a1);
		}

		::System::Void SetBlinkWeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_SETBLINKWEIGHT_OFFSET))(this, a1);
		}

		::System::Single AjustRotation(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_AJUSTROTATION_OFFSET))(this, a1);
		}
	};
}
