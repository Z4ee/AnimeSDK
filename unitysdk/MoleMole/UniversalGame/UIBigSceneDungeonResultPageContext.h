#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_CE3642B3ECB61D27_40;
namespace System { class Action; }

#define MOLEMOLE_UNIVERSALGAME_UIBIGSCENEDUNGEONRESULTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA54F0)

namespace MoleMole::UniversalGame
{
	inline static constexpr unsigned int UIBigSceneDungeonResultPageContext_TypeDefinitionIndex = 45384;

	class UIBigSceneDungeonResultPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_CE3642B3ECB61D27_40* Notify; // 0x28
		::System::Action* OnExitBattleAction; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNIVERSALGAME_UIBIGSCENEDUNGEONRESULTPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
