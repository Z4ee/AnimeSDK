#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::ViewModel { class MechCraftCoinViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentDetailViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTDETAILVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xD67D650)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTDETAILVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xD67D640)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftTalentDetailViewModel_Factory_TypeDefinitionIndex = 79771;

	class MechCraftTalentDetailViewModel_Factory : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* _Coin; // 0x10

		::System::Void _ctor(::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCoinViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTDETAILVIEWMODEL_FACTORY__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel* Create()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTDETAILVIEWMODEL_FACTORY_CREATE_OFFSET))(this);
		}
	};
}
