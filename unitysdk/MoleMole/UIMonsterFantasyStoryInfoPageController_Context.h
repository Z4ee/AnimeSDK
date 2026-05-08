#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIMONSTERFANTASYSTORYINFOPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15106D20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyStoryInfoPageController_Context_TypeDefinitionIndex = 65555;

	class UIMonsterFantasyStoryInfoPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* BackCallBack; // 0x28
		::System::Action* EnterBattleCallBack; // 0x30
		::System::Int32 LevelId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSTORYINFOPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
