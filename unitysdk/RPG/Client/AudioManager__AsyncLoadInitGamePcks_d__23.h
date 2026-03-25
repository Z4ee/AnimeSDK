#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AudioManager; }
namespace System { class Action; }

#define RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x91022D0)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x91025C0)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9102620)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x91025D0)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91022C0)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23__CTOR_OFFSET UNITYSDK_OFFSET(0x90F4BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioManager__AsyncLoadInitGamePcks_d__23_TypeDefinitionIndex = 48364;

	class AudioManager__AsyncLoadInitGamePcks_d__23 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Action* onLoaded; // 0x18
		::RPG::Client::AudioManager* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCLOADINITGAMEPCKS_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
