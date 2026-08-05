#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISimpleParkourNodeWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_3_530EAC5C3D8DF827;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER_GET__HOLDNODEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15A285E0)
#define MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15A28640)
#define MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A286E0)
#define MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15A28740)

namespace MoleMole
{
	inline static constexpr unsigned int UISimpleParkourHoldNodeWidgetController_TypeDefinitionIndex = 59704;

	class UISimpleParkourHoldNodeWidgetController : public ::MoleMole::UISimpleParkourNodeWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_3_530EAC5C3D8DF827* get__holdNodeViewModel()
		{
			return ((::Class_3_530EAC5C3D8DF827*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIMPLEPARKOURHOLDNODEWIDGETCONTROLLER_GET__HOLDNODEVIEWMODEL_OFFSET))(this);
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
