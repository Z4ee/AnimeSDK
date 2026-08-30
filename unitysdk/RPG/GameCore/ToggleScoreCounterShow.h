#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TOGGLESCORECOUNTERSHOW_METHOD_3_820EB50DA9FF3EE2_OFFSET UNITYSDK_OFFSET(0x1D5D44E0)
#define RPG_GAMECORE_TOGGLESCORECOUNTERSHOW_METHOD_3_C8824E6B52AC6C69_OFFSET UNITYSDK_OFFSET(0x1D5D4520)
#define RPG_GAMECORE_TOGGLESCORECOUNTERSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D4510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToggleScoreCounterShow_TypeDefinitionIndex = 22979;

	class ToggleScoreCounterShow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLESCORECOUNTERSHOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_820EB50DA9FF3EE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleScoreCounterShow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleScoreCounterShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLESCORECOUNTERSHOW_METHOD_3_820EB50DA9FF3EE2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C8824E6B52AC6C69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ToggleScoreCounterShow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ToggleScoreCounterShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLESCORECOUNTERSHOW_METHOD_3_C8824E6B52AC6C69_OFFSET))(a1, a2);
		}
	};
}
