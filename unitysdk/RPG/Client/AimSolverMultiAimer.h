#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AimerConfig; }
namespace RPG::Client { template <typename T1, typename T2> class AimEvaluator_2; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIMSOLVERMULTIAIMER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x17EB3D70)
#define RPG_CLIENT_AIMSOLVERMULTIAIMER_GET_TARGETALPHA_OFFSET UNITYSDK_OFFSET(0x17EB5950)
#define RPG_CLIENT_AIMSOLVERMULTIAIMER_GET_TARGETEVALUATOR_OFFSET UNITYSDK_OFFSET(0x17EB5910)
#define RPG_CLIENT_AIMSOLVERMULTIAIMER_GET_TARGETLIMITHEIGHT_OFFSET UNITYSDK_OFFSET(0x17EB5930)
#define RPG_CLIENT_AIMSOLVERMULTIAIMER_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x17EB58E0)
#define RPG_CLIENT_AIMSOLVERMULTIAIMER_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x17EB58C0)
#define RPG_CLIENT_AIMSOLVERMULTIAIMER_METHOD_1_06052BE3262A4192_OFFSET UNITYSDK_OFFSET(0x17EB4D90)
#define RPG_CLIENT_AIMSOLVERMULTIAIMER_METHOD_1_374781907C88EFD7_OFFSET UNITYSDK_OFFSET(0x17EB46A0)
#define RPG_CLIENT_AIMSOLVERMULTIAIMER_METHOD_1_472E9805B297BD58_OFFSET UNITYSDK_OFFSET(0x17EB5830)
#define RPG_CLIENT_AIMSOLVERMULTIAIMER_METHOD_1_4F6E40C18A7A5A9E_OFFSET UNITYSDK_OFFSET(0x17EB3AB0)
#define RPG_CLIENT_AIMSOLVERMULTIAIMER_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x17EB4860)
#define RPG_CLIENT_AIMSOLVERMULTIAIMER_METHOD_1_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x17EB4530)
#define RPG_CLIENT_AIMSOLVERMULTIAIMER_METHOD_1_BB8271ED1BDF8503_OFFSET UNITYSDK_OFFSET(0x17EB4CE0)
#define RPG_CLIENT_AIMSOLVERMULTIAIMER_SET_TARGETALPHA_OFFSET UNITYSDK_OFFSET(0x17EB5960)
#define RPG_CLIENT_AIMSOLVERMULTIAIMER_SET_TARGETEVALUATOR_OFFSET UNITYSDK_OFFSET(0x17EB5920)
#define RPG_CLIENT_AIMSOLVERMULTIAIMER_SET_TARGETLIMITHEIGHT_OFFSET UNITYSDK_OFFSET(0x17EB5940)
#define RPG_CLIENT_AIMSOLVERMULTIAIMER_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x17EB5900)
#define RPG_CLIENT_AIMSOLVERMULTIAIMER_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x17EB58D0)
#define RPG_CLIENT_AIMSOLVERMULTIAIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x17EB5970)

namespace RPG::Client
{
	inline static constexpr unsigned int AimSolverMultiAimer_TypeDefinitionIndex = 65444;

	class AimSolverMultiAimer : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::RPG::Client::AimerConfig* VirtualAimer; // 0x18
		::RPG::Client::AimerConfig* MainAimer; // 0x20
		::Il2CppArray<::RPG::Client::AimerConfig*>* AttachAimers; // 0x28
		::UnityEngine::AnimationCurve* WeightCurves; // 0x30
		::Il2CppArray<::UnityEngine::Transform*>* Bones; // 0x38
		::System::Single _Weight_k__BackingField; // 0x40
		::UnityEngine::Vector3 _Target_k__BackingField; // 0x44
		::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>* _TargetEvaluator_k__BackingField; // 0x50
		::System::Single _TargetLimitHeight_k__BackingField; // 0x58
		::UnityEngine::Vector2 _TargetAlpha_k__BackingField; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_4F6E40C18A7A5A9E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER_METHOD_1_4F6E40C18A7A5A9E_OFFSET))(this);
		}

		::System::Void Method_1_A84CEAF7AFA573B3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER_METHOD_1_A84CEAF7AFA573B3_OFFSET))(this);
		}

		::UnityEngine::Quaternion Method_1_374781907C88EFD7(::System::Int32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER_METHOD_1_374781907C88EFD7_OFFSET))(this, a1);
		}

		::System::Void Method_1_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
		}

		::System::Boolean Method_1_472E9805B297BD58(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER_METHOD_1_472E9805B297BD58_OFFSET))(this, a1);
		}

		::System::Single Method_1_BB8271ED1BDF8503(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER_METHOD_1_BB8271ED1BDF8503_OFFSET))(this, a1);
		}

		static ::UnityEngine::Quaternion Method_1_06052BE3262A4192(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER_METHOD_1_06052BE3262A4192_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void set_Weight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER_SET_WEIGHT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Target()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER_SET_TARGET_OFFSET))(this, a1);
		}

		::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>* get_TargetEvaluator()
		{
			return ((::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER_GET_TARGETEVALUATOR_OFFSET))(this);
		}

		::System::Void set_TargetEvaluator(::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER_SET_TARGETEVALUATOR_OFFSET))(this, a1);
		}

		::System::Single get_TargetLimitHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER_GET_TARGETLIMITHEIGHT_OFFSET))(this);
		}

		::System::Void set_TargetLimitHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER_SET_TARGETLIMITHEIGHT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_TargetAlpha()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER_GET_TARGETALPHA_OFFSET))(this);
		}

		::System::Void set_TargetAlpha(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER_SET_TARGETALPHA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERMULTIAIMER_GET_ISVALID_OFFSET))(this);
		}
	};
}
