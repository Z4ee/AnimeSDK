#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_NETWORKMANAGER__GET_D__35_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BE4A190)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__35_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE4A400)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE4A460)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BE4A410)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__35_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BE4A180)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__35__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE4A170)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager__Get_d__35_TypeDefinitionIndex = 19921;

	class NetworkManager__Get_d__35 : public ::System::Object
	{
	public:
		::System::String* requestUrl; // 0x10
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x18
		::System::String* _queryString_5__1; // 0x20
		::System::Object* __2__current; // 0x28
		::MiHoYo::SDK::JSONObject* query; // 0x30
		::System::Action* timeoutCallback; // 0x38
		::System::Action_1<::System::String*>* callback; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Int32 retryTime; // 0x4C
		::System::Single timeoutSecond; // 0x50

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__35__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__35_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__35_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__35_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
