#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { template <typename T1, typename T2> class AimEvaluator_2; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIMSOLVERAIMER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9CE1120)
#define RPG_CLIENT_AIMSOLVERAIMER_GET_TARGETALPHA_OFFSET UNITYSDK_OFFSET(0x9CE3A10)
#define RPG_CLIENT_AIMSOLVERAIMER_GET_TARGETEVALUATOR_OFFSET UNITYSDK_OFFSET(0x9CE39D0)
#define RPG_CLIENT_AIMSOLVERAIMER_GET_TARGETLIMITHEIGHT_OFFSET UNITYSDK_OFFSET(0x9CE39F0)
#define RPG_CLIENT_AIMSOLVERAIMER_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x9CE39A0)
#define RPG_CLIENT_AIMSOLVERAIMER_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x9CE3980)
#define RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_1114CAE6C720FB91_OFFSET UNITYSDK_OFFSET(0x9CE1190)
#define RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x9CE12E0)
#define RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_332D6988D3174828_OFFSET UNITYSDK_OFFSET(0x9CE2C80)
#define RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_472E9805B297BD58_OFFSET UNITYSDK_OFFSET(0x9CE1890)
#define RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0x9CE3090)
#define RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_89724E4095470BDE_OFFSET UNITYSDK_OFFSET(0x9CE32A0)
#define RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_BB8271ED1BDF8503_OFFSET UNITYSDK_OFFSET(0x9CE31F0)
#define RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x9CDFEE0)
#define RPG_CLIENT_AIMSOLVERAIMER_SET_TARGETALPHA_OFFSET UNITYSDK_OFFSET(0x9CE3A20)
#define RPG_CLIENT_AIMSOLVERAIMER_SET_TARGETEVALUATOR_OFFSET UNITYSDK_OFFSET(0x9CE39E0)
#define RPG_CLIENT_AIMSOLVERAIMER_SET_TARGETLIMITHEIGHT_OFFSET UNITYSDK_OFFSET(0x9CE3A00)
#define RPG_CLIENT_AIMSOLVERAIMER_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x9CE39C0)
#define RPG_CLIENT_AIMSOLVERAIMER_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x9CE3990)
#define RPG_CLIENT_AIMSOLVERAIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x9CE3A30)

namespace RPG::Client
{
	inline static constexpr unsigned int AimSolverAimer_TypeDefinitionIndex = 63099;

	class AimSolverAimer : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnityEngine::Vector3 Axis; // 0x18
		::UnityEngine::Transform* AimTransform; // 0x28
		::System::Boolean AimOnBone; // 0x30
		::System::Int32 PitchUpLimit; // 0x34
		::System::Int32 PitchDownLimit; // 0x38
		::UnityEngine::AnimationCurve* WeightCurves; // 0x40
		::Il2CppArray<::UnityEngine::Transform*>* Bones; // 0x48
		::System::Single _Weight_k__BackingField; // 0x50
		::UnityEngine::Vector3 _Target_k__BackingField; // 0x54
		::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>* _TargetEvaluator_k__BackingField; // 0x60
		::System::Single _TargetLimitHeight_k__BackingField; // 0x68
		::UnityEngine::Vector2 _TargetAlpha_k__BackingField; // 0x6C
		::UnityEngine::Matrix4x4 _AimRelativeMatrix; // 0x74
		::UnityEngine::Vector3 _ActualTarget; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_D737CD2779D51A4E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_D737CD2779D51A4E_OFFSET))(this);
		}

		::System::Void Method_1_81A66FB988DFA6AA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_81A66FB988DFA6AA_OFFSET))(this);
		}

		::UnityEngine::Quaternion Method_1_1114CAE6C720FB91(::System::Int32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_1114CAE6C720FB91_OFFSET))(this, a1);
		}

		::System::Void Method_1_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_1290EA767C459179_OFFSET))(this);
		}

		::System::Boolean Method_1_472E9805B297BD58(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_472E9805B297BD58_OFFSET))(this, a1);
		}

		::System::Single Method_1_BB8271ED1BDF8503(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_BB8271ED1BDF8503_OFFSET))(this, a1);
		}

		::System::Void Method_1_332D6988D3174828(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_332D6988D3174828_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Quaternion Method_1_89724E4095470BDE(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_89724E4095470BDE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void set_Weight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_SET_WEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Target()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_SET_TARGET_OFFSET))(this, value);
		}

		::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>* get_TargetEvaluator()
		{
			return ((::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_GET_TARGETEVALUATOR_OFFSET))(this);
		}

		::System::Void set_TargetEvaluator(::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_SET_TARGETEVALUATOR_OFFSET))(this, value);
		}

		::System::Single get_TargetLimitHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_GET_TARGETLIMITHEIGHT_OFFSET))(this);
		}

		::System::Void set_TargetLimitHeight(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_SET_TARGETLIMITHEIGHT_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_TargetAlpha()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_GET_TARGETALPHA_OFFSET))(this);
		}

		::System::Void set_TargetAlpha(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_SET_TARGETALPHA_OFFSET))(this, value);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_GET_ISVALID_OFFSET))(this);
		}
	};
}
