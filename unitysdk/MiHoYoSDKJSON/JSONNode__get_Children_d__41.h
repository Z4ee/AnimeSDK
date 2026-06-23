#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYoSDKJSON { class JSONNode; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MIHOYOSDKJSON_JSONNODE__GET_CHILDREN_D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CE85A40)
#define MIHOYOSDKJSON_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MIHOYOSDKJSON_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CE85AD0)
#define MIHOYOSDKJSON_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MIHOYOSDKJSON_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CE85A60)
#define MIHOYOSDKJSON_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CE85B40)
#define MIHOYOSDKJSON_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CE85AC0)
#define MIHOYOSDKJSON_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CE85A70)
#define MIHOYOSDKJSON_JSONNODE__GET_CHILDREN_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CE85A30)
#define MIHOYOSDKJSON_JSONNODE__GET_CHILDREN_D__41__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE82990)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONNode__get_Children_d__41_TypeDefinitionIndex = 36437;

	class JSONNode__get_Children_d__41 : public ::System::Object
	{
	public:
		::MiHoYoSDKJSON::JSONNode* __2__current; // 0x10
		::System::Int32 __l__initialThreadId; // 0x18
		::System::Int32 __1__state; // 0x1C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__GET_CHILDREN_D__41__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__GET_CHILDREN_D__41_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__GET_CHILDREN_D__41_MOVENEXT_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode* System_Collections_Generic_IEnumerator_MiHoYoSDKJSON_JSONNode__get_Current()
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MIHOYOSDKJSON_JSONNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::MiHoYoSDKJSON::JSONNode*>* System_Collections_Generic_IEnumerable_MiHoYoSDKJSON_JSONNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::MiHoYoSDKJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MIHOYOSDKJSON_JSONNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__GET_CHILDREN_D__41_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
