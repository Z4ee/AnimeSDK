#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_05983E599CC785E7;
class Class_3_1EA5936EA10EA317;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16028AA0)
#define MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_GET__VIEW_OFFSET UNITYSDK_OFFSET(0x16028A30)
#define MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16028B10)
#define MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16029090)
#define MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16028CA0)
#define MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_REFERSHTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x16029460)
#define MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_REFRESHHINTTEXT_OFFSET UNITYSDK_OFFSET(0x16028E70)
#define MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_TRYSETTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x160298B0)
#define MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x160290F0)
#define MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16029C10)
#define MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16029C70)
#define MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16029D10)
#define MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16029D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovCountDownWidgetController_TypeDefinitionIndex = 64315;

	class UIBangkovCountDownWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Boolean _timerBlinkActive; // 0x2C0
		::System::Single lastLeftTime; // 0x2C4
		::UnityEngine::Color _lastColor; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_3_1EA5936EA10EA317* get__view()
		{
			return ((::Class_3_1EA5936EA10EA317*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_GET__VIEW_OFFSET))(this);
		}

		::Class_2_05983E599CC785E7* get__viewModel()
		{
			return ((::Class_2_05983E599CC785E7*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void RefershTextColor(::System::Single leftTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_REFERSHTEXTCOLOR_OFFSET))(this, leftTime);
		}

		::System::Void TrySetTextColor(::UnityEngine::Color textColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_TRYSETTEXTCOLOR_OFFSET))(this, textColor);
		}

		::System::Void RefreshHintText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER_REFRESHHINTTEXT_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVCOUNTDOWNWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
