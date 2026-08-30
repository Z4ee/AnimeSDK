#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYGRIDMOVE_METHOD_3_9774ED64E13A7F81_OFFSET UNITYSDK_OFFSET(0x1D5DDD00)
#define RPG_GAMECORE_TRAINPARTYGRIDMOVE_METHOD_3_A639B1AE5855A204_OFFSET UNITYSDK_OFFSET(0x1D5DDDD0)
#define RPG_GAMECORE_TRAINPARTYGRIDMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DDDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyGridMove_TypeDefinitionIndex = 22114;

	class TrainPartyGridMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGRIDMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9774ED64E13A7F81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyGridMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyGridMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGRIDMOVE_METHOD_3_9774ED64E13A7F81_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A639B1AE5855A204(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyGridMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyGridMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGRIDMOVE_METHOD_3_A639B1AE5855A204_OFFSET))(a1, a2);
		}
	};
}
