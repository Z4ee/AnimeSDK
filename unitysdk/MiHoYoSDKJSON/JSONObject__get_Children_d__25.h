#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace MiHoYoSDKJSON { class JSONNode; }
namespace MiHoYoSDKJSON { class JSONObject; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MIHOYOSDKJSON_JSONOBJECT__GET_CHILDREN_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x85B27C0)
#define MIHOYOSDKJSON_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MIHOYOSDKJSON_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x85B2950)
#define MIHOYOSDKJSON_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MIHOYOSDKJSON_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x85B28E0)
#define MIHOYOSDKJSON_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x85B29D0)
#define MIHOYOSDKJSON_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x85B2940)
#define MIHOYOSDKJSON_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x85B28F0)
#define MIHOYOSDKJSON_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x85B27A0)
#define MIHOYOSDKJSON_JSONOBJECT__GET_CHILDREN_D__25__CTOR_OFFSET UNITYSDK_OFFSET(0x85B2440)
#define MIHOYOSDKJSON_JSONOBJECT__GET_CHILDREN_D__25___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x85B27B0)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONObject__get_Children_d__25_TypeDefinitionIndex = 36835;

	class JSONObject__get_Children_d__25 : public ::System::Object
	{
	public:
		::MiHoYoSDKJSON::JSONNode* __2__current; // 0x10
		::MiHoYoSDKJSON::JSONObject* __4__this; // 0x18
		::System::Collections::Generic::Dictionary_2_Enumerator<::System::String*, ::MiHoYoSDKJSON::JSONNode*> __7__wrap1; // 0x20
		::System::Int32 __1__state; // 0x48
		::System::Int32 __l__initialThreadId; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT__GET_CHILDREN_D__25__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT__GET_CHILDREN_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT__GET_CHILDREN_D__25___M__FINALLY1_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode* System_Collections_Generic_IEnumerator_MiHoYoSDKJSON_JSONNode__get_Current()
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MIHOYOSDKJSON_JSONNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::MiHoYoSDKJSON::JSONNode*>* System_Collections_Generic_IEnumerable_MiHoYoSDKJSON_JSONNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::MiHoYoSDKJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MIHOYOSDKJSON_JSONNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT__GET_CHILDREN_D__25_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
