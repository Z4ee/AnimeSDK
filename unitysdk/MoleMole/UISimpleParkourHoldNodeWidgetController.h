#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISimpleParkourNodeWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_3_78A11E8AEC1C73B0;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER_GET__HOLDNODEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1400DEF0)
#define MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1400DF50)
#define MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1400DFF0)
#define MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1400E050)

namespace MoleMole
{
	inline static constexpr unsigned int UISimpleParkourHoldNodeWidgetController_TypeDefinitionIndex = 59633;

	class UISimpleParkourHoldNodeWidgetController : public ::MoleMole::UISimpleParkourNodeWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_3_78A11E8AEC1C73B0* get__holdNodeViewModel()
		{
			return ((::Class_3_78A11E8AEC1C73B0*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER_GET__HOLDNODEVIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
