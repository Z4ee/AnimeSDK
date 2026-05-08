#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_0CB1AB839E602849;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLERTEST_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14D57DD0)
#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLERTEST_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14D57E40)
#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLERTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x14D57ED0)
#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLERTEST___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14D57F30)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStyleWidgetControllerTest_TypeDefinitionIndex = 59811;

	class UINewsStyleWidgetControllerTest : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLERTEST__CTOR_OFFSET))(this);
		}

		::Class_2_0CB1AB839E602849* get__viewModel()
		{
			return ((::Class_2_0CB1AB839E602849*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLERTEST_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLERTEST_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLERTEST___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
