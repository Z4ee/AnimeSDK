#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIMONSTERFANTASYSTORYINFOPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16DA7BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyStoryInfoPageController_Context_TypeDefinitionIndex = 72772;

	class UIMonsterFantasyStoryInfoPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* EnterBattleCallBack; // 0x28
		::System::Action* BackCallBack; // 0x30
		::System::Int32 LevelId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSTORYINFOPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
