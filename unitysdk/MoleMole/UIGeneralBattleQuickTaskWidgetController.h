#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_819042A93FB9C697;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGENERALBATTLEQUICKTASKWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17BCBD20)
#define MOLEMOLE_UIGENERALBATTLEQUICKTASKWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17BCBD90)
#define MOLEMOLE_UIGENERALBATTLEQUICKTASKWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17BCBE30)
#define MOLEMOLE_UIGENERALBATTLEQUICKTASKWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17BCBFF0)
#define MOLEMOLE_UIGENERALBATTLEQUICKTASKWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17BCC050)
#define MOLEMOLE_UIGENERALBATTLEQUICKTASKWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17BCC0F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBattleQuickTaskWidgetController_TypeDefinitionIndex = 84355;

	class UIGeneralBattleQuickTaskWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTASKWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_819042A93FB9C697* get__viewModel()
		{
			return ((::Class_2_819042A93FB9C697*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTASKWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTASKWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTASKWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTASKWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTASKWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
