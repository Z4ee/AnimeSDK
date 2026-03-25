#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_HIPPLENBALLFETCHSTOPRUN_METHOD_4_53A29DF43CAFF863_OFFSET UNITYSDK_OFFSET(0x17698DD0)
#define RPG_GAMECORE_ST_SIDE_HIPPLENBALLFETCHSTOPRUN_METHOD_4_A28897986FFC44E9_OFFSET UNITYSDK_OFFSET(0x1768B5E0)
#define RPG_GAMECORE_ST_SIDE_HIPPLENBALLFETCHSTOPRUN__CTOR_OFFSET UNITYSDK_OFFSET(0x1768B590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_HipplenBallFetchStopRun_TypeDefinitionIndex = 19611;

	class ST_Side_HipplenBallFetchStopRun : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLENBALLFETCHSTOPRUN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_53A29DF43CAFF863(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_HipplenBallFetchStopRun*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_HipplenBallFetchStopRun*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLENBALLFETCHSTOPRUN_METHOD_4_53A29DF43CAFF863_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A28897986FFC44E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_HipplenBallFetchStopRun* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_HipplenBallFetchStopRun*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLENBALLFETCHSTOPRUN_METHOD_4_A28897986FFC44E9_OFFSET))(a1, a2);
		}
	};
}
