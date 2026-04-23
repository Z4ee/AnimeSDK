#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AimSolver_Struct_2_CC346D804C45C8EA.h"
#include "unitysdk/Struct_2_934D15C6B55FFFEC.h"
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

#define RPG_CLIENT_MULTIAIMSOLVER_GET_AIMERCOUNT_OFFSET UNITYSDK_OFFSET(0xAADEF90)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_106B26BE164E4FCD_OFFSET UNITYSDK_OFFSET(0xAADFEB0)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_11923540E96E60E4_OFFSET UNITYSDK_OFFSET(0xAAE0850)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_262E11E993897B67_OFFSET UNITYSDK_OFFSET(0xAADFAA0)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_412B37D6127486C3_OFFSET UNITYSDK_OFFSET(0xAAE07A0)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_4855D279E0E27DA8_OFFSET UNITYSDK_OFFSET(0xAAE0A70)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_4C7D121ED22BD1D1_OFFSET UNITYSDK_OFFSET(0xAAE09B0)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_A17B38030E623502_OFFSET UNITYSDK_OFFSET(0xAAE0720)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_A5FE044F664519B0_OFFSET UNITYSDK_OFFSET(0xAAE0520)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_B05CCFBE7A977EDF_OFFSET UNITYSDK_OFFSET(0xAAE0E30)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0xAADEFE0)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_BA287C3724AB3014_OFFSET UNITYSDK_OFFSET(0xAAE2240)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0xAAE21C0)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_D98D4F0F1165F6B5_OFFSET UNITYSDK_OFFSET(0xAADF930)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_EABBE399EFB12E42_OFFSET UNITYSDK_OFFSET(0xAADF580)
#define RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0xAADF630)
#define RPG_CLIENT_MULTIAIMSOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0xAAE24C0)
#define RPG_CLIENT_MULTIAIMSOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE2460)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiAimSolver_TypeDefinitionIndex = 63157;

	class MultiAimSolver : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet__BoneIdxAndDepth()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MultiAimSolver_TypeDefinitionIndex)->GetStaticField(0x47260);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>** StaticGet__QuaternionCache()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(MultiAimSolver_TypeDefinitionIndex)->GetStaticField(0x47268);
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

		::System::Void Method_1_BA1BB49741CFDFE1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_BA1BB49741CFDFE1_OFFSET))(this);
		}

		::System::Void Method_1_F7BA13C72A6B3F58()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
		}

		::System::Boolean Method_1_262E11E993897B67()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_262E11E993897B67_OFFSET))(this);
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

		::System::Void Method_1_4855D279E0E27DA8(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_4855D279E0E27DA8_OFFSET))(this, a1);
		}

		::System::Void Method_1_B05CCFBE7A977EDF(::RootMotion::IKJob::IKThreadProxyContext* a1, ::Struct_2_934D15C6B55FFFEC& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_934D15C6B55FFFEC&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_B05CCFBE7A977EDF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_BA287C3724AB3014(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_BA287C3724AB3014_OFFSET))(this, a1);
		}

		::System::Void Method_1_106B26BE164E4FCD(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_106B26BE164E4FCD_OFFSET))(this, a1);
		}

		static ::System::Int32 Method_1_EABBE399EFB12E42(::UnityEngine::Transform* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIAIMSOLVER_METHOD_1_EABBE399EFB12E42_OFFSET))(a1);
		}
	};
}
