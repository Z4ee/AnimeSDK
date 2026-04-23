#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D6D8D891CDDE5DED;
namespace RPG::Client { class NetworkManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1193_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xABD4950)
#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1193_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xABD5440)
#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1193_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xABD54A0)
#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1193_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xABD5450)
#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1193_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xABD48E0)
#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1193__CTOR_OFFSET UNITYSDK_OFFSET(0xABC8800)
#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1193___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xABD4930)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___SendDispatchRequest_d__1193_TypeDefinitionIndex = 63948;

	class NetworkManager___SendDispatchRequest_d__1193 : public ::System::Object
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* _request_5__3; // 0x10
		::System::String* dispatchUrl; // 0x18
		::System::Action_1<::Class_1_D6D8D891CDDE5DED*>* callback; // 0x20
		::System::Object* __2__current; // 0x28
		::Class_1_D6D8D891CDDE5DED* _dispatchResult_5__2; // 0x30
		::RPG::Client::NetworkManager* __4__this; // 0x38
		::System::Int32 timeout; // 0x40
		::System::Int32 __1__state; // 0x44

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1193__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1193_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1193_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1193___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1193_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1193_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1193_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
