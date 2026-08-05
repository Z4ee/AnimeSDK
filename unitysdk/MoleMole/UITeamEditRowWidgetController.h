#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_1824EF69C8E376A3;
class Class_2_60638234271CCDB8_123;
class Class_2_E055DAB088B97B64;
class Class_3_DA14B6788FB0E99C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UITeamEditIconWidgetController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_GETREWARDCUSTOMLISTISFOCUS_OFFSET UNITYSDK_OFFSET(0x17D335E0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONBUFFINFOCLICKBTN_OFFSET UNITYSDK_OFFSET(0x17D69440)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONCLICKCHANGENAME_OFFSET UNITYSDK_OFFSET(0x17D69190)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x17D696E0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D67CC0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONENDEDIT_OFFSET UNITYSDK_OFFSET(0x17D69300)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONICONCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x17D67C20)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17D67730)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x17D69610)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17D67DD0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONSHAREBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x17D692A0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D67D50)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D67010)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_PLAYAPPLYTEAMANIM_OFFSET UNITYSDK_OFFSET(0x17D69860)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_PLAYBUDDYCHANGEANI_OFFSET UNITYSDK_OFFSET(0x17D34BE0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_REFRESHMUTISELECTED_OFFSET UNITYSDK_OFFSET(0x17D33B60)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17D68690)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_SETBIGSCENE_OFFSET UNITYSDK_OFFSET(0x17D32220)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_SETBUDDYCHANGEANISTATE_OFFSET UNITYSDK_OFFSET(0x17D690B0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x17D69150)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_SETTEAMDATA_OFFSET UNITYSDK_OFFSET(0x17D67EE0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D69920)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x17D69A40)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D69A50)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17D69AE0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x17D69B10)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17D69BA0)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D69C40)
#define MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D69CD0)

namespace MoleMole
{
	inline static constexpr unsigned int UITeamEditRowWidgetController_TypeDefinitionIndex = 64761;

	class UITeamEditRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_123* _view; // 0x2F0
		::System::Collections::Generic::List_1<::MoleMole::UITeamEditIconWidgetController*>* _avatarIconList; // 0x2F8
		::MoleMole::UITeamEditIconWidgetController* _buddyIconCtrl; // 0x300
		::System::Int32 _slot; // 0x308
		::Class_2_E055DAB088B97B64* pairUpInfo; // 0x310
		::System::Collections::Generic::List_1<::System::Int32>* _teamStartIdxs; // 0x318
		::Class_3_DA14B6788FB0E99C* _quickTeam; // 0x320
		::Il2CppArray<::Class_2_1824EF69C8E376A3*>* _avatarItemArr; // 0x328
		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* _selectedAvatars; // 0x330
		::System::UInt32 _buddyID; // 0x338
		::System::Action_1<::System::Int32>* SetMutiSelectAction; // 0x340
		::System::Boolean IsMutiSelect; // 0x348
		::System::Boolean WithOutBattle; // 0x349
		::System::Action_2<::System::Int32, ::System::Int32>* IconClickAction; // 0x350
		::System::Action* OnRootCustomListFocusChange; // 0x358
		::System::Boolean IsHasLockAvatar; // 0x360
		::System::Boolean IsHasLockBuddy; // 0x361
		::System::Boolean _isBigScene; // 0x362
		::System::Boolean _isEmpty; // 0x363
		::System::String* fadeInName; // 0x368
		::System::String* fadeOutName; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Boolean GetRewardCustomListIsFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_GETREWARDCUSTOMLISTISFOCUS_OFFSET))(this);
		}

		::System::Void OnIconClickHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONICONCLICKHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void OnClickChangeName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONCLICKCHANGENAME_OFFSET))(this);
		}

		::System::Void OnShareBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONSHAREBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void SetBigScene(::System::Boolean isBigScene)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_SETBIGSCENE_OFFSET))(this, isBigScene);
		}

		::System::Void OnEndEdit(::System::String* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONENDEDIT_OFFSET))(this, obj);
		}

		::System::Void SetTeamData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_SETTEAMDATA_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnBuffInfoClickBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONBUFFINFOCLICKBTN_OFFSET))(this);
		}

		::System::Void RefreshMutiSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_REFRESHMUTISELECTED_OFFSET))(this);
		}

		::System::Void PlayBuddyChangeAni(::System::Int32 changeState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_PLAYBUDDYCHANGEANI_OFFSET))(this, changeState);
		}

		::System::Void SetBuddyChangeAniState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_SETBUDDYCHANGEANISTATE_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void PlayApplyTeamAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER_PLAYAPPLYTEAMANIM_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
