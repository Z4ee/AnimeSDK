#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { template <typename T> class HEU_TestHelpers_RequireClass_1; }
namespace HoudiniEngineUnity { template <typename T> class HEU_TestHelpers_RequireStruct_1; }
namespace HoudiniEngineUnity { template <typename T> class IEquivableWrapperClass_1; }
namespace HoudiniEngineUnity { template <typename T> class IEquivable_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_TESTHELPERS_ASSERTTRUELOGEQUIVALENT_1_OFFSET UNITYSDK_OFFSET(0x17F64C90)
#define HOUDINIENGINEUNITY_HEU_TESTHELPERS_ASSERTTRUELOGEQUIVALENT_2_OFFSET UNITYSDK_OFFSET(0x17F64EA0)
#define HOUDINIENGINEUNITY_HEU_TESTHELPERS_ASSERTTRUELOGEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x17F63D70)
#define HOUDINIENGINEUNITY_HEU_TESTHELPERS_PRINTTESTLOGANDSETRESULT_OFFSET UNITYSDK_OFFSET(0x17F64B40)
#define HOUDINIENGINEUNITY_HEU_TESTHELPERS_SHOULDBETESTED_1_OFFSET UNITYSDK_OFFSET(0x17F64DD0)
#define HOUDINIENGINEUNITY_HEU_TESTHELPERS_SHOULDBETESTED_OFFSET UNITYSDK_OFFSET(0x17F63E20)
#define HOUDINIENGINEUNITY_HEU_TESTHELPERS_TESTOUTPUTOBJECTEQUIVALENCE_OFFSET UNITYSDK_OFFSET(0x17F63FA0)
#define HOUDINIENGINEUNITY_HEU_TESTHELPERS__CTOR_OFFSET UNITYSDK_OFFSET(0x17F650E0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_TestHelpers_TypeDefinitionIndex = 37727;

	class HEU_TestHelpers : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TESTHELPERS__CTOR_OFFSET))(this);
		}

		static ::System::Boolean AssertTrueLogEquivalent(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::System::Boolean& a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean&, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TESTHELPERS_ASSERTTRUELOGEQUIVALENT_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Boolean AssertTrueLogEquivalent_1(::System::String* a1, ::System::String* a2, ::System::Boolean& a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean&, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TESTHELPERS_ASSERTTRUELOGEQUIVALENT_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Boolean AssertTrueLogEquivalent_2(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean& a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::System::Boolean&, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TESTHELPERS_ASSERTTRUELOGEQUIVALENT_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void PrintTestLogAndSetResult(::System::Boolean a1, ::System::Boolean& a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean&, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TESTHELPERS_PRINTTESTLOGANDSETRESULT_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean ShouldBeTested(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::System::Boolean& a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean&, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TESTHELPERS_SHOULDBETESTED_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean ShouldBeTested_1(::System::String* a1, ::System::String* a2, ::System::Boolean& a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean&, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TESTHELPERS_SHOULDBETESTED_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TestOutputObjectEquivalence(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TESTHELPERS_TESTOUTPUTOBJECTEQUIVALENCE_OFFSET))(a1, a2);
		}
	};
}
