#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_5D3AD06553D92F8E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1517EFC0)
#define MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1517F030)
#define MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1517F0D0)
#define MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1517F300)
#define MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1517F360)
#define MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1517F400)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABResultBangbooDataStatWidgetController_TypeDefinitionIndex = 47662;

	class UIRABResultBangbooDataStatWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_5D3AD06553D92F8E* get__viewModel()
		{
			return ((::Class_2_5D3AD06553D92F8E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
