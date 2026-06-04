#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/SummonerEnergyBarType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DotBarTypeConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class NumBarTypeConfig; }
namespace RPG::GameCore { class ProgressBarTypeConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETSUMMONERENERGYBARSTATE_METHOD_3_018161101C05D0B8_OFFSET UNITYSDK_OFFSET(0x19C60780)
#define RPG_GAMECORE_SETSUMMONERENERGYBARSTATE_METHOD_3_1FFFE78EF1780D47_OFFSET UNITYSDK_OFFSET(0x19C60660)
#define RPG_GAMECORE_SETSUMMONERENERGYBARSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C606A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSummonerEnergyBarState_TypeDefinitionIndex = 21493;

	class SetSummonerEnergyBarState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::BoolEx Active; // 0x20
		::RPG::GameCore::SummonerEnergyBarType BarType; // 0x24
		::RPG::GameCore::DynamicFloat* MaxCount; // 0x28
		::RPG::GameCore::DynamicFloat* CurrentCount; // 0x30
		::RPG::GameCore::DotBarTypeConfig* DotBarTypeConfig; // 0x38
		::RPG::GameCore::ProgressBarTypeConfig* ProgressBarTypeConfig; // 0x40
		::RPG::GameCore::NumBarTypeConfig* NumBarTypeConfig; // 0x48
		::System::Boolean SkipInCharmAction; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONERENERGYBARSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1FFFE78EF1780D47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSummonerEnergyBarState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSummonerEnergyBarState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONERENERGYBARSTATE_METHOD_3_1FFFE78EF1780D47_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_018161101C05D0B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSummonerEnergyBarState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSummonerEnergyBarState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONERENERGYBARSTATE_METHOD_3_018161101C05D0B8_OFFSET))(a1, a2);
		}
	};
}
