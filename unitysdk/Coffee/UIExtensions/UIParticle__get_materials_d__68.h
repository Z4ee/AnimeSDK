#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Coffee::UIExtensions { class UIParticle; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Material; }

#define COFFEE_UIEXTENSIONS_UIPARTICLE__GET_MATERIALS_D__68_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E2F08B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__GET_MATERIALS_D__68_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_MATERIAL__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E2F0B90)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__GET_MATERIALS_D__68_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_MATERIAL__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E2F0B20)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__GET_MATERIALS_D__68_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E2F0C10)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__GET_MATERIALS_D__68_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E2F0B80)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__GET_MATERIALS_D__68_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E2F0B30)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__GET_MATERIALS_D__68_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E2F08A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLE__GET_MATERIALS_D__68__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E5070)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticle__get_materials_d__68_TypeDefinitionIndex = 34858;

	class UIParticle__get_materials_d__68 : public ::System::Object
	{
	public:
		::UnityEngine::Material* __2__current; // 0x10
		::Coffee::UIExtensions::UIParticle* __4__this; // 0x18
		::System::Int32 _i_5__2; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Int32 __l__initialThreadId; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__GET_MATERIALS_D__68__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__GET_MATERIALS_D__68_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__GET_MATERIALS_D__68_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::Material* System_Collections_Generic_IEnumerator_UnityEngine_Material__get_Current()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__GET_MATERIALS_D__68_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_MATERIAL__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__GET_MATERIALS_D__68_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__GET_MATERIALS_D__68_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::Material*>* System_Collections_Generic_IEnumerable_UnityEngine_Material__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__GET_MATERIALS_D__68_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_UNITYENGINE_MATERIAL__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLE__GET_MATERIALS_D__68_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
