#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_65AA22E73CD7E617;
class Class_2_11247D643A7817C1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_GETTRICKROWCONTROLLERS_OFFSET UNITYSDK_OFFSET(0x103FEBA0)
#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x103FDDB0)
#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x103FDDC0)
#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_INITTRICKS_OFFSET UNITYSDK_OFFSET(0x103FE2F0)
#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x103FDE30)
#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x103FE0D0)
#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_SETSTATE_OFFSET UNITYSDK_OFFSET(0x103FE7D0)
#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x103FECF0)
#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x103FEE10)
#define MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x103FEEB0)

namespace MoleMole
{
	inline static constexpr unsigned int UITrickDialogPopWindowController_TypeDefinitionIndex = 77694;

	class UITrickDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*>* trickMapController; // 0x318
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* titleMap; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_11247D643A7817C1* get__viewModel()
		{
			return ((::Class_2_11247D643A7817C1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void InitTricks(::System::Collections::Generic::List_1<::Class_1_65AA22E73CD7E617*>* trickRows)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_65AA22E73CD7E617*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_INITTRICKS_OFFSET))(this, trickRows);
		}

		::System::Void SetState(::System::String* name, ::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_SETSTATE_OFFSET))(this, name, state);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* GetTrickRowControllers(::System::String* Root)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER_GETTRICKROWCONTROLLERS_OFFSET))(this, Root);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
