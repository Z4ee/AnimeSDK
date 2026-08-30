#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_0_16E4307DCC419505_1402;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client::B51Racing { class B51RacingCarStatDescDialogViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarStatDescItemViewModel; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL_ONBLANKCLOSEANDEXIT_OFFSET UNITYSDK_OFFSET(0xC85F7F0)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC85ECA0)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL__BUILDDISPLAYLIST_OFFSET UNITYSDK_OFFSET(0xC85ED50)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC85FE50)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0xC85EB10)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL__GETCONFIGREPO_OFFSET UNITYSDK_OFFSET(0xC85F8E0)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET UNITYSDK_OFFSET(0xC85EBB0)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC85E8E0)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL__ONGETSTATITEM_OFFSET UNITYSDK_OFFSET(0xC85F9B0)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC85E840)
#define RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL__REFRESHSTATLIST_OFFSET UNITYSDK_OFFSET(0xC85F5B0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarStatDescDialogControl_TypeDefinitionIndex = 80488;

	class B51RacingCarStatDescDialogControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::StaticListView* _StatListView; // 0x38
		::RPG::Client::AnimatorButton* _BtnEmptyClose; // 0x40
		::Class_0_16E4307DCC419505_1402* _ConfigRepo; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::B51Racing::B51RacingCarStatDescItemViewModel*>* _DisplayItems; // 0x50
		::System::Boolean _ListInitialized; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void OnBlankCloseAndExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL_ONBLANKCLOSEANDEXIT_OFFSET))(this);
		}

		::System::Void _BuildDisplayList(::RPG::Client::B51Racing::B51RacingCarStatDescDialogViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarStatDescDialogViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL__BUILDDISPLAYLIST_OFFSET))(this, a1);
		}

		::System::Void _RefreshStatList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL__REFRESHSTATLIST_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* _OnGetStatItem(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL__ONGETSTATITEM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZoneManager* _GetUINavigationZoneManager()
		{
			return ((::RPG::UINavigation::UINavigationZoneManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL__GETUINAVIGATIONZONEMANAGER_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1402* _GetConfigRepo()
		{
			return ((::Class_0_16E4307DCC419505_1402*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARSTATDESCDIALOGCONTROL__GETCONFIGREPO_OFFSET))(this);
		}
	};
}
