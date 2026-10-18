#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::MechCraft::View { class MechCraftCurrencyControl; }
namespace RPG::Client::MechCraft::View { class MechCraftOrderMainTargetControl; }
namespace RPG::Client::MechCraft::View { class MechCraftOrderOptionalConditionsControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROLBINDER_GET_CURRENCYCONTROL_OFFSET UNITYSDK_OFFSET(0xD6485D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROLBINDER_GET_MAINTARGETCONTROL_OFFSET UNITYSDK_OFFSET(0xD648470)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROLBINDER_GET_OPTIONALCONDITIONSCONTROL_OFFSET UNITYSDK_OFFSET(0xD648520)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROLBINDER_GET_TEXTCUSTOMERPREF_OFFSET UNITYSDK_OFFSET(0xD648740)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROLBINDER_GET_TEXTDESC_OFFSET UNITYSDK_OFFSET(0xD648680)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD6487F0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderRequirementControlBinder_TypeDefinitionIndex = 79996;

	class MechCraftOrderRequirementControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextDesc()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROLBINDER_GET_TEXTDESC_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftOrderMainTargetControl* get_MainTargetControl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftOrderMainTargetControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROLBINDER_GET_MAINTARGETCONTROL_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftOrderOptionalConditionsControl* get_OptionalConditionsControl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftOrderOptionalConditionsControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROLBINDER_GET_OPTIONALCONDITIONSCONTROL_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCurrencyControl* get_CurrencyControl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCurrencyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROLBINDER_GET_CURRENCYCONTROL_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextCustomerPref()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERREQUIREMENTCONTROLBINDER_GET_TEXTCUSTOMERPREF_OFFSET))(this);
		}
	};
}
