#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentedPartnerHeadControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_BTNDETAIL_OFFSET UNITYSDK_OFFSET(0xD6266D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_PARTNER1_OFFSET UNITYSDK_OFFSET(0xD626400)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_PARTNER2_OFFSET UNITYSDK_OFFSET(0xD6264B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_PARTNER3_OFFSET UNITYSDK_OFFSET(0xD626560)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_PARTNER4_OFFSET UNITYSDK_OFFSET(0xD626610)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD6268E0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftPartnersControlBinder_TypeDefinitionIndex = 79910;

	class MechCraftCraftPartnersControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnDetail()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_BTNDETAIL_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl* get_Partner1()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_PARTNER1_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl* get_Partner2()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_PARTNER2_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl* get_Partner3()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_PARTNER3_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl* get_Partner4()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_PARTNER4_OFFSET))(this);
		}
	};
}
