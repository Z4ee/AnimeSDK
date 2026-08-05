#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_7E17391FB300587E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19897B90)
#define MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19897C00)
#define MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19897CA0)
#define MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19897E60)
#define MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19897EC0)
#define MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19897F60)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelBossSkillRowWidgetController_TypeDefinitionIndex = 80248;

	class UIRABLevelBossSkillRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_7E17391FB300587E* get__viewModel()
		{
			return ((::Class_2_7E17391FB300587E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELBOSSSKILLROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
