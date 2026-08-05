#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_C3D2448A87C70DB6.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_03F32380886A02FD;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1864BBC0)
#define MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1864BC30)
#define MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1864BFB0)
#define MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1864C220)
#define MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1864BD60)
#define MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1864BCF0)
#define MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x1864BED0)
#define MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1864C3F0)
#define MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1864C4A0)
#define MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1864C540)
#define MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1864C630)
#define MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1864C6C0)
#define MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1864C760)
#define MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x1864C7F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySidebarWidgetController_TypeDefinitionIndex = 80092;

	class UIMainCitySidebarWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Collections::Generic::List_1<::Struct_2_C3D2448A87C70DB6>* _addedSkinDatas; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_03F32380886A02FD* get__viewModel()
		{
			return ((::Class_2_03F32380886A02FD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32& selectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, gamepadModule, selectIndex);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Boolean __base_TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* P0, ::System::Int32& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSIDEBARWIDGETCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, P0, P1);
		}
	};
}
