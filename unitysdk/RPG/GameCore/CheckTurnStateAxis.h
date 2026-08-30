#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TurnState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHECKTURNSTATEAXIS_METHOD_3_DD60ED7B49BA3A19_OFFSET UNITYSDK_OFFSET(0x1CFA26A0)
#define RPG_GAMECORE_CHECKTURNSTATEAXIS_METHOD_3_F155B90BFF3C189E_OFFSET UNITYSDK_OFFSET(0x1CFA2660)
#define RPG_GAMECORE_CHECKTURNSTATEAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA2690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckTurnStateAxis_TypeDefinitionIndex = 15337;

	class CheckTurnStateAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::RPG::GameCore::TurnState TargetTurnState; // 0x10
		::RPG::GameCore::FixPoint CheckScore; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKTURNSTATEAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F155B90BFF3C189E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckTurnStateAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckTurnStateAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKTURNSTATEAXIS_METHOD_3_F155B90BFF3C189E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD60ED7B49BA3A19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckTurnStateAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckTurnStateAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKTURNSTATEAXIS_METHOD_3_DD60ED7B49BA3A19_OFFSET))(a1, a2);
		}
	};
}
