#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_6BD9E25D4C69114D;
class Class_2_1A59A82B5866ED87;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16A65910)
#define MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16A65980)
#define MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER_SETGENERALGROUP_OFFSET UNITYSDK_OFFSET(0x16A65A40)
#define MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A65AF0)
#define MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16A65B50)

namespace MoleMole
{
	inline static constexpr unsigned int UINeoGoldenMechaGroupTabWidgetController_TypeDefinitionIndex = 44193;

	class UINeoGoldenMechaGroupTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_1A59A82B5866ED87* get__viewModel()
		{
			return ((::Class_2_1A59A82B5866ED87*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetGeneralGroup(::Class_1_6BD9E25D4C69114D* group)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6BD9E25D4C69114D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER_SETGENERALGROUP_OFFSET))(this, group);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHAGROUPTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
