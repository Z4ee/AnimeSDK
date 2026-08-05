#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_94C24D90AF05CB3B;
class Class_3_AE02BC8285203464_18;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1954FB90)
#define MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1954FC00)
#define MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1954FCA0)
#define MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1954FE40)
#define MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1954FF00)
#define MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1954FF60)
#define MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19550000)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySkyRewardItemWidgetController_TypeDefinitionIndex = 75892;

	class UIActivitySkyRewardItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_94C24D90AF05CB3B* get__viewModel()
		{
			return ((::Class_2_94C24D90AF05CB3B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshView(::Class_3_AE02BC8285203464_18* task, ::System::Int32 rewardIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_18*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, task, rewardIndex);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
