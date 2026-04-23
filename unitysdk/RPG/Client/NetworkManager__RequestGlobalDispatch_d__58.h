#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NetworkManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xABD3770)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xABD3E10)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xABD3E70)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xABD3E20)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xABD3700)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58__CTOR_OFFSET UNITYSDK_OFFSET(0xABD36F0)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xABD3750)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager__RequestGlobalDispatch_d__58_TypeDefinitionIndex = 63945;

	class NetworkManager__RequestGlobalDispatch_d__58 : public ::System::Object
	{
	public:
		::System::String* _errMsg_5__6; // 0x10
		::UnityEngine::Networking::UnityWebRequest* _request_5__10; // 0x18
		::System::String* _requestUrl_5__4; // 0x20
		::System::String* _url_5__9; // 0x28
		::RPG::Client::NetworkManager* __4__this; // 0x30
		::Il2CppArray<::System::String*>* __7__wrap6; // 0x38
		::System::Object* __2__current; // 0x40
		::System::Action_1<::System::Boolean>* callback; // 0x48
		::System::Int32 __7__wrap7; // 0x50
		::System::Boolean forceSelect; // 0x54
		::System::Boolean _result_5__3; // 0x55
		::System::Int32 _responseCode_5__5; // 0x58
		::System::Int32 _tryIndex_5__2; // 0x5C
		::System::Int32 __1__state; // 0x60

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
