#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIInLevelPauseBuffWidgetController_EShowType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_938422ACC5F2A616;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIInLevelPauseBuffRowWidgetController; }
namespace MoleMole { class UITabBtnRoleRowWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_INITMONSTERINFO_OFFSET UNITYSDK_OFFSET(0x17ABE160)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_INITROLEBTN_OFFSET UNITYSDK_OFFSET(0x17ABE640)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ISMONSTERBOSS_OFFSET UNITYSDK_OFFSET(0x17ABFED0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONCLICKDROPDOWN_OFFSET UNITYSDK_OFFSET(0x17ABF100)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17ABF070)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONDROPDOWNCHANGE_OFFSET UNITYSDK_OFFSET(0x17ABF550)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17ABFE20)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17ABDEE0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17ABDF40)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_REFRESHAVATARSKILLINFO_OFFSET UNITYSDK_OFFSET(0x17AC0120)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_REFRESHBUFFINFO_OFFSET UNITYSDK_OFFSET(0x17AC0830)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_SETSELECTEDAVATARID_OFFSET UNITYSDK_OFFSET(0x17AC04D0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_SWITCHSELECTEDAVATAR_OFFSET UNITYSDK_OFFSET(0x17ABF8B0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_SWITCHSELECTEDMONSTER_OFFSET UNITYSDK_OFFSET(0x17ABF990)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_TRYHANDLEGAMEPADSELECT_OFFSET UNITYSDK_OFFSET(0x17AC1A30)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AC1F30)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC1D30)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER__INITROLEBTN_B__10_0_OFFSET UNITYSDK_OFFSET(0x17AC1FA0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER__ONUIOPEN_B__2_0_OFFSET UNITYSDK_OFFSET(0x17AC1F90)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17AC1FB0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17AC2040)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17AC20D0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17AC2160)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseBuffWidgetController_TypeDefinitionIndex = 86776;

	class UIInLevelPauseBuffWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::String** StaticGet_BOSS_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseBuffWidgetController_TypeDefinitionIndex)->GetStaticField(0x3FE90);
		}
		static ::System::String** StaticGet_AVATAR_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseBuffWidgetController_TypeDefinitionIndex)->GetStaticField(0x3FE98);
		}
		static ::System::Int32* StaticGet_MAX_AVATAR_NUM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseBuffWidgetController_TypeDefinitionIndex)->GetStaticField(0xEC50);
		}
		::Class_2_938422ACC5F2A616* _view; // 0x2C0
		::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* handleList; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelPauseBuffRowWidgetController*>* _buffRowList; // 0x2D0
		::System::UInt32 _curEntity; // 0x2D8
		::MoleMole::UIInLevelPauseBuffWidgetController_EShowType _curType; // 0x2DC
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _showAvatars; // 0x2E0
		::MoleMole::Battle::Entity* _showMonster; // 0x2E8
		::MoleMole::UIGeneralDynamicTipsPopWindowController* _dropDown; // 0x2F0
		::System::Collections::Generic::List_1<::System::Int32>* _showBuffIDs; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UITabBtnRoleRowWidgetController*>* roleTabBtns; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnClickDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONCLICKDROPDOWN_OFFSET))(this);
		}

		::System::Void OnDropDownChange(::System::Int32 index, ::System::Boolean select)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONDROPDOWNCHANGE_OFFSET))(this, index, select);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitMonsterInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_INITMONSTERINFO_OFFSET))(this);
		}

		::System::Boolean IsMonsterBoss(::MoleMole::Battle::Entity* monster)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_ISMONSTERBOSS_OFFSET))(this, monster);
		}

		::System::Void InitRoleBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_INITROLEBTN_OFFSET))(this);
		}

		::System::Void SwitchSelectedAvatar(::System::Int32 index, ::System::Boolean useAnim, ::System::Boolean isSwitch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_SWITCHSELECTEDAVATAR_OFFSET))(this, index, useAnim, isSwitch);
		}

		::System::Void SetSelectedAvatarID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_SETSELECTEDAVATARID_OFFSET))(this);
		}

		::System::Void SwitchSelectedMonster(::MoleMole::Battle::Entity* monster, ::System::Boolean useAnim, ::System::Boolean isSwitch)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_SWITCHSELECTEDMONSTER_OFFSET))(this, monster, useAnim, isSwitch);
		}

		::System::Void RefreshAvatarSkillInfo(::MoleMole::Battle::Entity* entity, ::System::Boolean useAnim, ::System::Boolean isSwitch)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_REFRESHAVATARSKILLINFO_OFFSET))(this, entity, useAnim, isSwitch);
		}

		::System::Void TryHandleGamepadSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_TRYHANDLEGAMEPADSELECT_OFFSET))(this);
		}

		::System::Void RefreshBuffInfo(::System::UInt32 enittyId, ::System::Boolean useAnim, ::System::Boolean isSwitch)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER_REFRESHBUFFINFO_OFFSET))(this, enittyId, useAnim, isSwitch);
		}

		::System::Void _OnUIOpen_b__2_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER__ONUIOPEN_B__2_0_OFFSET))(this, args);
		}

		::System::Void _InitRoleBtn_b__10_0(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER__INITROLEBTN_B__10_0_OFFSET))(this, i);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
