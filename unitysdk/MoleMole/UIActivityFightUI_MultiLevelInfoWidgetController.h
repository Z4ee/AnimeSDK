#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_0E1F6D0FF8B54521;
class Class_2_F2AFAE0447B8569C;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
template <typename T> class Class_1_3DF236F531F5694C;

#define MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1675FF90)
#define MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16760000)
#define MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x167601C0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x167600C0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_SETLEVELLIST_OFFSET UNITYSDK_OFFSET(0x16760110)
#define MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x167603E0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16760440)
#define MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x167604E0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16760570)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFightUI_MultiLevelInfoWidgetController_TypeDefinitionIndex = 78139;

	class UIActivityFightUI_MultiLevelInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_0E1F6D0FF8B54521* get__viewModel()
		{
			return ((::Class_2_0E1F6D0FF8B54521*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetLevelList(::Class_1_3DF236F531F5694C<::Class_2_F2AFAE0447B8569C*>* levels, ::System::Int32 selectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3DF236F531F5694C<::Class_2_F2AFAE0447B8569C*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_SETLEVELLIST_OFFSET))(this, levels, selectIndex);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_MULTILEVELINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
