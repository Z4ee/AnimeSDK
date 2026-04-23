#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITWAVEBATTLEPERFORMFINISH_METHOD_3_331B102A591E26E7_OFFSET UNITYSDK_OFFSET(0x1910C6B0)
#define RPG_GAMECORE_WAITWAVEBATTLEPERFORMFINISH_METHOD_3_3500EF62E1CBB153_OFFSET UNITYSDK_OFFSET(0x1910C5A0)
#define RPG_GAMECORE_WAITWAVEBATTLEPERFORMFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1910C680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitWaveBattlePerformFinish_TypeDefinitionIndex = 22291;

	class WaitWaveBattlePerformFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITWAVEBATTLEPERFORMFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3500EF62E1CBB153(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitWaveBattlePerformFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitWaveBattlePerformFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITWAVEBATTLEPERFORMFINISH_METHOD_3_3500EF62E1CBB153_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_331B102A591E26E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitWaveBattlePerformFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitWaveBattlePerformFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITWAVEBATTLEPERFORMFINISH_METHOD_3_331B102A591E26E7_OFFSET))(a1, a2);
		}
	};
}
