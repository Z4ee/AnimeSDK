#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_D68EC59F0214DAC2_11;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x176C4560)
#define MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x176C45F0)
#define MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x176C4490)
#define MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x176C44F0)
#define MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER_SETCLICKACTION_OFFSET UNITYSDK_OFFSET(0x176C46C0)
#define MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER_SETCOREREWARDSHOWITEM_OFFSET UNITYSDK_OFFSET(0x176C4670)
#define MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER_SETSELECTWIDGET_OFFSET UNITYSDK_OFFSET(0x176C47F0)
#define MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x176C4860)
#define MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x176C48C0)
#define MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x176C4950)
#define MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x176C49E0)
#define MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x176C4A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPCoreRewardShowWidgetWidgetController_TypeDefinitionIndex = 82894;

	class UIBPCoreRewardShowWidgetWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_D68EC59F0214DAC2_11* _view; // 0x2C0
		::System::Int32 rewardID; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetCoreRewardShowItem(::System::Int32 rewardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER_SETCOREREWARDSHOWITEM_OFFSET))(this, rewardID);
		}

		::System::Void SetClickAction(::System::Action_1<::MoleMole::UIBPCoreRewardShowWidgetWidgetController*>* clickAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIBPCoreRewardShowWidgetWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER_SETCLICKACTION_OFFSET))(this, clickAction);
		}

		::System::Void SetSelectWidget(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER_SETSELECTWIDGET_OFFSET))(this, isSelect);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDSHOWWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
