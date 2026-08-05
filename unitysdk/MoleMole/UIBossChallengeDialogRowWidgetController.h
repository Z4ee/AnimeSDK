#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_283D143D4D8222B5;
class Class_3_3BE9E985CC6DA44B;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x170A2E90)
#define MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x170A2F00)
#define MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER_SETLAYERRECORD_OFFSET UNITYSDK_OFFSET(0x170A2FC0)
#define MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x170A3260)
#define MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x170A32C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeDialogRowWidgetController_TypeDefinitionIndex = 68251;

	class UIBossChallengeDialogRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_283D143D4D8222B5* get__viewModel()
		{
			return ((::Class_2_283D143D4D8222B5*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetLayerRecord(::System::Int32 zoneID, ::Class_3_3BE9E985CC6DA44B* layerRecord)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_3BE9E985CC6DA44B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER_SETLAYERRECORD_OFFSET))(this, zoneID, layerRecord);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
