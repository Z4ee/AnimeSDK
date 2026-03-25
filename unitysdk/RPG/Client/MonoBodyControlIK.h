#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoBodyControlIK_LimbData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7051D3A425B57EBB;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class MonoBodyControlIK_Class_1_B96D9B71B2B5BC28; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOBODYCONTROLIK_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0x9C14FF0)
#define RPG_CLIENT_MONOBODYCONTROLIK_POSTSOLVE_OFFSET UNITYSDK_OFFSET(0x9C15860)
#define RPG_CLIENT_MONOBODYCONTROLIK_PRESOLVE_OFFSET UNITYSDK_OFFSET(0x9C151B0)
#define RPG_CLIENT_MONOBODYCONTROLIK_PROCESS_OFFSET UNITYSDK_OFFSET(0x9C15000)
#define RPG_CLIENT_MONOBODYCONTROLIK_REINITIALIZE_OFFSET UNITYSDK_OFFSET(0x9C16140)
#define RPG_CLIENT_MONOBODYCONTROLIK_RESETEFFECTORTARGET_OFFSET UNITYSDK_OFFSET(0x9C16630)
#define RPG_CLIENT_MONOBODYCONTROLIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0x9C14F40)
#define RPG_CLIENT_MONOBODYCONTROLIK_SETEFFECTORTARGET_OFFSET UNITYSDK_OFFSET(0x9C16290)
#define RPG_CLIENT_MONOBODYCONTROLIK_SETFORCEUSEEFFECTOR_OFFSET UNITYSDK_OFFSET(0x9C166F0)
#define RPG_CLIENT_MONOBODYCONTROLIK_SETSPINENUM_OFFSET UNITYSDK_OFFSET(0x9C16210)
#define RPG_CLIENT_MONOBODYCONTROLIK_SETTIPBONE_OFFSET UNITYSDK_OFFSET(0x9C16190)
#define RPG_CLIENT_MONOBODYCONTROLIK_STOPTRACEEFFECTOR_OFFSET UNITYSDK_OFFSET(0x9C16980)
#define RPG_CLIENT_MONOBODYCONTROLIK__CTOR_OFFSET UNITYSDK_OFFSET(0x9C16A10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoBodyControlIK_TypeDefinitionIndex = 55951;

	class MonoBodyControlIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* Root; // 0x18
		::UnityEngine::Transform* TipBone; // 0x20
		::System::UInt32 SpineBoneNum; // 0x28
		::UnityEngine::AnimationCurve* WeightCurve; // 0x30
		::Il2CppArray<::UnityEngine::Transform*>* Shoulders; // 0x38
		::System::Single ShoulderRecoverWeight; // 0x40
		::UnityEngine::Transform* Pelvis; // 0x48
		::UnityEngine::AnimationCurve* PelvisAngleToForwardMoveCurve; // 0x50
		::UnityEngine::AnimationCurve* PelvisAngleToRightMoveCurve; // 0x58
		::Il2CppArray<::RPG::Client::MonoBodyControlIK_LimbData>* Limbs; // 0x60
		::System::Single FadeInTime; // 0x68
		::System::Single FadeOutTime; // 0x6C
		::System::Boolean Field_5_12; // 0x70
		::Class_1_7051D3A425B57EBB* Field_5_13; // 0x78
		::System::Nullable_1<::UnityEngine::Vector3> Field_5_14; // 0x80
		::System::Nullable_1<::UnityEngine::Quaternion> Field_5_15; // 0x90
		::UnityEngine::Transform* Field_5_16; // 0xA8
		::RPG::Client::MonoBodyControlIK_Class_1_B96D9B71B2B5BC28* Field_5_17; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK__CTOR_OFFSET))(this);
		}

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_SAFEINIT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsProcessable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_GET_ISPROCESSABLE_OFFSET))(this);
		}

		::System::Boolean Process(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_PROCESS_OFFSET))(this, a1);
		}

		::System::Void PreSolve(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_PRESOLVE_OFFSET))(this, a1);
		}

		::System::Void PostSolve(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_POSTSOLVE_OFFSET))(this, a1);
		}

		::System::Void Reinitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_REINITIALIZE_OFFSET))(this);
		}

		::System::Void SetTipBone(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_SETTIPBONE_OFFSET))(this, a1);
		}

		::System::Void SetSpineNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_SETSPINENUM_OFFSET))(this, a1);
		}

		::System::Void SetEffectorTarget(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_SETEFFECTORTARGET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetEffectorTarget(::System::Single a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_RESETEFFECTORTARGET_OFFSET))(this, a1, a2);
		}

		::System::Void SetForceUseEffector()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_SETFORCEUSEEFFECTOR_OFFSET))(this);
		}

		::System::Void StopTraceEffector()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBODYCONTROLIK_STOPTRACEEFFECTOR_OFFSET))(this);
		}
	};
}
