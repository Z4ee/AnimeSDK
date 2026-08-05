#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_8A9D789ECB52A5B9;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17462FC0)
#define MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17463030)
#define MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x174630D0)
#define MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17463200)
#define MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x174632E0)
#define MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x174632F0)
#define MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17463390)
#define MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17463430)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicalBattleLevelItemWidgetController_TypeDefinitionIndex = 62228;

	class UIMusicalBattleLevelItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_8A9D789ECB52A5B9* get__viewModel()
		{
			return ((::Class_2_8A9D789ECB52A5B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELITEMWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}
	};
}
