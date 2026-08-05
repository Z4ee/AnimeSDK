#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_5D361FB2D8795035;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIURBANMAPLISTROWLEVELINFOWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x188AD3C0)
#define MOLEMOLE_UIURBANMAPLISTROWLEVELINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x188AD430)
#define MOLEMOLE_UIURBANMAPLISTROWLEVELINFOWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x188AD4F0)
#define MOLEMOLE_UIURBANMAPLISTROWLEVELINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x188AD6C0)
#define MOLEMOLE_UIURBANMAPLISTROWLEVELINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x188AD720)
#define MOLEMOLE_UIURBANMAPLISTROWLEVELINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x188AD7C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapListRowLevelInfoWidgetController_TypeDefinitionIndex = 56536;

	class UIUrbanMapListRowLevelInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLISTROWLEVELINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_5D361FB2D8795035* get__viewModel()
		{
			return ((::Class_2_5D361FB2D8795035*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLISTROWLEVELINFOWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLISTROWLEVELINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLISTROWLEVELINFOWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLISTROWLEVELINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLISTROWLEVELINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
