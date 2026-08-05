#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UINewbieGuideRoleChoose02WidgetController_TeamSource.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_DE1EFA5AE007B965;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UINewbieGuidePopularTeamRowWidgetController; }
namespace MoleMole { class UINewbieGuidePopularTeamRowWidgetController_Data; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_FINDMATCHINGTEAMINDEX_OFFSET UNITYSDK_OFFSET(0x17568AA0)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_GETOWNEDAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0x17569CB0)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_GETSELECTEDTEAMAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1756A020)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x175680F0)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ISTEAMMATCH_OFFSET UNITYSDK_OFFSET(0x17569C10)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_MOVEAPPLIEDTEAMTOTOP_OFFSET UNITYSDK_OFFSET(0x17568C50)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ONCLICKAPPLYSELECTTEAM_OFFSET UNITYSDK_OFFSET(0x1756A0B0)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ONCLOSEBTNCLICK_OFFSET UNITYSDK_OFFSET(0x17569ED0)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17569890)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ONITEMCHECKCLICK_OFFSET UNITYSDK_OFFSET(0x17569AC0)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ONOKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x17569F50)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17569920)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17569A50)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17568100)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x175683F0)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_REFRESHCURRENTTEAM_OFFSET UNITYSDK_OFFSET(0x175694F0)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_REFRESHSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x17568F30)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_SORTTEAMLISTBYOWNEDCOUNT_OFFSET UNITYSDK_OFFSET(0x175686B0)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_UPDATESCROLLCHECKSTATE_OFFSET UNITYSDK_OFFSET(0x17569B20)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1756A4B0)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1756A5E0)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1756A670)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1756A730)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1756A740)
#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1756A750)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieguidePopularTeamPopWindowController_TypeDefinitionIndex = 86902;

	class UINewbieguidePopularTeamPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_DE1EFA5AE007B965* _view; // 0x318
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* _teamList; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UINewbieGuideRoleChoose02WidgetController_TeamSource>* _teamSourceList; // 0x328
		::System::Collections::Generic::List_1<::System::Int32>* _originalIndices; // 0x330
		::System::Int32 _initialIndex; // 0x338
		::System::Int32 _selectedIndex; // 0x33C
		::System::Action_1<::System::Int32>* _onApplyCallback; // 0x340
		::System::Action_1<::System::Int32>* _onCloseCallback; // 0x348
		::MoleMole::UINewbieGuidePopularTeamRowWidgetController* _currentTeamWidget; // 0x350
		::System::Collections::Generic::List_1<::MoleMole::UINewbieGuidePopularTeamRowWidgetController_Data*>* _scrollDataList; // 0x358
		::System::Boolean _isConfirmed; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_REFRESHSCROLLVIEW_OFFSET))(this);
		}

		::System::Void OnItemCheckClick(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ONITEMCHECKCLICK_OFFSET))(this, index);
		}

		::System::Void UpdateScrollCheckState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_UPDATESCROLLCHECKSTATE_OFFSET))(this);
		}

		::System::Void RefreshCurrentTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_REFRESHCURRENTTEAM_OFFSET))(this);
		}

		::System::Int32 FindMatchingTeamIndex(::System::Collections::Generic::List_1<::System::UInt32>* targetAvatarIds, ::MoleMole::UINewbieGuideRoleChoose02WidgetController_TeamSource targetSource)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::MoleMole::UINewbieGuideRoleChoose02WidgetController_TeamSource))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_FINDMATCHINGTEAMINDEX_OFFSET))(this, targetAvatarIds, targetSource);
		}

		::System::Void MoveAppliedTeamToTop(::System::Int32 matchedIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_MOVEAPPLIEDTEAMTOTOP_OFFSET))(this, matchedIndex);
		}

		::System::Void SortTeamListByOwnedCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_SORTTEAMLISTBYOWNEDCOUNT_OFFSET))(this);
		}

		static ::System::Int32 GetOwnedAvatarCount(::System::Collections::Generic::List_1<::System::UInt32>* team)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_GETOWNEDAVATARCOUNT_OFFSET))(team);
		}

		static ::System::Boolean IsTeamMatch(::System::Collections::Generic::List_1<::System::UInt32>* teamA, ::System::Collections::Generic::List_1<::System::UInt32>* teamB)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ISTEAMMATCH_OFFSET))(teamA, teamB);
		}

		::System::Void OnCloseBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ONCLOSEBTNCLICK_OFFSET))(this);
		}

		::System::Void OnOkBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ONOKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnClickApplySelectTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_ONCLICKAPPLYSELECTTEAM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSelectedTeamAvatarIds()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_GETSELECTEDTEAMAVATARIDS_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
