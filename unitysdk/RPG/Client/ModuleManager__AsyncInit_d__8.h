#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseModule; }
namespace RPG::Client { class ModuleManager; }
namespace System { class Action; }

#define RPG_CLIENT_MODULEMANAGER__ASYNCINIT_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19E27690)
#define RPG_CLIENT_MODULEMANAGER__ASYNCINIT_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19E278D0)
#define RPG_CLIENT_MODULEMANAGER__ASYNCINIT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19E27930)
#define RPG_CLIENT_MODULEMANAGER__ASYNCINIT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19E278E0)
#define RPG_CLIENT_MODULEMANAGER__ASYNCINIT_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19E27670)
#define RPG_CLIENT_MODULEMANAGER__ASYNCINIT_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0x19E26D10)
#define RPG_CLIENT_MODULEMANAGER__ASYNCINIT_D__8___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x19E27680)

namespace RPG::Client
{
	inline static constexpr unsigned int ModuleManager__AsyncInit_d__8_TypeDefinitionIndex = 66251;

	class ModuleManager__AsyncInit_d__8 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Collections::Generic::List_1_Enumerator<::RPG::Client::BaseModule*> __7__wrap1; // 0x18
		::System::Action* callback; // 0x30
		::RPG::Client::ModuleManager* __4__this; // 0x38
		::System::Int32 __1__state; // 0x40

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODULEMANAGER__ASYNCINIT_D__8__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODULEMANAGER__ASYNCINIT_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODULEMANAGER__ASYNCINIT_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODULEMANAGER__ASYNCINIT_D__8___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODULEMANAGER__ASYNCINIT_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODULEMANAGER__ASYNCINIT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODULEMANAGER__ASYNCINIT_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
