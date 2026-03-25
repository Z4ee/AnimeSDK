#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class JSONNode; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x84AFAE0)
#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HOUDINIENGINEUNITY_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x84B0150)
#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HOUDINIENGINEUNITY_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x84B00E0)
#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x84B01D0)
#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x84B0140)
#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x84B00F0)
#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x84AF7C0)
#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42__CTOR_OFFSET UNITYSDK_OFFSET(0x84AB910)
#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x84AFA30)
#define HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x84AF980)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONNode__get_DeepChildren_d__42_TypeDefinitionIndex = 37847;

	class JSONNode__get_DeepChildren_d__42 : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::JSONNode* __4__this; // 0x10
		::HoudiniEngineUnity::JSONNode* __2__current; // 0x18
		::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* __7__wrap1; // 0x20
		::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* __7__wrap2; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Int32 __l__initialThreadId; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_DEEPCHILDREN_D__42__CTOR_OFFSET))(this, __1__state);
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
