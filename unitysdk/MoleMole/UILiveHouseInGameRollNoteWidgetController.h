#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UILiveHouseInGameNoteWidgetControllerBase.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_3_983E74A8267775B5;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UILIVEHOUSEINGAMEROLLNOTEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15C4AB10)
#define MOLEMOLE_UILIVEHOUSEINGAMEROLLNOTEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15C4AB80)
#define MOLEMOLE_UILIVEHOUSEINGAMEROLLNOTEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C4AC20)
#define MOLEMOLE_UILIVEHOUSEINGAMEROLLNOTEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15C4AC80)

namespace MoleMole
{
	inline static constexpr unsigned int UILiveHouseInGameRollNoteWidgetController_TypeDefinitionIndex = 74441;

	class UILiveHouseInGameRollNoteWidgetController : public ::MoleMole::UILiveHouseInGameNoteWidgetControllerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEINGAMEROLLNOTEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_3_983E74A8267775B5* get__viewModel()
		{
			return ((::Class_3_983E74A8267775B5*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEINGAMEROLLNOTEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEINGAMEROLLNOTEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEINGAMEROLLNOTEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
