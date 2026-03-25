#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/IKHitReactionChainEnd.h"
#include "unitysdk/RPG/Client/IKHitReaction_Struct_2_CC346D804C45C8EA_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_53196D6FF2C19831;
namespace RPG::Client { class IKHitReactionSpine; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_IKHITREACTION_METHOD_1_1B3D8773D1869301_OFFSET UNITYSDK_OFFSET(0x9932310)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x9933B10)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x9934A10)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_2DF0EFFDA2B6622E_OFFSET UNITYSDK_OFFSET(0x9933D10)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_4BE13EEB6DEF71F5_OFFSET UNITYSDK_OFFSET(0x99357D0)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_5B0C21255CD96FEA_OFFSET UNITYSDK_OFFSET(0x9932240)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0x9933B70)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_62D279C79F0018EF_OFFSET UNITYSDK_OFFSET(0x99326C0)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_91C638630F1EEE79_1_OFFSET UNITYSDK_OFFSET(0x9936120)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_91C638630F1EEE79_2_OFFSET UNITYSDK_OFFSET(0x99361B0)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_91C638630F1EEE79_OFFSET UNITYSDK_OFFSET(0x99353D0)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_9B5A8342063042C5_OFFSET UNITYSDK_OFFSET(0x9933830)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_B2F5FC39AA96B863_OFFSET UNITYSDK_OFFSET(0x99351D0)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0x9932450)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_C3B113AF6205EF51_OFFSET UNITYSDK_OFFSET(0x9935EF0)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_C66E15B631BB1D0F_OFFSET UNITYSDK_OFFSET(0x99356E0)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_C796A0B42720FBD3_OFFSET UNITYSDK_OFFSET(0x99348B0)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_EBACF9DE1FDD063D_OFFSET UNITYSDK_OFFSET(0x9933570)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_EC00644AF39B5DED_OFFSET UNITYSDK_OFFSET(0x9935090)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_FA1B171818AF9953_OFFSET UNITYSDK_OFFSET(0x9935460)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_FD12EB6765049173_OFFSET UNITYSDK_OFFSET(0x9932970)
#define RPG_CLIENT_IKHITREACTION_METHOD_1_FD1EFD5A6E481F5B_OFFSET UNITYSDK_OFFSET(0x99360B0)
#define RPG_CLIENT_IKHITREACTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x9936280)
#define RPG_CLIENT_IKHITREACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x9936240)

namespace RPG::Client
{
	inline static constexpr unsigned int IKHitReaction_TypeDefinitionIndex = 55892;

	class IKHitReaction : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::RPG::Client::IKHitReaction_Struct_2_CC346D804C45C8EA_1>** StaticGet__JointLUT()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::RPG::Client::IKHitReaction_Struct_2_CC346D804C45C8EA_1>**)Il2CppClass::FromTypeDefinitionIndex(IKHitReaction_TypeDefinitionIndex)->GetStaticField(0x1F940);
		}
		static ::System::Collections::Generic::List_1<::Class_1_53196D6FF2C19831*>** StaticGet__ChainCache()
		{
			return (::System::Collections::Generic::List_1<::Class_1_53196D6FF2C19831*>**)Il2CppClass::FromTypeDefinitionIndex(IKHitReaction_TypeDefinitionIndex)->GetStaticField(0x1F948);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>** StaticGet__ChainTargetCache()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(IKHitReaction_TypeDefinitionIndex)->GetStaticField(0x1F950);
		}
		::System::Single EnergyLossFactor; // 0x10
		::System::Single AngularSpeedMax; // 0x14
		::System::Single ResilientSpeed; // 0x18
		::System::Single InertiaForceFactor; // 0x1C
		::RPG::Client::IKHitReactionSpine* Spine; // 0x20
		::System::Single _JointsDeltaRotSum; // 0x28
		::UnityEngine::Transform* _RootTransform; // 0x30
		::Il2CppArray<::Class_1_53196D6FF2C19831*>* _JointChains; // 0x38
		::System::Collections::Generic::Stack_1<::UnityEngine::Vector3>* _PendingForce; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION__CCTOR_OFFSET))();
		}

		::System::Void Method_1_5B0C21255CD96FEA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_5B0C21255CD96FEA_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_1B3D8773D1869301()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_1B3D8773D1869301_OFFSET))(this);
		}

		::System::Void Method_1_BE4EBC8FF4054312()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_BE4EBC8FF4054312_OFFSET))(this);
		}

		::System::Void Method_1_62D279C79F0018EF(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_62D279C79F0018EF_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_9B5A8342063042C5(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_9B5A8342063042C5_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_EBACF9DE1FDD063D(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_EBACF9DE1FDD063D_OFFSET))(this, a1);
		}

		::System::Void Method_1_C796A0B42720FBD3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_C796A0B42720FBD3_OFFSET))(this);
		}

		::System::Void Method_1_2566AD459572DFC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_2566AD459572DFC3_OFFSET))(this);
		}

		::System::Void Method_1_2DF0EFFDA2B6622E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_2DF0EFFDA2B6622E_OFFSET))(this, a1);
		}

		::System::Void Method_1_EC00644AF39B5DED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_EC00644AF39B5DED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_53196D6FF2C19831*>* Method_1_B2F5FC39AA96B863(::Class_1_53196D6FF2C19831* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_53196D6FF2C19831*>*(*)(::PVOID, ::Class_1_53196D6FF2C19831*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_B2F5FC39AA96B863_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_5D3D37F2BAE9FB65()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_5D3D37F2BAE9FB65_OFFSET))(this);
		}

		::System::Void Method_1_FD12EB6765049173(::RPG::Client::IKHitReactionChainEnd a1, ::UnityEngine::Transform* a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IKHitReactionChainEnd, ::UnityEngine::Transform*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_FD12EB6765049173_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_1_4BE13EEB6DEF71F5(::Class_1_53196D6FF2C19831* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53196D6FF2C19831*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_4BE13EEB6DEF71F5_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_1_C66E15B631BB1D0F(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_C66E15B631BB1D0F_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		static ::System::Single Method_1_FD1EFD5A6E481F5B(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_FD1EFD5A6E481F5B_OFFSET))(a1, a2);
		}

		static ::System::Single Method_1_91C638630F1EEE79(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_91C638630F1EEE79_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Method_1_91C638630F1EEE79_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_91C638630F1EEE79_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Single Method_1_91C638630F1EEE79_2(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_91C638630F1EEE79_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Method_1_FA1B171818AF9953(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::Vector3& a5, ::System::Single& a6)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_FA1B171818AF9953_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Vector3 Method_1_C3B113AF6205EF51(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_IKHITREACTION_METHOD_1_C3B113AF6205EF51_OFFSET))(a1);
		}
	};
}
