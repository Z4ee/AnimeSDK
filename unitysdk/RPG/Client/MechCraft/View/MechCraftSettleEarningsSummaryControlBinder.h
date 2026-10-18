#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class StaticListView; }
namespace RPG::Client::MechCraft::View { class MechCraftCurrencyControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROLBINDER_GET_CURRENCYCONTROL_OFFSET UNITYSDK_OFFSET(0xD6599F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROLBINDER_GET_REQUIREMENTREWARDLIST_OFFSET UNITYSDK_OFFSET(0xD659AA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD659CF0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftSettleEarningsSummaryControlBinder_TypeDefinitionIndex = 80033;

	class MechCraftSettleEarningsSummaryControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCurrencyControl* get_CurrencyControl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCurrencyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROLBINDER_GET_CURRENCYCONTROL_OFFSET))(this);
		}

		::RPG::Client::StaticListView* get_RequirementRewardList()
		{
			return ((::RPG::Client::StaticListView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROLBINDER_GET_REQUIREMENTREWARDLIST_OFFSET))(this);
		}
	};
}
