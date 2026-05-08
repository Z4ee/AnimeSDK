#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_C04F87C132BA9A06;
class Class_2_C18C75DF315CAD7E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICoopTeachPageController_Context; }
namespace System { class EventArgs; }

#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x152FA660)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x152FA4E0)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x152FA4F0)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_INITEXPITEM_OFFSET UNITYSDK_OFFSET(0x152FACB0)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_INITINDEX_OFFSET UNITYSDK_OFFSET(0x152FB1B0)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x152FA560)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONLEVELREWARDCHANGE_OFFSET UNITYSDK_OFFSET(0x152FA730)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x152FB0F0)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x152FB660)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x152FB5F0)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_REFRESHEXP_OFFSET UNITYSDK_OFFSET(0x152FA780)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x152FB850)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x152FB860)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x152FB900)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x152FB910)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x152FB920)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopTeachPageController_TypeDefinitionIndex = 77402;

	class UICoopTeachPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_C18C75DF315CAD7E* get__viewModel()
		{
			return ((::Class_2_C18C75DF315CAD7E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::Class_2_C04F87C132BA9A06* get_Model()
		{
			return ((::Class_2_C04F87C132BA9A06*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Void OnLevelRewardChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONLEVELREWARDCHANGE_OFFSET))(this, args);
		}

		::System::Void RefreshExp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_REFRESHEXP_OFFSET))(this);
		}

		::System::Void InitExpItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_INITEXPITEM_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void InitIndex(::MoleMole::UICoopTeachPageController_Context* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopTeachPageController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_INITINDEX_OFFSET))(this, ctx);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
