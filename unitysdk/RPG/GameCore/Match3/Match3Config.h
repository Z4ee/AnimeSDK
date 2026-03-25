#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Match3 { class ChessBoardConfig; }
namespace RPG::GameCore::Match3 { class FightConfig; }
namespace RPG::GameCore::Match3 { class Match3TemplateApplyConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AIConfig; }
namespace RPG::GameCore::Match3 { class MatchThreePropSystemConfig; }
namespace RPG::GameCore::Match3 { class OneOnOneConfig; }
namespace RPG::GameCore::Match3 { class TagBehaviourConfig; }

#define RPG_GAMECORE_MATCH3_MATCH3CONFIG_METHOD_2_1101C9E89E37020B_OFFSET UNITYSDK_OFFSET(0x173A9800)
#define RPG_GAMECORE_MATCH3_MATCH3CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x173A99A0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3Config_TypeDefinitionIndex = 22787;

	class Match3Config : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::Match3::ChessBoardConfig* ChessBoardConfig; // 0x10
		::RPG::GameCore::Match3::FightConfig* FightConfig; // 0x18
		::RPG::GameCore::Match3::Match3TemplateApplyConfig* TemplateApplyConfig; // 0x20
		::RPG::GameCore::Match3::TagBehaviourConfig* TagBehaviorConfig; // 0x28
		::RPG::GameCore::Match3::OneOnOneConfig* OneOnOneConfig; // 0x30
		::RPG::GameCore::Match3::MatchThreePropSystemConfig* PropSystemConfig; // 0x38
		::RPG::GameCore::Match3::MatchThree1v1AIConfig* AI1v1Config; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1101C9E89E37020B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3Config*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3Config*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3CONFIG_METHOD_2_1101C9E89E37020B_OFFSET))(a1, a2);
		}
	};
}
