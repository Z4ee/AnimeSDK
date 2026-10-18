#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftChipMoldFilterTabsControl; }
namespace RPG::UINavigation { class UINavigationArea; }
namespace SuperScrollView { class LoopGridView; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDBANKCONTROLBINDER_GET_BTNEXTRAFILTER_OFFSET UNITYSDK_OFFSET(0xD6030C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDBANKCONTROLBINDER_GET_FILTERTABS_OFFSET UNITYSDK_OFFSET(0xD603010)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDBANKCONTROLBINDER_GET_HINTEXTRAFILTERED_OFFSET UNITYSDK_OFFSET(0xD604E40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDBANKCONTROLBINDER_GET_HINTNOMOLDS_OFFSET UNITYSDK_OFFSET(0xD604F00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDBANKCONTROLBINDER_GET_LISTMOLDS_OFFSET UNITYSDK_OFFSET(0xD602F50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDBANKCONTROLBINDER_GET_NAVAREA_OFFSET UNITYSDK_OFFSET(0xD604BC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDBANKCONTROLBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0xD6055A0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftChipMoldBankControlBinder_TypeDefinitionIndex = 79856;

	class MechCraftCraftChipMoldBankControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDBANKCONTROLBINDER__CTOR_OFFSET))(this);
		}

		::SuperScrollView::LoopGridView* get_ListMolds()
		{
			return ((::SuperScrollView::LoopGridView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDBANKCONTROLBINDER_GET_LISTMOLDS_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_HintNoMolds()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDBANKCONTROLBINDER_GET_HINTNOMOLDS_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftChipMoldFilterTabsControl* get_FilterTabs()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftChipMoldFilterTabsControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDBANKCONTROLBINDER_GET_FILTERTABS_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationArea* get_NavArea()
		{
			return ((::RPG::UINavigation::UINavigationArea*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDBANKCONTROLBINDER_GET_NAVAREA_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnExtraFilter()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDBANKCONTROLBINDER_GET_BTNEXTRAFILTER_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_HintExtraFiltered()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDBANKCONTROLBINDER_GET_HINTEXTRAFILTERED_OFFSET))(this);
		}
	};
}
