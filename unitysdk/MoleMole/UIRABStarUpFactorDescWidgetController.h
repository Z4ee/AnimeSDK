#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_7DFDE5EF8F0DD415;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1517F490)
#define MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1517F500)
#define MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1517F5A0)
#define MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1517F760)
#define MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1517F7C0)
#define MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1517F860)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStarUpFactorDescWidgetController_TypeDefinitionIndex = 48067;

	class UIRABStarUpFactorDescWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_7DFDE5EF8F0DD415* get__viewModel()
		{
			return ((::Class_2_7DFDE5EF8F0DD415*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTARUPFACTORDESCWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
