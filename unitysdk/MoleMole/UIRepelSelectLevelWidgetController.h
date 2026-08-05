#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_EC28E1D3A39EE7DE_18;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIREPELSELECTLEVELWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x198A1910)
#define MOLEMOLE_UIREPELSELECTLEVELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x198A1980)
#define MOLEMOLE_UIREPELSELECTLEVELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x198A1A40)
#define MOLEMOLE_UIREPELSELECTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x198A1AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepelSelectLevelWidgetController_TypeDefinitionIndex = 86692;

	class UIRepelSelectLevelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELSELECTLEVELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_EC28E1D3A39EE7DE_18* get__viewModel()
		{
			return ((::Class_2_EC28E1D3A39EE7DE_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELSELECTLEVELWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELSELECTLEVELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELSELECTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
