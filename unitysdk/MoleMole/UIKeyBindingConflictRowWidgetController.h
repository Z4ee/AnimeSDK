#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_029003AFE5A42E47.h"

class Class_1_00CE3360E2CE5BB6;
class Class_2_79F6D62CE30E3F8E_68;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIKeyBindingContext; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_GETLOGICBUTTONNEWKEYCODE_OFFSET UNITYSDK_OFFSET(0x16411D30)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x164116F0)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164115E0)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16411670)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16411470)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x164114D0)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x164120C0)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16412150)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER__ONUIOPEN_B__2_0_OFFSET UNITYSDK_OFFSET(0x164121B0)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER__ONUIOPEN_B__2_1_OFFSET UNITYSDK_OFFSET(0x164121C0)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164121D0)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16412260)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164122F0)
#define MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16412380)

namespace MoleMole
{
	inline static constexpr unsigned int UIKeyBindingConflictRowWidgetController_TypeDefinitionIndex = 46040;

	class UIKeyBindingConflictRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_68* _view; // 0x2B8
		::MoleMole::UIKeyBindingContext* _context; // 0x2C0
		::Class_1_00CE3360E2CE5BB6* _keyPanelItem; // 0x2C8
		::Class_1_00CE3360E2CE5BB6* _keyPanelItem02; // 0x2D0
		::Class_1_00CE3360E2CE5BB6* _comboKeyPanelItem; // 0x2D8
		::Class_1_00CE3360E2CE5BB6* _comboKeyPanelItem02; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView(::MoleMole::UIKeyBindingContext* context, ::Struct_2_029003AFE5A42E47 info, ::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>* allInfos, ::System::Boolean isTextHighlight)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIKeyBindingContext*, ::Struct_2_029003AFE5A42E47, ::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_INITVIEW_OFFSET))(this, context, info, allInfos, isTextHighlight);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Int32 GetLogicButtonNewKeyCode(::MoleMole::LogicButtonInputType logicButtonType, ::Enum_3_A019F766F8C74696 inputDevice, ::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>* allInfos)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::Enum_3_A019F766F8C74696, ::System::Collections::Generic::List_1<::Struct_2_029003AFE5A42E47>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER_GETLOGICBUTTONNEWKEYCODE_OFFSET))(this, logicButtonType, inputDevice, allInfos);
		}

		::System::Void _OnUIOpen_b__2_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER__ONUIOPEN_B__2_0_OFFSET))(this, _);
		}

		::System::Void _OnUIOpen_b__2_1(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER__ONUIOPEN_B__2_1_OFFSET))(this, _);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIKEYBINDINGCONFLICTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
