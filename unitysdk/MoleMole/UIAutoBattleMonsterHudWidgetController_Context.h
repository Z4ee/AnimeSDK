#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_2CC23FE9C9AEC1B7.h"

class Class_2_21B962BB0A8CF0AA;
namespace UnityEngine { class Canvas; }

#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16011B90)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleMonsterHudWidgetController_Context_TypeDefinitionIndex = 79243;

	class UIAutoBattleMonsterHudWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_21B962BB0A8CF0AA* slot; // 0x28
		::Struct_2_2CC23FE9C9AEC1B7 hudData; // 0x30
		::UnityEngine::Canvas* root; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
