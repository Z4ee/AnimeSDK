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

#define RPG_CLIENT_AIMSOLVERAIMER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xB2D0390)
#define RPG_CLIENT_AIMSOLVERAIMER_GET_TARGETALPHA_OFFSET UNITYSDK_OFFSET(0xB2D2A70)
#define RPG_CLIENT_AIMSOLVERAIMER_GET_TARGETEVALUATOR_OFFSET UNITYSDK_OFFSET(0xB2D2A30)
#define RPG_CLIENT_AIMSOLVERAIMER_GET_TARGETLIMITHEIGHT_OFFSET UNITYSDK_OFFSET(0xB2D2A50)
#define RPG_CLIENT_AIMSOLVERAIMER_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xB2D2A00)
#define RPG_CLIENT_AIMSOLVERAIMER_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xB2D29E0)
#define RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_1114CAE6C720FB91_OFFSET UNITYSDK_OFFSET(0xB2D0400)
#define RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xB2D0540)
#define RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_1BFACD6C7C67841A_OFFSET UNITYSDK_OFFSET(0xB2D2320)
#define RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_332D6988D3174828_OFFSET UNITYSDK_OFFSET(0xB2D1DF0)
#define RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_472E9805B297BD58_OFFSET UNITYSDK_OFFSET(0xB2D0AB0)
#define RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0xB2D2120)
#define RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_BB8271ED1BDF8503_OFFSET UNITYSDK_OFFSET(0xB2D2270)
#define RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0xB2CF130)
#define RPG_CLIENT_AIMSOLVERAIMER_SET_TARGETALPHA_OFFSET UNITYSDK_OFFSET(0xB2D2A80)
#define RPG_CLIENT_AIMSOLVERAIMER_SET_TARGETEVALUATOR_OFFSET UNITYSDK_OFFSET(0xB2D2A40)
#define RPG_CLIENT_AIMSOLVERAIMER_SET_TARGETLIMITHEIGHT_OFFSET UNITYSDK_OFFSET(0xB2D2A60)
#define RPG_CLIENT_AIMSOLVERAIMER_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xB2D2A20)
#define RPG_CLIENT_AIMSOLVERAIMER_SET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xB2D29F0)
#define RPG_CLIENT_AIMSOLVERAIMER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2D2A90)

namespace RPG::Client
{
	inline static constexpr unsigned int AimSolverAimer_TypeDefinitionIndex = 64016;

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

		static ::UnityEngine::Quaternion Method_1_1BFACD6C7C67841A(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_METHOD_1_1BFACD6C7C67841A_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_GET_WEIGHT_OFFSET))(this);
		}

		::System::Void set_Weight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_SET_WEIGHT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Target()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_SET_TARGET_OFFSET))(this, a1);
		}

		::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>* get_TargetEvaluator()
		{
			return ((::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_GET_TARGETEVALUATOR_OFFSET))(this);
		}

		::System::Void set_TargetEvaluator(::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_SET_TARGETEVALUATOR_OFFSET))(this, a1);
		}

		::System::Single get_TargetLimitHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_GET_TARGETLIMITHEIGHT_OFFSET))(this);
		}

		::System::Void set_TargetLimitHeight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_SET_TARGETLIMITHEIGHT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_TargetAlpha()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_GET_TARGETALPHA_OFFSET))(this);
		}

		::System::Void set_TargetAlpha(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_SET_TARGETALPHA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVERAIMER_GET_ISVALID_OFFSET))(this);
		}
	};
}
