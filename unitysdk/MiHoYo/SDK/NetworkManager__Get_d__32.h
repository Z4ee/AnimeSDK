#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_KeyCollection_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_NETWORKMANAGER__GET_D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15F45070)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__32_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F454C0)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F45520)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15F454D0)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__32_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F45060)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__32__CTOR_OFFSET UNITYSDK_OFFSET(0x15F40FE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager__Get_d__32_TypeDefinitionIndex = 7154;

	class NetworkManager__Get_d__32 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _newHeaders_5__1; // 0x10
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x18
		::System::Object* __2__current; // 0x20
		::System::String* _queryString_5__2; // 0x28
		::System::Action_1<::System::String*>* callback; // 0x30
		::MiHoYo::SDK::JSONObject* query; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders; // 0x40
		::System::String* requestUrl; // 0x48
		::System::Action* timeoutCallback; // 0x50
		::System::String* _key_5__4; // 0x58
		::System::Collections::Generic::Dictionary_2_KeyCollection_Enumerator<::System::String*, ::System::String*> __s__3; // 0x60
		::System::Int32 retryTime; // 0x78
		::System::Int32 __1__state; // 0x7C
		::System::Single timeoutSecond; // 0x80

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__32__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__32_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__32_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__32_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
