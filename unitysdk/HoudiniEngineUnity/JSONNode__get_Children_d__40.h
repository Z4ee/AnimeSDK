#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class JSONNode; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HOUDINIENGINEUNITY_JSONNODE__GET_CHILDREN_D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x84AF650)
#define HOUDINIENGINEUNITY_JSONNODE__GET_CHILDREN_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HOUDINIENGINEUNITY_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x84AF6E0)
#define HOUDINIENGINEUNITY_JSONNODE__GET_CHILDREN_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HOUDINIENGINEUNITY_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x84AF670)
#define HOUDINIENGINEUNITY_JSONNODE__GET_CHILDREN_D__40_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x84AF750)
#define HOUDINIENGINEUNITY_JSONNODE__GET_CHILDREN_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x84AF6D0)
#define HOUDINIENGINEUNITY_JSONNODE__GET_CHILDREN_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x84AF680)
#define HOUDINIENGINEUNITY_JSONNODE__GET_CHILDREN_D__40_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x84AF640)
#define HOUDINIENGINEUNITY_JSONNODE__GET_CHILDREN_D__40__CTOR_OFFSET UNITYSDK_OFFSET(0x84AB890)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONNode__get_Children_d__40_TypeDefinitionIndex = 37846;

	class JSONNode__get_Children_d__40 : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::JSONNode* __2__current; // 0x10
		::System::Int32 __l__initialThreadId; // 0x18
		::System::Int32 __1__state; // 0x1C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_CHILDREN_D__40__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_CHILDREN_D__40_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_CHILDREN_D__40_MOVENEXT_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current()
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_CHILDREN_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_HOUDINIENGINEUNITY_JSONNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_CHILDREN_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_CHILDREN_D__40_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_CHILDREN_D__40_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_HOUDINIENGINEUNITY_JSONNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__GET_CHILDREN_D__40_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
