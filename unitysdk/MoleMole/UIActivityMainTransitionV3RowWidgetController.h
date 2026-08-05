#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_938D0F586395DD5C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_BINDINFOBTNCLICKACTION_OFFSET UNITYSDK_OFFSET(0x1B6EE830)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_GETGENERALBTN_OFFSET UNITYSDK_OFFSET(0x1B6EEA80)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_GETVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B6EE790)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B6EE4C0)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B6EE530)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1B6EE5D0)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_SETIMAGE_OFFSET UNITYSDK_OFFSET(0x1B6EF020)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_SETINFOTEXTKEY_OFFSET UNITYSDK_OFFSET(0x1B6EEC50)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6EF210)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B6EF270)
#define MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1B6EF310)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityMainTransitionV3RowWidgetController_TypeDefinitionIndex = 80923;

	class UIActivityMainTransitionV3RowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_938D0F586395DD5C* get__viewModel()
		{
			return ((::Class_2_938D0F586395DD5C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::Class_2_938D0F586395DD5C* GetViewModel()
		{
			return ((::Class_2_938D0F586395DD5C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_GETVIEWMODEL_OFFSET))(this);
		}

		::System::Void BindInfoBtnClickAction(::UnityEngine::Events::UnityAction* clieckAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_BINDINFOBTNCLICKACTION_OFFSET))(this, clieckAction);
		}

		::MoleMole::UIGeneralButtonController* GetGeneralBtn()
		{
			return ((::MoleMole::UIGeneralButtonController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_GETGENERALBTN_OFFSET))(this);
		}

		::System::Void SetInfoTextKey(::System::String* titleKey, ::System::String* accessKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_SETINFOTEXTKEY_OFFSET))(this, titleKey, accessKey);
		}

		::System::Void SetImage(::System::String* iamgePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER_SETIMAGE_OFFSET))(this, iamgePath);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINTRANSITIONV3ROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
