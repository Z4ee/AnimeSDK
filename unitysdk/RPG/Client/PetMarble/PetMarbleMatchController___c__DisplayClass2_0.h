#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PetMarble/PetMarbleMatchModeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PetMarble { class PetMarbleMatchController; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDAD6BB0)
#define RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER___C__DISPLAYCLASS2_0__SWITCHMODEPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0xDAD8140)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleMatchController___c__DisplayClass2_0_TypeDefinitionIndex = 74710;

	class PetMarbleMatchController___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::PetMarble::PetMarbleMatchController* __4__this; // 0x10
		::RPG::Client::PetMarble::PetMarbleMatchModeType mode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _SwitchModePromise_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEMATCHCONTROLLER___C__DISPLAYCLASS2_0__SWITCHMODEPROMISE_B__0_OFFSET))(this);
		}
	};
}
