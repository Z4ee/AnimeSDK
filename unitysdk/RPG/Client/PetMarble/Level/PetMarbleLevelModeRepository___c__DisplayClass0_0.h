#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PetMarble/Level/PetMarbleLevelModeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1357;
namespace RPG::Client::PetMarble::Level { class PetMarbleLevelModeRepository; }

#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODEREPOSITORY___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDAC74D0)
#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODEREPOSITORY___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0xDAC7760)

namespace RPG::Client::PetMarble::Level
{
	inline static constexpr unsigned int PetMarbleLevelModeRepository___c__DisplayClass0_0_TypeDefinitionIndex = 74745;

	class PetMarbleLevelModeRepository___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::PetMarble::Level::PetMarbleLevelModeRepository* __4__this; // 0x10
		::Class_0_16E4307DCC419505_1357* factory; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODEREPOSITORY___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__0(::RPG::Client::PetMarble::Level::PetMarbleLevelModeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::Level::PetMarbleLevelModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODEREPOSITORY___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET))(this, a1);
		}
	};
}
