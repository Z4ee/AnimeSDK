#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_NETWORKMANAGER__GET_D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18376D90)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18376F00)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18376F60)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18376F10)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18376D80)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__34__CTOR_OFFSET UNITYSDK_OFFSET(0x18372D20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager__Get_d__34_TypeDefinitionIndex = 8101;

	class NetworkManager__Get_d__34 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::System::Action* timeoutCallback; // 0x18
		::System::String* _queryString_5__1; // 0x20
		::System::Object* __2__current; // 0x28
		::MiHoYo::SDK::JSONObject* query; // 0x30
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x38
		::System::String* requestUrl; // 0x40
		::System::Single timeoutSecond; // 0x48
		::System::Int32 retryTime; // 0x4C
		::System::Int32 __1__state; // 0x50

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__34__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__34_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
