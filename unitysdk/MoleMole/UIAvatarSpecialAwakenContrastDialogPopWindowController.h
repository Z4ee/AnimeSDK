#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_5F58165B9CAA39B4;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLER_CREATEDESC_OFFSET UNITYSDK_OFFSET(0x19290250)
#define MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLER_CREATETAB_OFFSET UNITYSDK_OFFSET(0x192900D0)
#define MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1928FAA0)
#define MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1928FAB0)
#define MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1928FB20)
#define MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x192903D0)
#define MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x192904F0)
#define MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19290500)
#define MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x192905A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenContrastDialogPopWindowController_TypeDefinitionIndex = 75102;

	class UIAvatarSpecialAwakenContrastDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_5F58165B9CAA39B4* get__viewModel()
		{
			return ((::Class_2_5F58165B9CAA39B4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateTab(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLER_CREATETAB_OFFSET))(this, arg);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateDesc(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLER_CREATEDESC_OFFSET))(this, arg);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDIALOGPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
