#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AimSolver_Struct_2_CC346D804C45C8EA.h"
#include "unitysdk/Struct_2_934D15C6B55FFFEC.h"
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

#define RPG_CLIENT_AIMSOLVER_GET_AIMERCOUNT_OFFSET UNITYSDK_OFFSET(0x9CDF3C0)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_106B26BE164E4FCD_OFFSET UNITYSDK_OFFSET(0x9CE0AB0)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_11923540E96E60E4_OFFSET UNITYSDK_OFFSET(0x9CE1A50)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_3F5823D34C4A0A38_OFFSET UNITYSDK_OFFSET(0x9CE1F60)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_412B37D6127486C3_OFFSET UNITYSDK_OFFSET(0x9CE19A0)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_4855D279E0E27DA8_OFFSET UNITYSDK_OFFSET(0x9CE1C70)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_4C7D121ED22BD1D1_OFFSET UNITYSDK_OFFSET(0x9CE1BB0)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_64D17174D10FA3CE_OFFSET UNITYSDK_OFFSET(0x9CDFD60)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_8E968BA443B7271D_OFFSET UNITYSDK_OFFSET(0x9CE2970)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_A17B38030E623502_OFFSET UNITYSDK_OFFSET(0x9CE1920)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_B530AE696D19BB54_OFFSET UNITYSDK_OFFSET(0x9CE1660)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x9CDF410)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_BBCB217B420D617D_OFFSET UNITYSDK_OFFSET(0x9CE06D0)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x9CE28F0)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_EABBE399EFB12E42_OFFSET UNITYSDK_OFFSET(0x9CDF9B0)
#define RPG_CLIENT_AIMSOLVER_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x9CDFA60)
#define RPG_CLIENT_AIMSOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9CE2BD0)
#define RPG_CLIENT_AIMSOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x9CE2B70)

namespace RPG::Client
{
	inline static constexpr unsigned int AimSolver_TypeDefinitionIndex = 63100;

	class AimSolver : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet__BoneIdxAndDepth()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AimSolver_TypeDefinitionIndex)->GetStaticField(0x27910);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>** StaticGet__QuaternionCache()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(AimSolver_TypeDefinitionIndex)->GetStaticField(0x27918);
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

		::System::Void Method_1_BA1BB49741CFDFE1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_BA1BB49741CFDFE1_OFFSET))(this);
		}

		::System::Void Method_1_F7BA13C72A6B3F58()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
		}

		::System::Boolean Method_1_BBCB217B420D617D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_BBCB217B420D617D_OFFSET))(this);
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

		::System::Void Method_1_4855D279E0E27DA8(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_4855D279E0E27DA8_OFFSET))(this, a1);
		}

		::System::Void Method_1_3F5823D34C4A0A38(::RootMotion::IKJob::IKThreadProxyContext* a1, ::Struct_2_934D15C6B55FFFEC& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_934D15C6B55FFFEC&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_3F5823D34C4A0A38_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_8E968BA443B7271D(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_8E968BA443B7271D_OFFSET))(this, a1);
		}

		::System::Void Method_1_106B26BE164E4FCD(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_106B26BE164E4FCD_OFFSET))(this, a1);
		}

		static ::System::Int32 Method_1_EABBE399EFB12E42(::UnityEngine::Transform* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMSOLVER_METHOD_1_EABBE399EFB12E42_OFFSET))(a1);
		}
	};
}
