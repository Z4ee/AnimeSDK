#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class JSONArray; }
namespace HoudiniEngineUnity { class JSONNode; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HOUDINIENGINEUNITY_JSONARRAY__GET_CHILDREN_D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17F74E70)
#define HOUDINIENGINEUNITY_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HOUDINIENGINEUNITY_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17F75070)
#define HOUDINIENGINEUNITY_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HOUDINIENGINEUNITY_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17F75000)
#define HOUDINIENGINEUNITY_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17F750F0)
#define HOUDINIENGINEUNITY_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17F75060)
#define HOUDINIENGINEUNITY_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17F75010)
#define HOUDINIENGINEUNITY_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F74E50)
#define HOUDINIENGINEUNITY_JSONARRAY__GET_CHILDREN_D__22__CTOR_OFFSET UNITYSDK_OFFSET(0x17F74670)
#define HOUDINIENGINEUNITY_JSONARRAY__GET_CHILDREN_D__22___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x17F74E60)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONArray__get_Children_d__22_TypeDefinitionIndex = 37713;

	class JSONArray__get_Children_d__22 : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::JSONArray* __4__this; // 0x10
		::HoudiniEngineUnity::JSONNode* __2__current; // 0x18
		::System::Collections::Generic::List_1_Enumerator<::HoudiniEngineUnity::JSONNode*> __7__wrap1; // 0x20
		::System::Int32 __l__initialThreadId; // 0x38
		::System::Int32 __1__state; // 0x3C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY__GET_CHILDREN_D__22__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY__GET_CHILDREN_D__22_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY__GET_CHILDREN_D__22___M__FINALLY1_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current()
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HOUDINIENGINEUNITY_JSONNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HOUDINIENGINEUNITY_JSONNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
