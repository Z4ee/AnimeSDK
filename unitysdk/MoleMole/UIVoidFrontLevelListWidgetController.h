#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_88A364F1F2179491_2.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_DA7A297F95826FC8;
class Class_3_CFE95B82BD52EB3B;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_AFTERSHOW_OFFSET UNITYSDK_OFFSET(0x15FA3230)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15FA2FB0)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_GMREFRESH_OFFSET UNITYSDK_OFFSET(0x15FA3610)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15FA3020)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15FA31C0)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15FA30E0)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x15FA33C0)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_SETNODECLICKCB_OFFSET UNITYSDK_OFFSET(0x15FA3550)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_SETTABSELECTCB_OFFSET UNITYSDK_OFFSET(0x15FA3490)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x15FA32E0)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA36C0)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_AFTERSHOW_OFFSET UNITYSDK_OFFSET(0x15FA3720)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15FA3730)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15FA37D0)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15FA3870)
#define MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x15FA3900)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontLevelListWidgetController_TypeDefinitionIndex = 74731;

	class UIVoidFrontLevelListWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_DA7A297F95826FC8* get__viewModel()
		{
			return ((::Class_2_DA7A297F95826FC8*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void AfterShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_AFTERSHOW_OFFSET))(this);
		}

		::System::Boolean TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32& selectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, gamepadModule, selectIndex);
		}

		::System::Void RefreshWidget(::Enum_3_88A364F1F2179491_2 difficulty, ::System::Int32 focusNodeId, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_88A364F1F2179491_2, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this, difficulty, focusNodeId, playAnim);
		}

		::System::Void SetTabSelectCb(::System::Action_1<::Enum_3_88A364F1F2179491_2>* onSelectTab)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Enum_3_88A364F1F2179491_2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_SETTABSELECTCB_OFFSET))(this, onSelectTab);
		}

		::System::Void SetNodeClickCb(::System::Action_1<::Class_3_CFE95B82BD52EB3B*>* onClickNode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_3_CFE95B82BD52EB3B*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_SETNODECLICKCB_OFFSET))(this, onClickNode);
		}

		::System::Void GmRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER_GMREFRESH_OFFSET))(this);
		}

		::System::Void __base_AfterShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_AFTERSHOW_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Boolean __base_TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* P0, ::System::Int32& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTLEVELLISTWIDGETCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, P0, P1);
		}
	};
}
