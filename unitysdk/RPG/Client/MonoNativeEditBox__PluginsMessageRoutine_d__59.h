#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JsonObject;
namespace RPG::Client { class MonoNativeEditBox; }

#define RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1ACFC3B0)
#define RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ACFC6A0)
#define RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ACFC700)
#define RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1ACFC6B0)
#define RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ACFC3A0)
#define RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACFAE60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoNativeEditBox__PluginsMessageRoutine_d__59_TypeDefinitionIndex = 71129;

	class MonoNativeEditBox__PluginsMessageRoutine_d__59 : public ::System::Object
	{
	public:
		::JsonObject* jsonMsg; // 0x10
		::System::Object* __2__current; // 0x18
		::RPG::Client::MonoNativeEditBox* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
