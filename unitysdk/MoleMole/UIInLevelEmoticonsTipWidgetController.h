#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIEmojiTipWidgetController.h"

class Class_1_82297B6AFFE49354;
class Class_2_68A5E7EF823C92F4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_ENABLEINPUT_OFFSET UNITYSDK_OFFSET(0x186EAD70)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_INITSELECTINDEXONSHOW_OFFSET UNITYSDK_OFFSET(0x186EB1B0)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_ONCLICKSELECTITEM_OFFSET UNITYSDK_OFFSET(0x186EB550)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186EB1F0)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x186EAE10)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186EB4D0)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186EA750)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186EAD00)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_REFRESHBUTTONCDVIEW_OFFSET UNITYSDK_OFFSET(0x186EB2D0)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x186EAEA0)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_SETONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x186EB280)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186EB5E0)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186EB700)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x186EB790)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186EB830)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186EB8C0)
#define MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186EB950)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelEmoticonsTipWidgetController_TypeDefinitionIndex = 40447;

	class UIInLevelEmoticonsTipWidgetController : public ::MoleMole::UIEmojiTipWidgetController
	{
	public:
		// static const ::System::Int32 EMOTICONS_COUNT = 0x8; // 0x0
		::Class_2_68A5E7EF823C92F4* _view; // 0x2C0
		::System::Action_1<::System::Int32>* _onClickButton; // 0x2C8
		::System::Collections::Generic::List_1<::Class_1_82297B6AFFE49354*>* _emoticonsIdList; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void EnableInput(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_ENABLEINPUT_OFFSET))(this, enable);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void InitSelectIndexOnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_INITSELECTINDEXONSHOW_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetOnClickButton(::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_SETONCLICKBUTTON_OFFSET))(this, onClick);
		}

		::System::Void RefreshButtonCDView(::System::Single cd, ::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_REFRESHBUTTONCDVIEW_OFFSET))(this, cd, ratio);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnClickSelectItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_ONCLICKSELECTITEM_OFFSET))(this, index);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEMOTICONSTIPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
