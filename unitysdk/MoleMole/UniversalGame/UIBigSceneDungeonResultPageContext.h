#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_EEEA5D633F6A23D6_23;
namespace System { class Action; }

#define MOLEMOLE_UNIVERSALGAME_UIBIGSCENEDUNGEONRESULTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12E834B0)

namespace MoleMole::UniversalGame
{
	inline static constexpr unsigned int UIBigSceneDungeonResultPageContext_TypeDefinitionIndex = 47796;

	class UIBigSceneDungeonResultPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnExitBattleAction; // 0x28
		::Class_3_EEEA5D633F6A23D6_23* Notify; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNIVERSALGAME_UIBIGSCENEDUNGEONRESULTPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
