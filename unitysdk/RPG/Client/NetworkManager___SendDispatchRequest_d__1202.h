#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_718B8238EA10D3FF;
namespace RPG::Client { class NetworkManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1202_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC2E2210)
#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1202_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC2E2760)
#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1202_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC2E27C0)
#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1202_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC2E2770)
#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1202_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2E21A0)
#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1202__CTOR_OFFSET UNITYSDK_OFFSET(0xC2D6740)
#define RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1202___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xC2E21F0)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___SendDispatchRequest_d__1202_TypeDefinitionIndex = 64869;

	class NetworkManager___SendDispatchRequest_d__1202 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::UnityEngine::Networking::UnityWebRequest* _request_5__3; // 0x18
		::System::String* dispatchUrl; // 0x20
		::System::Action_1<::Class_1_718B8238EA10D3FF*>* callback; // 0x28
		::Class_1_718B8238EA10D3FF* _dispatchResult_5__2; // 0x30
		::RPG::Client::NetworkManager* __4__this; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Int32 timeout; // 0x44

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1202__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1202_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1202_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1202___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1202_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1202_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___SENDDISPATCHREQUEST_D__1202_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
