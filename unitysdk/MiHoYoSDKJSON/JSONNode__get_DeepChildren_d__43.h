#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYoSDKJSON { class JSONNode; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B748860)
#define MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MIHOYOSDKJSON_JSONNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B7490F0)
#define MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MIHOYOSDKJSON_JSONNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B749080)
#define MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B749170)
#define MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B7490E0)
#define MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B749090)
#define MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B7485A0)
#define MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7468A0)
#define MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1B748760)
#define MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1B748660)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONNode__get_DeepChildren_d__43_TypeDefinitionIndex = 44320;

	class JSONNode__get_DeepChildren_d__43 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::MiHoYoSDKJSON::JSONNode*>* __7__wrap2; // 0x10
		::MiHoYoSDKJSON::JSONNode* __2__current; // 0x18
		::MiHoYoSDKJSON::JSONNode* __4__this; // 0x20
		::System::Collections::Generic::IEnumerator_1<::MiHoYoSDKJSON::JSONNode*>* __7__wrap1; // 0x28
		::System::Int32 __l__initialThreadId; // 0x30
		::System::Int32 __1__state; // 0x34

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43___M__FINALLY2_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode* System_Collections_Generic_IEnumerator_MiHoYoSDKJSON_JSONNode__get_Current()
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MIHOYOSDKJSON_JSONNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::MiHoYoSDKJSON::JSONNode*>* System_Collections_Generic_IEnumerable_MiHoYoSDKJSON_JSONNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::MiHoYoSDKJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MIHOYOSDKJSON_JSONNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONNODE__GET_DEEPCHILDREN_D__43_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
