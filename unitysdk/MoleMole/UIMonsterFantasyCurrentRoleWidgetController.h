#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_2972BB3EB982A53C;
namespace MoleMole { class TurnBattleEntityUnit; }
namespace MoleMole { class UIControlReference; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15292EB0)
#define MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15292F20)
#define MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER_ONUNITTURNSTART_OFFSET UNITYSDK_OFFSET(0x15293750)
#define MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15293190)
#define MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x152938D0)
#define MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15293930)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyCurrentRoleWidgetController_TypeDefinitionIndex = 63116;

	class UIMonsterFantasyCurrentRoleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::UnityEngine::RectTransform* _viewRoot; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_2972BB3EB982A53C* get__viewModel()
		{
			return ((::Class_2_2972BB3EB982A53C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnUnitTurnStart(::MoleMole::TurnBattleEntityUnit* unit)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER_ONUNITTURNSTART_OFFSET))(this, unit);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYCURRENTROLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
