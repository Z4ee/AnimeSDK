#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class JSONNode; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B176B00)
#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HOUDINIENGINEUNITY_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EEE6DF0)
#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HOUDINIENGINEUNITY_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EEE6D80)
#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EEE6E70)
#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EEE6DE0)
#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EEE6D90)
#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B176950)
#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42__CTOR_OFFSET UNITYSDK_OFFSET(0x1B16D9E0)
#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1B176A00)
#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1EEE6C80)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONNode__get_DeepChildren_d__42_TypeDefinitionIndex = 39378;

	class JSONNode__get_DeepChildren_d__42 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* __7__wrap1; // 0x10
		::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* __7__wrap2; // 0x18
		::HoudiniEngineUnity::JSONNode* __4__this; // 0x20
		::HoudiniEngineUnity::JSONNode* __2__current; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Int32 __l__initialThreadId; // 0x34

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42___M__FINALLY2_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current()
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HOUDINIENGINEUNITY_JSONNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HOUDINIENGINEUNITY_JSONNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
