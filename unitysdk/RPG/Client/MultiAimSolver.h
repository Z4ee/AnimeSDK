#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AimSolver_Struct_2_CC346D804C45C8EA.h"
#include "unitysdk/Struct_2_B87BAA35D432DB99.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AimSolverMultiAimer; }
namespace RPG::Client { template <typename T1, typename T2> class AimEvaluator_2; }
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MULTIAIMSOLVER_GET_AIMERCOUNT_OFFSET UNITYSDK_OFFSET(0x1907B630)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_11923540E96E60E4_OFFSET UNITYSDK_OFFSET(0x1907CFA0)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_323EC9261331AA3B_OFFSET UNITYSDK_OFFSET(0x1907C5D0)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_412B37D6127486C3_OFFSET UNITYSDK_OFFSET(0x1907CF00)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_42075C80014CA6D1_OFFSET UNITYSDK_OFFSET(0x1907D180)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_4C7D121ED22BD1D1_OFFSET UNITYSDK_OFFSET(0x1907D0C0)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x1907BD90)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_98710A5E8A56A8E3_OFFSET UNITYSDK_OFFSET(0x1907B680)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_A17B38030E623502_OFFSET UNITYSDK_OFFSET(0x1907CE80)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_A5FE044F664519B0_OFFSET UNITYSDK_OFFSET(0x1907CC90)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_B05CCFBE7A977EDF_OFFSET UNITYSDK_OFFSET(0x1907D680)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_BA287C3724AB3014_OFFSET UNITYSDK_OFFSET(0x1907E760)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x1907E6E0)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_D98D4F0F1165F6B5_OFFSET UNITYSDK_OFFSET(0x1907C030)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_DBF11F8CA09BDDA0_OFFSET UNITYSDK_OFFSET(0x1907C1A0)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_EABBE399EFB12E42_OFFSET UNITYSDK_OFFSET(0x1907BCE0)
#define RPG_CLIENT_MULTIAIMSOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1907E9C0)
#define RPG_CLIENT_MULTIAIMSOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1907E960)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiAimSolver_TypeDefinitionIndex = 65445;

	class MultiAimSolver : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet__BoneIdxAndDepth()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MultiAimSolver_TypeDefinitionIndex)->GetStaticField(0x5DB00);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>** StaticGet__QuaternionCache()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(MultiAimSolver_TypeDefinitionIndex)->GetStaticField(0x5DB08);
		}
		::Il2CppArray<::RPG::Client::AimSolverMultiAimer*>* Aimers; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::AimSolver_Struct_2_CC346D804C45C8EA>* _SolveStepBatch; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER__CCTOR_OFFSET))();
		}

		::System::Int32 get_AimerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_GET_AIMERCOUNT_OFFSET))(this);
		}

		::System::Void Method_1_98710A5E8A56A8E3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_98710A5E8A56A8E3_OFFSET))(this);
		}

		::System::Void Method_1_739DB9F245C7FAD0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
		}

		::System::Boolean Method_1_DBF11F8CA09BDDA0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_DBF11F8CA09BDDA0_OFFSET))(this);
		}

		::System::Int32 Method_1_A5FE044F664519B0(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_A5FE044F664519B0_OFFSET))(this, a1);
		}

		::System::Single Method_1_A17B38030E623502(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_A17B38030E623502_OFFSET))(this, a1);
		}

		::System::Void Method_1_412B37D6127486C3(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_412B37D6127486C3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_11923540E96E60E4(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_11923540E96E60E4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_4C7D121ED22BD1D1(::System::Int32 a1, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>* a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_4C7D121ED22BD1D1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_1_D98D4F0F1165F6B5(::System::Int32 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_D98D4F0F1165F6B5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_42075C80014CA6D1(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_42075C80014CA6D1_OFFSET))(this, a1);
		}

		::System::Void Method_1_B05CCFBE7A977EDF(::RootMotion::IKJob::IKThreadProxyContext* a1, ::Struct_2_B87BAA35D432DB99& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_B87BAA35D432DB99&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_B05CCFBE7A977EDF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_BA287C3724AB3014(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_BA287C3724AB3014_OFFSET))(this, a1);
		}

		::System::Void Method_1_323EC9261331AA3B(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_323EC9261331AA3B_OFFSET))(this, a1);
		}

		static ::System::Int32 Method_1_EABBE399EFB12E42(::UnityEngine::Transform* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_EABBE399EFB12E42_OFFSET))(a1);
		}
	};
}
