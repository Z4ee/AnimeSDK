#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NetworkManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A20DE70)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A20E470)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A20E4D0)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A20E480)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A20DE00)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58__CTOR_OFFSET UNITYSDK_OFFSET(0x1A20DDF0)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1A20DE50)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager__RequestGlobalDispatch_d__58_TypeDefinitionIndex = 69342;

	class NetworkManager__RequestGlobalDispatch_d__58 : public ::System::Object
	{
	public:
		::RPG::Client::NetworkManager* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* _requestUrl_5__4; // 0x20
		::Il2CppArray<::System::String*>* __7__wrap6; // 0x28
		::System::Action_1<::System::Boolean>* callback; // 0x30
		::UnityEngine::Networking::UnityWebRequest* _request_5__10; // 0x38
		::System::String* _url_5__9; // 0x40
		::System::String* _errMsg_5__6; // 0x48
		::System::Boolean _result_5__3; // 0x50
		::System::Boolean forceSelect; // 0x51
		::System::Int32 __7__wrap7; // 0x54
		::System::Int32 __1__state; // 0x58
		::System::Int32 _tryIndex_5__2; // 0x5C
		::System::Int32 _responseCode_5__5; // 0x60

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTGLOBALDISPATCH_D__58__CTOR_OFFSET))(this, a1);
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
