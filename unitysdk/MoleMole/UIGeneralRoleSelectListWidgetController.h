#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_C98ECDFBB2431E09;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16F718A0)
#define MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16F71910)
#define MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x16F71E80)
#define MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16F719B0)
#define MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16F71AB0)
#define MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_SETMODE_OFFSET UNITYSDK_OFFSET(0x16F71CE0)
#define MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_SETROLEFOCUS_OFFSET UNITYSDK_OFFSET(0x16F71DB0)
#define MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F71F20)
#define MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16F71F80)
#define MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x16F72020)
#define MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16F720B0)
#define MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16F72150)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralRoleSelectListWidgetController_TypeDefinitionIndex = 59345;

	class UIGeneralRoleSelectListWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_C98ECDFBB2431E09* get__viewModel()
		{
			return ((::Class_2_C98ECDFBB2431E09*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetMode(::System::Boolean isSpecial, ::System::Boolean scrollToBuddy, ::System::Boolean focus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_SETMODE_OFFSET))(this, isSpecial, scrollToBuddy, focus);
		}

		::System::Void SetRoleFocus(::System::UInt32 uid, ::System::Boolean isEmpty, ::System::Boolean isBuddy)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_SETROLEFOCUS_OFFSET))(this, uid, isEmpty, isBuddy);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
