#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5897CA91FEB65CA5;
class Class_2_208CC9941471731A_156;
class Class_2_208CC9941471731A_639;
class Class_2_B010B6DC77D995E8;
class Class_2_B25CAE5C4D4716A8;
class Class_2_B25CAE5C4D4716A8_Class_2_C52D927DDDCC4659;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIAchievementTabWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ACHIEVEMENTCOMPARISON_OFFSET UNITYSDK_OFFSET(0x15E806E0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_CHECKAUTOSELECTGETAWARD_OFFSET UNITYSDK_OFFSET(0x15E80D80)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_GETALLCALLBACK_OFFSET UNITYSDK_OFFSET(0x15E81090)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_GETFIRSTCLASSCONFIGBYINDEX_OFFSET UNITYSDK_OFFSET(0x15E7E5F0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15E7D780)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONCLICKFIRSTTAB_OFFSET UNITYSDK_OFFSET(0x15E7E870)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E7D790)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONGETDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x15E80FA0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x15E7EEA0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15E81010)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONSELECTSECONDTAB_OFFSET UNITYSDK_OFFSET(0x15E7FBF0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15E7F150)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E7DF20)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E7D820)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E7DFF0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUPDATEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x15E807F0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHACHIEVEMENTS_OFFSET UNITYSDK_OFFSET(0x15E7FCE0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHARROWTIPS_OFFSET UNITYSDK_OFFSET(0x15E7FF00)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHGETALL_OFFSET UNITYSDK_OFFSET(0x15E80590)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHRANKS_OFFSET UNITYSDK_OFFSET(0x15E7E920)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHSECONDTABS_OFFSET UNITYSDK_OFFSET(0x15E7F440)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_SECONDTABCOMPARISON_OFFSET UNITYSDK_OFFSET(0x15E80500)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x15E7F300)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E81350)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E811B0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E813A0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x15E81430)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15E814C0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E81580)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E81590)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E815A0)
#define MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x15E81630)

namespace MoleMole
{
	inline static constexpr unsigned int UIAchievementPageController_TypeDefinitionIndex = 73069;

	class UIAchievementPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Corners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UIAchievementPageController_TypeDefinitionIndex)->GetStaticField(0x41E60);
		}
		::Class_2_B25CAE5C4D4716A8* _view; // 0x310
		::System::Collections::Generic::List_1<::Class_2_B25CAE5C4D4716A8_Class_2_C52D927DDDCC4659*>* _rankWidgets; // 0x318
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_639*>* _secondTabConfigs; // 0x320
		::System::Collections::Generic::List_1<::Class_1_5897CA91FEB65CA5*>* _achievementConfigs; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UIAchievementTabWidgetController*>* _secondTabControllers; // 0x330
		::Class_2_B010B6DC77D995E8* _achievementModel; // 0x338
		::System::Int32 _curerntSecondTabId; // 0x340
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_156*>* _firstClassConfigs; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Boolean TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32& selectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, gamepadModule, selectIndex);
		}

		::System::Void OnClickFirstTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONCLICKFIRSTTAB_OFFSET))(this, index);
		}

		::System::Void OnSelectSecondTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONSELECTSECONDTAB_OFFSET))(this, index);
		}

		::System::Void RefreshSecondTabs(::System::Int32 firstTabId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHSECONDTABS_OFFSET))(this, firstTabId);
		}

		::System::Int32 SecondTabComparison(::Class_2_208CC9941471731A_639* x, ::Class_2_208CC9941471731A_639* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_639*, ::Class_2_208CC9941471731A_639*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_SECONDTABCOMPARISON_OFFSET))(this, x, y);
		}

		::System::Void RefreshAchievements(::System::Int32 secondTabId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHACHIEVEMENTS_OFFSET))(this, secondTabId);
		}

		::System::Void RefreshGetAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHGETALL_OFFSET))(this);
		}

		::System::Int32 AchievementComparison(::Class_1_5897CA91FEB65CA5* x, ::Class_1_5897CA91FEB65CA5* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5897CA91FEB65CA5*, ::Class_1_5897CA91FEB65CA5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ACHIEVEMENTCOMPARISON_OFFSET))(this, x, y);
		}

		::System::Void RefreshRanks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHRANKS_OFFSET))(this);
		}

		::System::Void OnUpdateDataHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONUPDATEDATAHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnGetDataHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONGETDATAHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnMoveCallback(::MonoUITableScrollV2_MoveContext arg1, ::System::Single arg2)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_ONMOVECALLBACK_OFFSET))(this, arg1, arg2);
		}

		::System::Void RefreshArrowTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_REFRESHARROWTIPS_OFFSET))(this);
		}

		::System::Void GetAllCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_GETALLCALLBACK_OFFSET))(this);
		}

		::System::Void CheckAutoSelectGetAward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_CHECKAUTOSELECTGETAWARD_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_156* GetFirstClassConfigByIndex(::System::Int32 index)
		{
			return ((::Class_2_208CC9941471731A_156*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER_GETFIRSTCLASSCONFIGBYINDEX_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Boolean __base_TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* P0, ::System::Int32& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTPAGECONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, P0, P1);
		}
	};
}
