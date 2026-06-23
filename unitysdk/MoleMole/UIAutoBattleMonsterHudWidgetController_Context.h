#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_2CC23FE9C9AEC1B7.h"

class Class_2_5AA8899FEE19F18E;
namespace UnityEngine { class Canvas; }

#define MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14BCDA50)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleMonsterHudWidgetController_Context_TypeDefinitionIndex = 83989;

	class UIAutoBattleMonsterHudWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Struct_2_2CC23FE9C9AEC1B7 hudData; // 0x28
		::Class_2_5AA8899FEE19F18E* slot; // 0x48
		::UnityEngine::Canvas* root; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEMONSTERHUDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
