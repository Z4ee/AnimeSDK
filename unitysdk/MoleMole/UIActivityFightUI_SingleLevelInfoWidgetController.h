#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_A70527BA00350E79;
class Class_2_F2AFAE0447B8569C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
template <typename T> class Class_1_3DF236F531F5694C;

#define MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12B474F0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12B47560)
#define MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12B47620)
#define MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x12B47670)
#define MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B47720)
#define MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12B47780)
#define MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12B47820)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFightUI_SingleLevelInfoWidgetController_TypeDefinitionIndex = 44425;

	class UIActivityFightUI_SingleLevelInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_A70527BA00350E79* get__viewModel()
		{
			return ((::Class_2_A70527BA00350E79*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetLevel(::Class_1_3DF236F531F5694C<::Class_2_F2AFAE0447B8569C*>* levels)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3DF236F531F5694C<::Class_2_F2AFAE0447B8569C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER_SETLEVEL_OFFSET))(this, levels);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
