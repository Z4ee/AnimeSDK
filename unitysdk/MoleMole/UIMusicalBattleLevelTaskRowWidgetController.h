#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_FB653C35CA6282A8;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIMUSICALBATTLELEVELTASKROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14C64FB0)
#define MOLEMOLE_UIMUSICALBATTLELEVELTASKROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14C65020)
#define MOLEMOLE_UIMUSICALBATTLELEVELTASKROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14C650C0)
#define MOLEMOLE_UIMUSICALBATTLELEVELTASKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C651D0)
#define MOLEMOLE_UIMUSICALBATTLELEVELTASKROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14C65230)
#define MOLEMOLE_UIMUSICALBATTLELEVELTASKROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14C652D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicalBattleLevelTaskRowWidgetController_TypeDefinitionIndex = 79115;

	class UIMusicalBattleLevelTaskRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELTASKROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_FB653C35CA6282A8* get__viewModel()
		{
			return ((::Class_2_FB653C35CA6282A8*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELTASKROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELTASKROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELTASKROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELTASKROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICALBATTLELEVELTASKROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
