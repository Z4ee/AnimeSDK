#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x95D7730)
#define RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE___C__DISPLAYCLASS49_0___SETUPTABLES_B__0_OFFSET UNITYSDK_OFFSET(0x95D8BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantGameInstance___c__DisplayClass49_0_TypeDefinitionIndex = 48896;

	class ElfRestaurantGameInstance___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* __9__0; // 0x10
		::System::Action* onTableLoad; // 0x18
		::System::Int32 loadedCount; // 0x20
		::System::Int32 toLoadCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void __SetupTables_b__0(::RPG::Client::LittleGame::ElfRestaurantGameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTGAMEINSTANCE___C__DISPLAYCLASS49_0___SETUPTABLES_B__0_OFFSET))(this, entity);
		}
	};
}
