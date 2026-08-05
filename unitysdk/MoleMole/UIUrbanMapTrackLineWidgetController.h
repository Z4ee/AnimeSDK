#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_049A767AD72D947F;
class Class_2_4B3401D95328DA92;
namespace MoleMole { class DebugPathGuidePoints; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine::UI::Extension { class PathGuide; }

#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_GET_MAPMODEL_OFFSET UNITYSDK_OFFSET(0x1916F1F0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1916EDC0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1916EE30)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1916EEF0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1916F2B0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1916F310)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1916F3B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapTrackLineWidgetController_TypeDefinitionIndex = 58341;

	class UIUrbanMapTrackLineWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::DebugPathGuidePoints* DebugComp; // 0x2C0
		::UnityEngine::UI::Extension::PathGuide* PathGuide; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_049A767AD72D947F* get__viewModel()
		{
			return ((::Class_2_049A767AD72D947F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::Class_2_4B3401D95328DA92* get_MapModel()
		{
			return ((::Class_2_4B3401D95328DA92*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER_GET_MAPMODEL_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
