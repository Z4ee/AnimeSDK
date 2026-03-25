#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D6D8D891CDDE5DED;
namespace RPG::Client { class NetworkManager; }
namespace RPG::Client { class NetworkManager___c__DisplayClass1118_0; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_NETWORKMANAGER___REQUESTSERVERDISPATCH_D__1118_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9E868F0)
#define RPG_CLIENT_NETWORKMANAGER___REQUESTSERVERDISPATCH_D__1118_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E86FE0)
#define RPG_CLIENT_NETWORKMANAGER___REQUESTSERVERDISPATCH_D__1118_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9E87040)
#define RPG_CLIENT_NETWORKMANAGER___REQUESTSERVERDISPATCH_D__1118_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9E86FF0)
#define RPG_CLIENT_NETWORKMANAGER___REQUESTSERVERDISPATCH_D__1118_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E868D0)
#define RPG_CLIENT_NETWORKMANAGER___REQUESTSERVERDISPATCH_D__1118__CTOR_OFFSET UNITYSDK_OFFSET(0x9E7B020)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___RequestServerDispatch_d__1118_TypeDefinitionIndex = 56702;

	class NetworkManager___RequestServerDispatch_d__1118 : public ::System::Object
	{
	public:
		::System::String* _dispatchUrl_5__2; // 0x10
		::System::Action_1<::Class_1_D6D8D891CDDE5DED*>* callback; // 0x18
		::System::Object* __2__current; // 0x20
		::RPG::Client::NetworkManager* __4__this; // 0x28
		::Il2CppArray<::System::String*>* __7__wrap3; // 0x30
		::RPG::Client::NetworkManager___c__DisplayClass1118_0* __8__1; // 0x38
		::System::Int32 __7__wrap4; // 0x40
		::System::Int32 _index_5__3; // 0x44
		::System::Int32 __1__state; // 0x48

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___REQUESTSERVERDISPATCH_D__1118__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___REQUESTSERVERDISPATCH_D__1118_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___REQUESTSERVERDISPATCH_D__1118_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___REQUESTSERVERDISPATCH_D__1118_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___REQUESTSERVERDISPATCH_D__1118_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___REQUESTSERVERDISPATCH_D__1118_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
