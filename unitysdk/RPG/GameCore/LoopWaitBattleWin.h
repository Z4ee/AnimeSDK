#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITBATTLEWIN_METHOD_3_57154503742D0EBA_OFFSET UNITYSDK_OFFSET(0x18A7E780)
#define RPG_GAMECORE_LOOPWAITBATTLEWIN_METHOD_3_BED34B97789DE23A_OFFSET UNITYSDK_OFFSET(0x18A7E6F0)
#define RPG_GAMECORE_LOOPWAITBATTLEWIN__CTOR_OFFSET UNITYSDK_OFFSET(0x18A7E750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitBattleWin_TypeDefinitionIndex = 20150;

	class LoopWaitBattleWin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITBATTLEWIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BED34B97789DE23A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitBattleWin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitBattleWin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITBATTLEWIN_METHOD_3_BED34B97789DE23A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_57154503742D0EBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitBattleWin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitBattleWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITBATTLEWIN_METHOD_3_57154503742D0EBA_OFFSET))(a1, a2);
		}
	};
}
