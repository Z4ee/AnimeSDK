#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_AE02BC8285203464_10;
namespace System { class Action; }

#define MOLEMOLE_SUMMERTIDETREASURERESULTDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x190B9160)

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasureResultDialogContext_TypeDefinitionIndex = 68469;

	class SummerTideTreasureResultDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_AE02BC8285203464_10* DungeonDoneNotify; // 0x28
		::System::Action* OnExitBattleAction; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURERESULTDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
