#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9FBDB47166F97B2B.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_6D3ECB4C39924DFD;
class Class_1_893417714B2AA846;
class Class_1_945ACFB1FEBC7A2C_11;
class Class_2_94D5884806027679;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRoleSkillAttributeRowChildWindowController; }
namespace MoleMole { class UIRoleSkillInfoRowChildWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x155E7060)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x155E6F50)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155E6FE0)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x155E6E80)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x155E6EE0)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_REFRESHATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x155E7AB0)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_REFRESHDESC_OFFSET UNITYSDK_OFFSET(0x155E7DD0)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x155E7590)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_REFRESHTITLE_OFFSET UNITYSDK_OFFSET(0x155E7290)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x155E7A40)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_SETFOLD_OFFSET UNITYSDK_OFFSET(0x155E80D0)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x155E8500)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER__REFRESHINFO_B__7_0_OFFSET UNITYSDK_OFFSET(0x155E86A0)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER__REFRESHINFO_B__7_1_OFFSET UNITYSDK_OFFSET(0x155E8720)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x155E8730)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155E87C0)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x155E8850)
#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x155E88E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseBangbooSkillRowWidgetController_TypeDefinitionIndex = 55988;

	class UIInLevelPauseBangbooSkillRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_94D5884806027679* _view; // 0x2B8
		::System::Boolean isFold; // 0x2C0
		::Class_1_893417714B2AA846* buddyData; // 0x2C8
		::Enum_3_9FBDB47166F97B2B skillType; // 0x2D0
		::Class_1_6D3ECB4C39924DFD* skillInfo; // 0x2D8
		::System::Boolean isBattleBuddy; // 0x2E0
		::System::Boolean isShowingAttribute; // 0x2E1
		::System::Collections::Generic::List_1<::MoleMole::UIRoleSkillInfoRowChildWindowController*>* _infoItemCtrlList; // 0x2E8
		::System::Collections::Generic::List_1<::MoleMole::UIRoleSkillAttributeRowChildWindowController*>* _attributeCtrlList; // 0x2F0
		::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_11*>* cur_ls; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_CLEAR_OFFSET))(this);
		}

		::System::Void RefreshTitle(::Enum_3_9FBDB47166F97B2B type)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_9FBDB47166F97B2B))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_REFRESHTITLE_OFFSET))(this, type);
		}

		::System::Void RefreshInfo(::Enum_3_9FBDB47166F97B2B type, ::System::Int32 buddyID, ::Class_1_893417714B2AA846* buddyData, ::System::Boolean isBattleBuddy)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_9FBDB47166F97B2B, ::System::Int32, ::Class_1_893417714B2AA846*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this, type, buddyID, buddyData, isBattleBuddy);
		}

		::System::Void Refresh(::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_REFRESH_OFFSET))(this, init);
		}

		::System::Void RefreshDesc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_REFRESHDESC_OFFSET))(this);
		}

		::System::Void RefreshAttribute(::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_REFRESHATTRIBUTE_OFFSET))(this, init);
		}

		::System::Void SetFold(::System::Boolean fold)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER_SETFOLD_OFFSET))(this, fold);
		}

		::System::Void _RefreshInfo_b__7_0(::System::Boolean b, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER__REFRESHINFO_B__7_0_OFFSET))(this, b, init);
		}

		::System::Void _RefreshInfo_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER__REFRESHINFO_B__7_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
