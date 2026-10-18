#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointPhaseViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTPOINTPHASEVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xD67D7E0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTPOINTPHASEVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xD67D890)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftTalentPointPhaseViewModel_Factory_TypeDefinitionIndex = 79765;

	class MechCraftTalentPointPhaseViewModel_Factory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTPOINTPHASEVIEWMODEL_FACTORY__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointPhaseViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTPOINTPHASEVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}
	};
}
