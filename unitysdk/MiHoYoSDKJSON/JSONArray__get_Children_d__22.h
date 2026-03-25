#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace MiHoYoSDKJSON { class JSONArray; }
namespace MiHoYoSDKJSON { class JSONNode; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MIHOYOSDKJSON_JSONARRAY__GET_CHILDREN_D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x85ACFD0)
#define MIHOYOSDKJSON_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MIHOYOSDKJSON_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x85AD1A0)
#define MIHOYOSDKJSON_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MIHOYOSDKJSON_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x85AD130)
#define MIHOYOSDKJSON_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x85AD220)
#define MIHOYOSDKJSON_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x85AD190)
#define MIHOYOSDKJSON_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x85AD140)
#define MIHOYOSDKJSON_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x85ACFB0)
#define MIHOYOSDKJSON_JSONARRAY__GET_CHILDREN_D__22__CTOR_OFFSET UNITYSDK_OFFSET(0x85ACBA0)
#define MIHOYOSDKJSON_JSONARRAY__GET_CHILDREN_D__22___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x85ACFC0)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONArray__get_Children_d__22_TypeDefinitionIndex = 36832;

	class JSONArray__get_Children_d__22 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1_Enumerator<::MiHoYoSDKJSON::JSONNode*> __7__wrap1; // 0x10
		::MiHoYoSDKJSON::JSONArray* __4__this; // 0x28
		::MiHoYoSDKJSON::JSONNode* __2__current; // 0x30
		::System::Int32 __l__initialThreadId; // 0x38
		::System::Int32 __1__state; // 0x3C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY__GET_CHILDREN_D__22__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY__GET_CHILDREN_D__22_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY__GET_CHILDREN_D__22___M__FINALLY1_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode* System_Collections_Generic_IEnumerator_MiHoYoSDKJSON_JSONNode__get_Current()
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MIHOYOSDKJSON_JSONNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::MiHoYoSDKJSON::JSONNode*>* System_Collections_Generic_IEnumerable_MiHoYoSDKJSON_JSONNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::MiHoYoSDKJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MIHOYOSDKJSON_JSONNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY__GET_CHILDREN_D__22_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
