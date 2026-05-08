#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/PrefabModificationType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define SIRENIX_SERIALIZATION_PREFABMODIFICATION_APPLYDICTIONARYMODIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1B103670)
#define SIRENIX_SERIALIZATION_PREFABMODIFICATION_APPLYLISTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B102470)
#define SIRENIX_SERIALIZATION_PREFABMODIFICATION_APPLYVALUE_OFFSET UNITYSDK_OFFSET(0x1B102330)
#define SIRENIX_SERIALIZATION_PREFABMODIFICATION_APPLY_OFFSET UNITYSDK_OFFSET(0x1B102250)
#define SIRENIX_SERIALIZATION_PREFABMODIFICATION_GETINSTANCEFROMPATH_OFFSET UNITYSDK_OFFSET(0x1B103D10)
#define SIRENIX_SERIALIZATION_PREFABMODIFICATION_GETINSTANCEOFSTEP_OFFSET UNITYSDK_OFFSET(0x1B1044A0)
#define SIRENIX_SERIALIZATION_PREFABMODIFICATION_REPLACEALLREFERENCESINGRAPH_OFFSET UNITYSDK_OFFSET(0x1B103EC0)
#define SIRENIX_SERIALIZATION_PREFABMODIFICATION_SETINSTANCETOPATH_1_OFFSET UNITYSDK_OFFSET(0x1B1055E0)
#define SIRENIX_SERIALIZATION_PREFABMODIFICATION_SETINSTANCETOPATH_OFFSET UNITYSDK_OFFSET(0x1B103E10)
#define SIRENIX_SERIALIZATION_PREFABMODIFICATION_TRYSETINSTANCEOFSTEP_OFFSET UNITYSDK_OFFSET(0x1B1056F0)
#define SIRENIX_SERIALIZATION_PREFABMODIFICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B106D10)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int PrefabModification_TypeDefinitionIndex = 7386;

	class PrefabModification : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* ReferencePaths; // 0x10
		::System::String* Path; // 0x18
		::Il2CppArray<::System::Object*>* DictionaryKeysAdded; // 0x20
		::System::Object* ModifiedValue; // 0x28
		::Il2CppArray<::System::Object*>* DictionaryKeysRemoved; // 0x30
		::Sirenix::Serialization::PrefabModificationType ModificationType; // 0x38
		::System::Int32 NewLength; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PREFABMODIFICATION__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::UnityEngine::Object* unityObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PREFABMODIFICATION_APPLY_OFFSET))(this, unityObject);
		}

		::System::Void ApplyValue(::UnityEngine::Object* unityObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PREFABMODIFICATION_APPLYVALUE_OFFSET))(this, unityObject);
		}

		::System::Void ApplyListLength(::UnityEngine::Object* unityObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PREFABMODIFICATION_APPLYLISTLENGTH_OFFSET))(this, unityObject);
		}

		::System::Void ApplyDictionaryModifications(::UnityEngine::Object* unityObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PREFABMODIFICATION_APPLYDICTIONARYMODIFICATIONS_OFFSET))(this, unityObject);
		}

		static ::System::Void ReplaceAllReferencesInGraph(::System::Object* graph, ::System::Object* oldReference, ::System::Object* newReference, ::System::Collections::Generic::HashSet_1<::System::Object*>* processedReferences)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::Collections::Generic::HashSet_1<::System::Object*>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PREFABMODIFICATION_REPLACEALLREFERENCESINGRAPH_OFFSET))(graph, oldReference, newReference, processedReferences);
		}

		static ::System::Object* GetInstanceFromPath(::System::String* path, ::System::Object* instance)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PREFABMODIFICATION_GETINSTANCEFROMPATH_OFFSET))(path, instance);
		}

		static ::System::Object* GetInstanceOfStep(::System::String* step, ::System::Object* instance)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PREFABMODIFICATION_GETINSTANCEOFSTEP_OFFSET))(step, instance);
		}

		static ::System::Void SetInstanceToPath(::System::String* path, ::System::Object* instance, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PREFABMODIFICATION_SETINSTANCETOPATH_OFFSET))(path, instance, value);
		}

		static ::System::Void SetInstanceToPath_1(::System::String* path, ::Il2CppArray<::System::String*>* steps, ::System::Int32 index, ::System::Object* instance, ::System::Object* value, ::System::Boolean& setParentInstance)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Object*, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PREFABMODIFICATION_SETINSTANCETOPATH_1_OFFSET))(path, steps, index, instance, value, setParentInstance);
		}

		static ::System::Boolean TrySetInstanceOfStep(::System::String* step, ::System::Object* instance, ::System::Object* value, ::System::Boolean& setParentInstance)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Object*, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PREFABMODIFICATION_TRYSETINSTANCEOFSTEP_OFFSET))(step, instance, value, setParentInstance);
		}
	};
}
