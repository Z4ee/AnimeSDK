#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_0AFFF5A069ED831E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17778680)
#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x177786F0)
#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17778860)
#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17778790)
#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17778A20)
#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17778A80)
#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17778B20)
#define MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17778BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBattleQuickTeamWidgetController_TypeDefinitionIndex = 53726;

	class UIGeneralBattleQuickTeamWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_0AFFF5A069ED831E* get__viewModel()
		{
			return ((::Class_2_0AFFF5A069ED831E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBATTLEQUICKTEAMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
