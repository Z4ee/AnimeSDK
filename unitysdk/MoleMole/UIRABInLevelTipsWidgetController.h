#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_980AD78C3BD5BDE0;
class Class_2_3A94B9BE4F7970B2;
class Class_2_60638234271CCDB8_31;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABInLevelPageController; }
namespace MoleMole { class UIRABInLevelQuestTipsWidgetController; }
namespace MoleMole { class UIRABInLevelQuestTipsWidgetController_Context; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_BINDVIEW_OFFSET UNITYSDK_OFFSET(0x12FF5D40)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_CLEANUPQUESTTIPS_OFFSET UNITYSDK_OFFSET(0x12FF5AF0)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_CLOSECURRQUESTTIPS_OFFSET UNITYSDK_OFFSET(0x12FF62E0)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12FF59D0)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONRABQUESTFAILED_OFFSET UNITYSDK_OFFSET(0x12FF5ED0)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x12FF5980)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12FF5A60)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12FF57B0)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12FF58B0)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_TRYOPENQUESTTIPS_OFFSET UNITYSDK_OFFSET(0x12FF6050)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF6460)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12FF65F0)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x12FF6680)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12FF6690)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12FF6720)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12FF67B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABInLevelTipsWidgetController_TypeDefinitionIndex = 44641;

	class UIRABInLevelTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Single QuestTipsAutoCloseDelay; // 0x0
		::Class_2_60638234271CCDB8_31* _view; // 0x2C0
		::Class_2_3A94B9BE4F7970B2* _inLevelData; // 0x2C8
		::MoleMole::UIRABInLevelPageController* _parentCtrl; // 0x2D0
		::System::Collections::Generic::Queue_1<::MoleMole::UIRABInLevelQuestTipsWidgetController_Context*>* _questTipsQueue; // 0x2D8
		::System::Collections::Generic::HashSet_1<::System::Int32>* _questIdSet; // 0x2E0
		::MoleMole::UIRABInLevelQuestTipsWidgetController* _activeQuestTipsCtrl; // 0x2E8
		::System::Int32 QuestTipsAutoCloseCoroutineTag; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindView(::Class_1_980AD78C3BD5BDE0* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_980AD78C3BD5BDE0*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_BINDVIEW_OFFSET))(this, viewModel);
		}

		::System::Void OnRABQuestFailed(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONRABQUESTFAILED_OFFSET))(this, args);
		}

		::System::Void TryOpenQuestTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_TRYOPENQUESTTIPS_OFFSET))(this);
		}

		::System::Void CloseCurrQuestTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_CLOSECURRQUESTTIPS_OFFSET))(this);
		}

		::System::Void CleanupQuestTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_CLEANUPQUESTTIPS_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
