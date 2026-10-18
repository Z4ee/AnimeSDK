#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::MechCraft::View { class MechCraftNpcCommentControl; }
namespace RPG::Client::MechCraft::View { class MechCraftRevenueControl; }
namespace RPG::Client::MechCraft::View { class MechCraftSettleDesignLevelRewardControl; }
namespace RPG::Client::MechCraft::View { class MechCraftSettleEarningsSummaryControl; }
namespace RPG::Client::MechCraft::View { class MechCraftSettleProductStatsControl; }
namespace RPG::Client::MechCraft::View { class MechCraftSettleProductSummaryControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_BTNCONFIRM_OFFSET UNITYSDK_OFFSET(0xD656ED0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_BTNCONTINUE_OFFSET UNITYSDK_OFFSET(0xD656E20)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_DESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0xD6571A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_EARNINGSUMMARYCONTROL_OFFSET UNITYSDK_OFFSET(0xD6572B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_EXAMINERCMTCTRL_OFFSET UNITYSDK_OFFSET(0xD657520)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_FADEANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0xD656CC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_NPCCOMMENTCONTROL_OFFSET UNITYSDK_OFFSET(0xD6573C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_PRODUCTSTATS_OFFSET UNITYSDK_OFFSET(0xD656F80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_PRODUCTSUMMARY_OFFSET UNITYSDK_OFFSET(0xD657090)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_REVENUECONTROL_OFFSET UNITYSDK_OFFSET(0xD657470)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_STATECTRL_OFFSET UNITYSDK_OFFSET(0xD656B90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_SWITCHANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0xD656D70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD658090)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftSettleControlBinder_TypeDefinitionIndex = 80036;

	class MechCraftSettleControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftSettleProductStatsControl* get_ProductStats()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftSettleProductStatsControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_PRODUCTSTATS_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftSettleEarningsSummaryControl* get_EarningSummaryControl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftSettleEarningsSummaryControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_EARNINGSUMMARYCONTROL_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftNpcCommentControl* get_NpcCommentControl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftNpcCommentControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_NPCCOMMENTCONTROL_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftRevenueControl* get_RevenueControl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftRevenueControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_REVENUECONTROL_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftSettleDesignLevelRewardControl* get_DesignLevel()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftSettleDesignLevelRewardControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_DESIGNLEVEL_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnConfirm()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_BTNCONFIRM_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnContinue()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_BTNCONTINUE_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_StateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_STATECTRL_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftNpcCommentControl* get_ExaminerCmtCtrl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftNpcCommentControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_EXAMINERCMTCTRL_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftSettleProductSummaryControl* get_ProductSummary()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftSettleProductSummaryControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_PRODUCTSUMMARY_OFFSET))(this);
		}

		::RPG::Client::MonoAnimationTrigger* get_FadeAnimTrigger()
		{
			return ((::RPG::Client::MonoAnimationTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_FADEANIMTRIGGER_OFFSET))(this);
		}

		::RPG::Client::MonoAnimationTrigger* get_SwitchAnimTrigger()
		{
			return ((::RPG::Client::MonoAnimationTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLECONTROLBINDER_GET_SWITCHANIMTRIGGER_OFFSET))(this);
		}
	};
}
