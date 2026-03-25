#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERSRECUSIVELY_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA8CDEC0)
#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERSRECUSIVELY_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA8CE260)
#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERSRECUSIVELY_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA8CE2C0)
#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERSRECUSIVELY_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA8CE270)
#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERSRECUSIVELY_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8CDD40)
#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERSRECUSIVELY_D__9__CTOR_OFFSET UNITYSDK_OFFSET(0xA8C1300)
#define RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERSRECUSIVELY_D__9___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xA8CDE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterVisibleComponent__GetFollowersRecusively_d__9_TypeDefinitionIndex = 46078;

	class CharacterVisibleComponent__GetFollowersRecusively_d__9 : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterVisibleComponent* __4__this; // 0x10
		::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::CharacterVisibleComponent*>* _itor_5__3; // 0x18
		::RPG::GameCore::CharacterVisibleComponent* __2__current; // 0x20
		::System::Int32 _i_5__2; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERSRECUSIVELY_D__9__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERSRECUSIVELY_D__9_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERSRECUSIVELY_D__9_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERSRECUSIVELY_D__9___M__FINALLY1_OFFSET))(this);
		}

		::RPG::GameCore::CharacterVisibleComponent* System_Collections_Generic_IEnumerator_RPG_GameCore_CharacterVisibleComponent__get_Current()
		{
			return ((::RPG::GameCore::CharacterVisibleComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERSRECUSIVELY_D__9_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERSRECUSIVELY_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERVISIBLECOMPONENT__GETFOLLOWERSRECUSIVELY_D__9_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
