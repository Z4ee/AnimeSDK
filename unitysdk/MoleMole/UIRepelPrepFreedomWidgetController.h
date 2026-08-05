#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_ADB59D790E6DF17C;
class Class_2_EA8F026699B496CE;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15183AB0)
#define MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15183B20)
#define MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER_SETFREEDOMDATA_OFFSET UNITYSDK_OFFSET(0x15183BE0)
#define MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15183C30)
#define MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15183C90)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepelPrepFreedomWidgetController_TypeDefinitionIndex = 45607;

	class UIRepelPrepFreedomWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_ADB59D790E6DF17C* get__viewModel()
		{
			return ((::Class_2_ADB59D790E6DF17C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetFreedomData(::Class_2_EA8F026699B496CE* freedomData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_EA8F026699B496CE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER_SETFREEDOMDATA_OFFSET))(this, freedomData);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPFREEDOMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
