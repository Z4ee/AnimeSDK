#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_39AB0B931DA10399;
class Class_2_96BDD5CA650B1D63;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelPauseBangbooSkillRowWidgetController; }
namespace MoleMole { class UIInLevelPauseBangbooSkillWidgetWidgetController_BuddySkillItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_INITROLEBTN_OFFSET UNITYSDK_OFFSET(0x17DC4020)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_ISBATTLEBUDDY_OFFSET UNITYSDK_OFFSET(0x17DC4BF0)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17DC4A30)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17DC4AC0)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17DC3EB0)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17DC3F10)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_REFRESHBUDDYSKILLINFO_OFFSET UNITYSDK_OFFSET(0x17DC5170)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_SWITCHSELECTEDAVATAR_OFFSET UNITYSDK_OFFSET(0x17DC4B40)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_TRYHANDLEGAMEPADSELECT_OFFSET UNITYSDK_OFFSET(0x17DC5B30)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DC5FE0)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17DC5E30)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER__INITROLEBTN_B__6_0_OFFSET UNITYSDK_OFFSET(0x17DC5FF0)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17DC6000)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17DC6090)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17DC6120)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17DC61B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseBangbooSkillWidgetWidgetController_TypeDefinitionIndex = 52201;

	class UIInLevelPauseBangbooSkillWidgetWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_MAX_BUDDY_NUM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseBangbooSkillWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0x12630);
		}
		::Class_2_96BDD5CA650B1D63* _view; // 0x2C0
		::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* handleList; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelPauseBangbooSkillRowWidgetController*>* _buddySkillRowList; // 0x2D0
		::System::Collections::Generic::List_1<::System::Int32>* buddyIDList; // 0x2D8
		::System::Collections::Generic::List_1<::Class_1_39AB0B931DA10399*>* buddyItemList; // 0x2E0
		::System::Int32 _curBuddyID; // 0x2E8
		::System::Int32 _curBuddyIndex; // 0x2EC
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelPauseBangbooSkillWidgetWidgetController_BuddySkillItem*>* _buddySkillItemList; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitRoleBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_INITROLEBTN_OFFSET))(this);
		}

		::System::Void SwitchSelectedAvatar(::System::Int32 index, ::System::Boolean useAnim, ::System::Boolean isSwitch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_SWITCHSELECTEDAVATAR_OFFSET))(this, index, useAnim, isSwitch);
		}

		::System::Boolean IsBattleBuddy(::System::Int32 buddyID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_ISBATTLEBUDDY_OFFSET))(this, buddyID);
		}

		::System::Void RefreshBuddySkillInfo(::System::Boolean isBattleBuddy, ::System::Boolean useAnim, ::System::Boolean isSwitch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_REFRESHBUDDYSKILLINFO_OFFSET))(this, isBattleBuddy, useAnim, isSwitch);
		}

		::System::Void TryHandleGamepadSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_TRYHANDLEGAMEPADSELECT_OFFSET))(this);
		}

		::System::Void _InitRoleBtn_b__6_0(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER__INITROLEBTN_B__6_0_OFFSET))(this, i);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
