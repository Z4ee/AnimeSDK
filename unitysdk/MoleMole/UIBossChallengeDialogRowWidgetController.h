#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_9FA68ECF85CC1F30;
class Class_3_E9FF194CA9EF9D04;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x152EEFD0)
#define MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x152EF040)
#define MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER_SETLAYERRECORD_OFFSET UNITYSDK_OFFSET(0x152EF100)
#define MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x152EF390)
#define MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x152EF3F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeDialogRowWidgetController_TypeDefinitionIndex = 39664;

	class UIBossChallengeDialogRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_9FA68ECF85CC1F30* get__viewModel()
		{
			return ((::Class_2_9FA68ECF85CC1F30*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetLayerRecord(::System::Int32 zoneID, ::Class_3_E9FF194CA9EF9D04* layerRecord)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_E9FF194CA9EF9D04*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER_SETLAYERRECORD_OFFSET))(this, zoneID, layerRecord);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEDIALOGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
