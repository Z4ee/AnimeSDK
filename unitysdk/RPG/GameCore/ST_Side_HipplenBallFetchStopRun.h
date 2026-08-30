#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_HIPPLENBALLFETCHSTOPRUN_METHOD_4_5C14FE3AC74F1762_OFFSET UNITYSDK_OFFSET(0x1DB42650)
#define RPG_GAMECORE_ST_SIDE_HIPPLENBALLFETCHSTOPRUN_METHOD_4_A28897986FFC44E9_OFFSET UNITYSDK_OFFSET(0x1DB42690)
#define RPG_GAMECORE_ST_SIDE_HIPPLENBALLFETCHSTOPRUN__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB42680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_HipplenBallFetchStopRun_TypeDefinitionIndex = 21065;

	class ST_Side_HipplenBallFetchStopRun : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLENBALLFETCHSTOPRUN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5C14FE3AC74F1762(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_HipplenBallFetchStopRun*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_HipplenBallFetchStopRun*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLENBALLFETCHSTOPRUN_METHOD_4_5C14FE3AC74F1762_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A28897986FFC44E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_HipplenBallFetchStopRun* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_HipplenBallFetchStopRun*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLENBALLFETCHSTOPRUN_METHOD_4_A28897986FFC44E9_OFFSET))(a1, a2);
		}
	};
}
