#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TrainPartyStatType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYSTAT_METHOD_2_B1DE72F973BD387C_OFFSET UNITYSDK_OFFSET(0x1D539A90)
#define RPG_GAMECORE_TRAINPARTYSTAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D539BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyStat_TypeDefinitionIndex = 10615;

	class TrainPartyStat : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TrainPartyStatType StatType; // 0x10
		::System::Int32 UpdateValue; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSTAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B1DE72F973BD387C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyStat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyStat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSTAT_METHOD_2_B1DE72F973BD387C_OFFSET))(a1, a2);
		}
	};
}
