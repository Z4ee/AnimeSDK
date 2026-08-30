#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITBATTLEWIN_METHOD_3_500D6F18D5E67AFE_OFFSET UNITYSDK_OFFSET(0x1D48ADF0)
#define RPG_GAMECORE_LOOPWAITBATTLEWIN_METHOD_3_57154503742D0EBA_OFFSET UNITYSDK_OFFSET(0x1D48AE40)
#define RPG_GAMECORE_LOOPWAITBATTLEWIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D48AE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitBattleWin_TypeDefinitionIndex = 20931;

	class LoopWaitBattleWin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITBATTLEWIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_500D6F18D5E67AFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitBattleWin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitBattleWin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITBATTLEWIN_METHOD_3_500D6F18D5E67AFE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_57154503742D0EBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitBattleWin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitBattleWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITBATTLEWIN_METHOD_3_57154503742D0EBA_OFFSET))(a1, a2);
		}
	};
}
