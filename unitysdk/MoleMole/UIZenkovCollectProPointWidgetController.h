#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_208CC9941471731A_130;
class Class_2_AF5BA1C65F12F4B1;
class Class_2_B07DA15529FA3811;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIZenkovCollectProPointWidgetController_Context; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_ADD_ONCLICK_OFFSET UNITYSDK_OFFSET(0x11A1B340)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_GET_BUTTONTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11A1B800)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_GET__MODEL_OFFSET UNITYSDK_OFFSET(0x11A1BB90)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11A1B470)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x11A1B610)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11A1B920)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x11A1B9C0)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_REMOVE_ONCLICK_OFFSET UNITYSDK_OFFSET(0x11A1B4E0)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A1BC50)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11A1BCB0)
#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x11A1BD50)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovCollectProPointWidgetController_TypeDefinitionIndex = 55225;

	class UIZenkovCollectProPointWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::UIZenkovCollectProPointWidgetController_Context* _context; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void add_OnClick(::System::Action_1<::Class_2_208CC9941471731A_130*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_2_208CC9941471731A_130*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_ADD_ONCLICK_OFFSET))(this, value);
		}

		::System::Void remove_OnClick(::System::Action_1<::Class_2_208CC9941471731A_130*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_2_208CC9941471731A_130*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_REMOVE_ONCLICK_OFFSET))(this, value);
		}

		::System::Boolean IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_ISUNLOCKED_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ButtonTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_GET_BUTTONTRANSFORM_OFFSET))(this);
		}

		::Class_2_B07DA15529FA3811* get__viewModel()
		{
			return ((::Class_2_B07DA15529FA3811*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::Class_2_AF5BA1C65F12F4B1* get__model()
		{
			return ((::Class_2_AF5BA1C65F12F4B1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_GET__MODEL_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
