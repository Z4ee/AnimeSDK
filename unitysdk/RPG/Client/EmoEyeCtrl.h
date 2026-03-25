#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EmoEyeCtrl_Struct_2_6E184C49E97E83A7.h"
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

#define RPG_CLIENT_EMOEYECTRL_AWAKE_OFFSET UNITYSDK_OFFSET(0x95F8410)
#define RPG_CLIENT_EMOEYECTRL_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x95F89B0)
#define RPG_CLIENT_EMOEYECTRL_EYELOOKAT_1_OFFSET UNITYSDK_OFFSET(0x95F7FA0)
#define RPG_CLIENT_EMOEYECTRL_EYELOOKAT_OFFSET UNITYSDK_OFFSET(0x95F7D80)
#define RPG_CLIENT_EMOEYECTRL_GET_ENABLEEYELOOKAT_OFFSET UNITYSDK_OFFSET(0x95F7C80)
#define RPG_CLIENT_EMOEYECTRL_HASDATA_OFFSET UNITYSDK_OFFSET(0x95F7C90)
#define RPG_CLIENT_EMOEYECTRL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x95F9B90)
#define RPG_CLIENT_EMOEYECTRL_METHOD_5_0C9DFA95C6F28D26_OFFSET UNITYSDK_OFFSET(0x95FB590)
#define RPG_CLIENT_EMOEYECTRL_METHOD_5_8B5519E0E1747D4E_OFFSET UNITYSDK_OFFSET(0x95FBFD0)
#define RPG_CLIENT_EMOEYECTRL_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x95F7E30)
#define RPG_CLIENT_EMOEYECTRL_METHOD_5_9F70F7100A78F9A0_OFFSET UNITYSDK_OFFSET(0x95FAA90)
#define RPG_CLIENT_EMOEYECTRL_METHOD_5_B54AB57637A113AA_OFFSET UNITYSDK_OFFSET(0x95FB730)
#define RPG_CLIENT_EMOEYECTRL_METHOD_5_BF653AC3FD8A315F_OFFSET UNITYSDK_OFFSET(0x95F8A10)
#define RPG_CLIENT_EMOEYECTRL_METHOD_5_CEE772DE95055C01_OFFSET UNITYSDK_OFFSET(0x95F9C30)
#define RPG_CLIENT_EMOEYECTRL_SCALEADD_OFFSET UNITYSDK_OFFSET(0x95FB670)
#define RPG_CLIENT_EMOEYECTRL_SETBLINKWEIGHT_OFFSET UNITYSDK_OFFSET(0x95FC050)
#define RPG_CLIENT_EMOEYECTRL_SETBLINK_OFFSET UNITYSDK_OFFSET(0x95FBA10)
#define RPG_CLIENT_EMOEYECTRL_SETDATA_OFFSET UNITYSDK_OFFSET(0x95F7CE0)
#define RPG_CLIENT_EMOEYECTRL_SETEYELOOKATWEIGHT_OFFSET UNITYSDK_OFFSET(0x95F8110)
#define RPG_CLIENT_EMOEYECTRL_SETSHAKEDATA_OFFSET UNITYSDK_OFFSET(0x95F7D30)
#define RPG_CLIENT_EMOEYECTRL_SETUPEYELOOKATCURVEBLEND_OFFSET UNITYSDK_OFFSET(0x95F8180)
#define RPG_CLIENT_EMOEYECTRL_STOPEYELOOKAT_OFFSET UNITYSDK_OFFSET(0x95F8060)
#define RPG_CLIENT_EMOEYECTRL__CTOR_OFFSET UNITYSDK_OFFSET(0x95FC0B0)

namespace RPG::Client
{
	inline static constexpr unsigned int EmoEyeCtrl_TypeDefinitionIndex = 58269;

	class EmoEyeCtrl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_0; // 0x18
		::System::Single Field_5_1; // 0x1C
		::UnityEngine::Transform* Field_5_2; // 0x20
		::UnityEngine::Vector3 Field_5_3; // 0x28
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
		::RPGTools::Timeline::EmoEyeCtrlOffsetData* Field_5_19; // 0xA8
		::RPGTools::Timeline::EmoEyeCtrlOffsetData* Field_5_20; // 0xB0
		::RPGTools::Timeline::EmoEyeCtrlShakeData* Field_5_21; // 0xB8
		::System::Single Field_5_22; // 0xC0
		::System::Single Field_5_23; // 0xC4
		::System::Single Field_5_24; // 0xC8
		::UnityEngine::Vector3 Field_5_25; // 0xCC
		::UnityEngine::Vector3 Field_5_26; // 0xD8
		::UnityEngine::Vector3 Field_5_27; // 0xE4
		::System::Boolean Field_5_28; // 0xF0
		::System::Single Field_5_29; // 0xF4
		::System::Single Field_5_30; // 0xF8
		::UnityEngine::Quaternion Field_5_31; // 0xFC
		::UnityEngine::Quaternion Field_5_32; // 0x10C
		::System::Boolean Field_5_33; // 0x11C
		::System::Boolean Field_5_34; // 0x11D
		::System::Single Field_5_35; // 0x120
		::UnityEngine::Vector3 Field_5_36; // 0x124
		::UnityEngine::Vector3 Field_5_37; // 0x130
		::RPG::Client::EmoEyeCtrl_Struct_2_6E184C49E97E83A7 Field_5_38; // 0x140

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

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_METHOD_5_9681042564541CD6_OFFSET))(this);
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

		::System::Void Method_5_BF653AC3FD8A315F(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_METHOD_5_BF653AC3FD8A315F_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_9F70F7100A78F9A0(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_METHOD_5_9F70F7100A78F9A0_OFFSET))(this, a1);
		}

		::System::Single Method_5_B54AB57637A113AA(::System::Single a1, ::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData* a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_METHOD_5_B54AB57637A113AA_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Quaternion Method_5_0C9DFA95C6F28D26(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_METHOD_5_0C9DFA95C6F28D26_OFFSET))(this, a1);
		}

		::System::Void Method_5_CEE772DE95055C01(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_METHOD_5_CEE772DE95055C01_OFFSET))(this, a1);
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

		::System::Single Method_5_8B5519E0E1747D4E(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOEYECTRL_METHOD_5_8B5519E0E1747D4E_OFFSET))(this, a1);
		}
	};
}
