#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_1931156DDD30B37B;
namespace MoleMole { class UIBPCoreRewardContext; }
namespace MoleMole { class UIBPCoreRewardShowWidgetWidgetController; }
namespace MoleMole { class UIBPCoreRewardTipWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_INITCOREREWARDSELECT_OFFSET UNITYSDK_OFFSET(0x14EB0A70)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_INITREWARDWIDGETS_OFFSET UNITYSDK_OFFSET(0x14EB07C0)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_ONCLICKCOREREWARD_OFFSET UNITYSDK_OFFSET(0x14EB1060)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14EB0F50)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x14EB0EA0)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14EB0B80)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14EB0FE0)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14EB04A0)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14EB05E0)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_REFRESHCOREREWARDTIPS_OFFSET UNITYSDK_OFFSET(0x14EB0E10)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_SHOWCOREREWARDINFO_OFFSET UNITYSDK_OFFSET(0x14EB1530)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_TAKESELECTCOREREWARD_OFFSET UNITYSDK_OFFSET(0x14EB13A0)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14EB1720)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14EB1780)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x14EB1810)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14EB18A0)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14EB1940)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14EB19D0)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14EB1A60)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPCoreRewardWidgetWidgetController_TypeDefinitionIndex = 66600;

	class UIBPCoreRewardWidgetWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_1931156DDD30B37B* _view; // 0x2B8
		::System::Int32 selectRewardID; // 0x2C0
		::MoleMole::UIBPCoreRewardContext* context; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIBPCoreRewardShowWidgetWidgetController*>* rewardWidgets; // 0x2D0
		::MoleMole::UIBPCoreRewardTipWidgetController* tipsController; // 0x2D8
		::MoleMole::UIBPCoreRewardTipWidgetController* consoleTipsController; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitRewardWidgets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_INITREWARDWIDGETS_OFFSET))(this);
		}

		::System::Void InitCoreRewardSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_INITCOREREWARDSELECT_OFFSET))(this);
		}

		::System::Void OnClickCoreReward(::MoleMole::UIBPCoreRewardShowWidgetWidgetController* clickWidget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBPCoreRewardShowWidgetWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_ONCLICKCOREREWARD_OFFSET))(this, clickWidget);
		}

		::System::Void TakeSelectCoreReward(::System::Action* successCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_TAKESELECTCOREREWARD_OFFSET))(this, successCallback);
		}

		::System::Void RefreshCoreRewardTips(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_REFRESHCOREREWARDTIPS_OFFSET))(this, force);
		}

		::System::Void ShowCoreRewardInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER_SHOWCOREREWARDINFO_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
