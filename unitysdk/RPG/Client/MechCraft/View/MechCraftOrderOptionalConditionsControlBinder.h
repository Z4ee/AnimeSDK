#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::MechCraft::View { class MechCraftNodeListControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROLBINDER_GET_BTNDETAIL_OFFSET UNITYSDK_OFFSET(0xD6504A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROLBINDER_GET_CONDITIONLOADMETA_OFFSET UNITYSDK_OFFSET(0xD6501F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROLBINDER_GET_NODELISTCONTROL_OFFSET UNITYSDK_OFFSET(0xD64FC40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROLBINDER_GET_TIPSTATECTRL_OFFSET UNITYSDK_OFFSET(0xD650060)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD650550)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderOptionalConditionsControlBinder_TypeDefinitionIndex = 79995;

	class MechCraftOrderOptionalConditionsControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnDetail()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROLBINDER_GET_BTNDETAIL_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftNodeListControl* get_NodeListControl()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftNodeListControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROLBINDER_GET_NODELISTCONTROL_OFFSET))(this);
		}

		::RPG::Client::PrefabLoadMeta* get_ConditionLoadMeta()
		{
			return ((::RPG::Client::PrefabLoadMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROLBINDER_GET_CONDITIONLOADMETA_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_TipStateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDEROPTIONALCONDITIONSCONTROLBINDER_GET_TIPSTATECTRL_OFFSET))(this);
		}
	};
}
