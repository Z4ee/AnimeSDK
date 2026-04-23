#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JsonObject;
namespace RPG::Client { class MonoNativeEditBox; }

#define RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA9E64D0)
#define RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA9E6700)
#define RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA9E6760)
#define RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA9E6710)
#define RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9E64C0)
#define RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E4FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoNativeEditBox__PluginsMessageRoutine_d__59_TypeDefinitionIndex = 65586;

	class MonoNativeEditBox__PluginsMessageRoutine_d__59 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::MonoNativeEditBox* __4__this; // 0x18
		::JsonObject* jsonMsg; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONATIVEEDITBOX__PLUGINSMESSAGEROUTINE_D__59__CTOR_OFFSET))(this, __1__state);
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
