#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_8AFC7A4323AC0BA3;
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17AC6BB0)
#define MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_ISON_OFFSET UNITYSDK_OFFSET(0x17AC6D30)
#define MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17AC6C20)
#define MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x17AC6CE0)
#define MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_SETISON_OFFSET UNITYSDK_OFFSET(0x17AC6E30)
#define MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC6EE0)
#define MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17AC6F40)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotEntrustTipsWidgetController_TypeDefinitionIndex = 80885;

	class UIInterKnotEntrustTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Action_1<::System::Boolean>* callback; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_8AFC7A4323AC0BA3* get__viewModel()
		{
			return ((::Class_2_8AFC7A4323AC0BA3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetCallback(::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_SETCALLBACK_OFFSET))(this, callback);
		}

		::System::Boolean IsOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_ISON_OFFSET))(this);
		}

		::System::Void SetIsOn(::System::Boolean isOn, ::System::Boolean triggerCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER_SETISON_OFFSET))(this, isOn, triggerCallback);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTENTRUSTTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
