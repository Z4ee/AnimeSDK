#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIInLevelPauseSkillWidgetWidgetController_EShowType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_39AB0B931DA10399;
class Class_2_1824EF69C8E376A3;
class Class_2_F034913F0CE169E2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIInLevelPauseBangbooSkillRowWidgetController; }
namespace MoleMole { class UIInLevelPauseSkillRowWidgetController; }
namespace MoleMole { class UIInLevelPauseSkillWidgetWidgetController_BuddySkillItem; }
namespace MoleMole { class UIInLevelPauseSkillWidgetWidgetController_SkillItem; }
namespace MoleMole { class UITabBtnRoleRowWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_CLEARAVATARSKILLINFO_OFFSET UNITYSDK_OFFSET(0x184A7E80)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_CLEARBUDDYSKILLINFO_OFFSET UNITYSDK_OFFSET(0x184A7AA0)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_GETAVATARID_OFFSET UNITYSDK_OFFSET(0x184A67D0)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_GETBUDDYID_OFFSET UNITYSDK_OFFSET(0x184A8840)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_INITBUDDYBTN_OFFSET UNITYSDK_OFFSET(0x184A8260)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_INITROLEBTN_OFFSET UNITYSDK_OFFSET(0x184A5B80)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_ISBATTLEBUDDY_OFFSET UNITYSDK_OFFSET(0x184A8970)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_ONCLICKDROPDOWN_OFFSET UNITYSDK_OFFSET(0x184A7590)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184A6650)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_ONDROPDOWNCHANGE_OFFSET UNITYSDK_OFFSET(0x184A79F0)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184A66E0)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184A5150)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x184A51B0)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_REFRESHAVATARSKILLINFO_OFFSET UNITYSDK_OFFSET(0x184A68F0)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_REFRESHBUDDYSKILLINFO_OFFSET UNITYSDK_OFFSET(0x184A8EF0)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_SETBUDDYINFO_OFFSET UNITYSDK_OFFSET(0x184A5530)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_SETSELECTEDAVATARID_OFFSET UNITYSDK_OFFSET(0x184A71C0)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_SWITCHSELECTEDAVATAR_OFFSET UNITYSDK_OFFSET(0x184A6850)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_SWITCHSELECTEDBUDDY_OFFSET UNITYSDK_OFFSET(0x184A88C0)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_TRYHANDLEGAMEPADSELECT_OFFSET UNITYSDK_OFFSET(0x184A7290)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x184A9C20)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x184A98B0)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER__INITBUDDYBTN_B__32_0_OFFSET UNITYSDK_OFFSET(0x184A9CA0)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER__INITROLEBTN_B__7_0_OFFSET UNITYSDK_OFFSET(0x184A9C90)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER__ONUIOPEN_B__3_0_OFFSET UNITYSDK_OFFSET(0x184A9C80)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184A9CB0)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184A9D40)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184A9DD0)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x184A9E60)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseSkillWidgetWidgetController_TypeDefinitionIndex = 70490;

	class UIInLevelPauseSkillWidgetWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::String** StaticGet_BUDDY_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSkillWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0x4AD90);
		}
		static ::System::String** StaticGet_AVATAR_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSkillWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0x4AD98);
		}
		static ::System::Int32* StaticGet_MAX_BUDDY_NUM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSkillWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0x113D0);
		}
		static ::System::Int32* StaticGet_MAX_AVATAR_NUM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseSkillWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0x113D4);
		}
		::Class_2_F034913F0CE169E2* _view; // 0x2C0
		::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* handleList; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelPauseSkillRowWidgetController*>* skillRowList; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UITabBtnRoleRowWidgetController*>* roleTabBtns; // 0x2D8
		::System::Collections::Generic::List_1<::System::Int32>* avatarIDList; // 0x2E0
		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* avatarItemList; // 0x2E8
		::System::Int32 _curAvatarID; // 0x2F0
		::System::Int32 _curIndex; // 0x2F4
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelPauseSkillWidgetWidgetController_SkillItem*>* _skillItemList; // 0x2F8
		::MoleMole::UIGeneralDynamicTipsPopWindowController* _dropDown; // 0x300
		::MoleMole::UIInLevelPauseSkillWidgetWidgetController_EShowType _curType; // 0x308
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelPauseBangbooSkillRowWidgetController*>* _buddySkillRowList; // 0x310
		::System::Collections::Generic::List_1<::System::Int32>* buddyIDList; // 0x318
		::System::Collections::Generic::List_1<::Class_1_39AB0B931DA10399*>* buddyItemList; // 0x320
		::System::Int32 _curBuddyID; // 0x328
		::System::Int32 _curBuddyIndex; // 0x32C
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelPauseSkillWidgetWidgetController_BuddySkillItem*>* _buddySkillItemList; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::UITabBtnRoleRowWidgetController*>* _buddyTabBtns; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Int32 GetAvatarID(::System::Int32 uniqueID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_GETAVATARID_OFFSET))(this, uniqueID);
		}

		::System::Void InitRoleBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_INITROLEBTN_OFFSET))(this);
		}

		::System::Void SwitchSelectedAvatar(::System::Int32 index, ::System::Boolean useAnim, ::System::Boolean isSwitch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_SWITCHSELECTEDAVATAR_OFFSET))(this, index, useAnim, isSwitch);
		}

		::System::Void SetSelectedAvatarID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_SETSELECTEDAVATARID_OFFSET))(this);
		}

		::System::Void RefreshAvatarSkillInfo(::System::Boolean useAnim, ::System::Boolean isSwitch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_REFRESHAVATARSKILLINFO_OFFSET))(this, useAnim, isSwitch);
		}

		::System::Void TryHandleGamepadSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_TRYHANDLEGAMEPADSELECT_OFFSET))(this);
		}

		::System::Void OnClickDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_ONCLICKDROPDOWN_OFFSET))(this);
		}

		::System::Void OnDropDownChange(::System::Int32 index, ::System::Boolean select)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_ONDROPDOWNCHANGE_OFFSET))(this, index, select);
		}

		::System::Void ClearAvatarSkillInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_CLEARAVATARSKILLINFO_OFFSET))(this);
		}

		::System::Void ClearBuddySkillInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_CLEARBUDDYSKILLINFO_OFFSET))(this);
		}

		::System::Int32 GetBuddyID(::System::Int32 uniqueID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_GETBUDDYID_OFFSET))(this, uniqueID);
		}

		::System::Void SetBuddyInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_SETBUDDYINFO_OFFSET))(this);
		}

		::System::Void InitBuddyBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_INITBUDDYBTN_OFFSET))(this);
		}

		::System::Void SwitchSelectedBuddy(::System::Int32 index, ::System::Boolean useAnim, ::System::Boolean isSwitch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_SWITCHSELECTEDBUDDY_OFFSET))(this, index, useAnim, isSwitch);
		}

		::System::Boolean IsBattleBuddy(::System::Int32 buddyID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_ISBATTLEBUDDY_OFFSET))(this, buddyID);
		}

		::System::Void RefreshBuddySkillInfo(::System::Boolean isBattleBuddy, ::System::Boolean useAnim, ::System::Boolean isSwitch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_REFRESHBUDDYSKILLINFO_OFFSET))(this, isBattleBuddy, useAnim, isSwitch);
		}

		::System::Void _OnUIOpen_b__3_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER__ONUIOPEN_B__3_0_OFFSET))(this, args);
		}

		::System::Void _InitRoleBtn_b__7_0(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER__INITROLEBTN_B__7_0_OFFSET))(this, i);
		}

		::System::Void _InitBuddyBtn_b__32_0(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER__INITBUDDYBTN_B__32_0_OFFSET))(this, i);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
