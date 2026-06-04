#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterVisibleComponent; }

#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERS_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCD81530)
#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCD815E0)
#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCD81640)
#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCD815F0)
#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERS_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD81520)
#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERS_D__8__CTOR_OFFSET UNITYSDK_OFFSET(0xCD73180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterVisibleComponent__GetFollowers_d__8_TypeDefinitionIndex = 53447;

	class CharacterVisibleComponent__GetFollowers_d__8 : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterVisibleComponent* __4__this; // 0x10
		::RPG::GameCore::CharacterVisibleComponent* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Int32 _i_5__2; // 0x24

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERS_D__8__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERS_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERS_D__8_MOVENEXT_OFFSET))(this);
		}

		::RPG::GameCore::CharacterVisibleComponent* System_Collections_Generic_IEnumerator_RPG_GameCore_CharacterVisibleComponent__get_Current()
		{
			return ((::RPG::GameCore::CharacterVisibleComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERS_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERS_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
