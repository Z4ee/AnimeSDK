#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AimSolver_Struct_2_CC346D804C45C8EA.h"
#include "unitysdk/Struct_2_B87BAA35D432DB99.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AimSolverAimer; }
namespace RPG::Client { template <typename T1, typename T2> class AimEvaluator_2; }
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIMSOLVER_GET_AIMERCOUNT_OFFSET UNITYSDK_OFFSET(0xC717DA0)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_11923540E96E60E4_OFFSET UNITYSDK_OFFSET(0xC71A400)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_262E11E993897B67_OFFSET UNITYSDK_OFFSET(0xC7190B0)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_3F5823D34C4A0A38_OFFSET UNITYSDK_OFFSET(0xC71A950)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_412B37D6127486C3_OFFSET UNITYSDK_OFFSET(0xC71A360)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_42075C80014CA6D1_OFFSET UNITYSDK_OFFSET(0xC71A5E0)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_4C7D121ED22BD1D1_OFFSET UNITYSDK_OFFSET(0xC71A520)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_64D17174D10FA3CE_OFFSET UNITYSDK_OFFSET(0xC718770)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_653151ACD8E3C108_OFFSET UNITYSDK_OFFSET(0xC717DF0)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0xC7184D0)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_843619D883256BB2_OFFSET UNITYSDK_OFFSET(0xC7194A0)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_8E968BA443B7271D_OFFSET UNITYSDK_OFFSET(0xC71B210)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_A17B38030E623502_OFFSET UNITYSDK_OFFSET(0xC71A2E0)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_B530AE696D19BB54_OFFSET UNITYSDK_OFFSET(0xC71A020)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0xC71B190)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_EABBE399EFB12E42_OFFSET UNITYSDK_OFFSET(0xC718420)
#define RPG_CLIENT_AIMSOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC71B450)
#define RPG_CLIENT_AIMSOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0xC71B3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AimSolver_TypeDefinitionIndex = 68400;

	class AimSolver : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet__BoneIdxAndDepth()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AimSolver_TypeDefinitionIndex)->GetStaticField(0x65040);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>** StaticGet__QuaternionCache()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(AimSolver_TypeDefinitionIndex)->GetStaticField(0x65048);
		}
		::Il2CppArray<::RPG::Client::AimSolverAimer*>* Aimers; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::AimSolver_Struct_2_CC346D804C45C8EA>* _SolveStepBatch; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER__CCTOR_OFFSET))();
		}

		::System::Int32 get_AimerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_GET_AIMERCOUNT_OFFSET))(this);
		}

		::System::Void Method_1_653151ACD8E3C108()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_653151ACD8E3C108_OFFSET))(this);
		}

		::System::Void Method_1_739DB9F245C7FAD0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
		}

		::System::Boolean Method_1_262E11E993897B67()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_262E11E993897B67_OFFSET))(this);
		}

		::System::Int32 Method_1_B530AE696D19BB54(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_B530AE696D19BB54_OFFSET))(this, a1);
		}

		::System::Single Method_1_A17B38030E623502(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_A17B38030E623502_OFFSET))(this, a1);
		}

		::System::Void Method_1_412B37D6127486C3(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_412B37D6127486C3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_11923540E96E60E4(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_11923540E96E60E4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_4C7D121ED22BD1D1(::System::Int32 a1, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>* a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_4C7D121ED22BD1D1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_1_64D17174D10FA3CE(::System::Int32 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_64D17174D10FA3CE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_42075C80014CA6D1(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_42075C80014CA6D1_OFFSET))(this, a1);
		}

		::System::Void Method_1_3F5823D34C4A0A38(::RootMotion::IKJob::IKThreadProxyContext* a1, ::Struct_2_B87BAA35D432DB99& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_B87BAA35D432DB99&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_3F5823D34C4A0A38_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_8E968BA443B7271D(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_8E968BA443B7271D_OFFSET))(this, a1);
		}

		::System::Void Method_1_843619D883256BB2(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_843619D883256BB2_OFFSET))(this, a1);
		}

		static ::System::Int32 Method_1_EABBE399EFB12E42(::UnityEngine::Transform* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_EABBE399EFB12E42_OFFSET))(a1);
		}
	};
}
