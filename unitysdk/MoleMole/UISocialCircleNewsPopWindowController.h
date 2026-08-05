#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_524B7CDF7526EB0D;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISOCIALCIRCLENEWSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15F7BA50)
#define MOLEMOLE_UISOCIALCIRCLENEWSPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15F7BA60)
#define MOLEMOLE_UISOCIALCIRCLENEWSPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15F7BAD0)
#define MOLEMOLE_UISOCIALCIRCLENEWSPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15F7BB90)
#define MOLEMOLE_UISOCIALCIRCLENEWSPOPWINDOWCONTROLLER_TRYOVERRIDESHOULDIGNOREITEM_OFFSET UNITYSDK_OFFSET(0x15F7BD20)
#define MOLEMOLE_UISOCIALCIRCLENEWSPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7BE00)
#define MOLEMOLE_UISOCIALCIRCLENEWSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15F7BE10)
#define MOLEMOLE_UISOCIALCIRCLENEWSPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15F7BEB0)
#define MOLEMOLE_UISOCIALCIRCLENEWSPOPWINDOWCONTROLLER___BASE_TRYOVERRIDESHOULDIGNOREITEM_OFFSET UNITYSDK_OFFSET(0x15F7BEC0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleNewsPopWindowController_TypeDefinitionIndex = 60465;

	class UISocialCircleNewsPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLENEWSPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLENEWSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_524B7CDF7526EB0D* get__viewModel()
		{
			return ((::Class_2_524B7CDF7526EB0D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLENEWSPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLENEWSPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLENEWSPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean TryOverrideShouldIgnoreItem(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 selectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLENEWSPOPWINDOWCONTROLLER_TRYOVERRIDESHOULDIGNOREITEM_OFFSET))(this, gamepadModule, selectIndex);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLENEWSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLENEWSPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Boolean __base_TryOverrideShouldIgnoreItem(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLENEWSPOPWINDOWCONTROLLER___BASE_TRYOVERRIDESHOULDIGNOREITEM_OFFSET))(this, P0, P1);
		}
	};
}
