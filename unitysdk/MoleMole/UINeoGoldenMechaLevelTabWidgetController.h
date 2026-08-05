#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_4F0C338489B060CF;
class Class_2_1C97EB19EBCD7CE1;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17566940)
#define MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x175669B0)
#define MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x17566A70)
#define MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17566B20)
#define MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17566B80)

namespace MoleMole
{
	inline static constexpr unsigned int UINeoGoldenMechaLevelTabWidgetController_TypeDefinitionIndex = 43056;

	class UINeoGoldenMechaLevelTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_1C97EB19EBCD7CE1* get__viewModel()
		{
			return ((::Class_2_1C97EB19EBCD7CE1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetLevel(::Class_1_4F0C338489B060CF* generalLevel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4F0C338489B060CF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER_SETLEVEL_OFFSET))(this, generalLevel);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEOGOLDENMECHALEVELTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
