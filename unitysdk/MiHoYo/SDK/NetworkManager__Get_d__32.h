#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_KeyEnumerator.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_NETWORKMANAGER__GET_D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A511390)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__32_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A511950)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A5119B0)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A511960)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__32_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A511380)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__32__CTOR_OFFSET UNITYSDK_OFFSET(0x1A511370)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager__Get_d__32_TypeDefinitionIndex = 19022;

	class NetworkManager__Get_d__32 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _newHeaders_5__1; // 0x10
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x18
		::System::String* requestUrl; // 0x20
		::System::Action* timeoutCallback; // 0x28
		::System::Object* __2__current; // 0x30
		::System::Action_1<::System::String*>* callback; // 0x38
		::MiHoYo::SDK::JSONNode* _extHeaderNode_5__3; // 0x40
		::MiHoYo::SDK::JSONNode_KeyEnumerator __s__4; // 0x48
		::System::String* _key_5__5; // 0x90
		::System::String* extHeaders; // 0x98
		::System::String* _queryString_5__2; // 0xA0
		::MiHoYo::SDK::JSONObject* query; // 0xA8
		::System::Single timeoutSecond; // 0xB0
		::System::Int32 retryTime; // 0xB4
		::System::Int32 __1__state; // 0xB8

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
