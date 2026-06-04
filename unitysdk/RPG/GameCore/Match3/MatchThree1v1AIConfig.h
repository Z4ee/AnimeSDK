#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Match3 { class MatchThree1v1AILevelConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AIPropPriorityConfig; }
namespace RPG::GameCore::Match3 { class MatchThree1v1AIScoreAspectConfig; }

#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AICONFIG_METHOD_2_2D77AE8DCB298603_OFFSET UNITYSDK_OFFSET(0x198E8E40)
#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x198E9E60)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int MatchThree1v1AIConfig_TypeDefinitionIndex = 23591;

	class MatchThree1v1AIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::MatchThree1v1AILevelConfig*>* LevelConfigs; // 0x10
		::Il2CppArray<::RPG::GameCore::Match3::MatchThree1v1AIScoreAspectConfig*>* AspectConfigs; // 0x18
		::Il2CppArray<::RPG::GameCore::Match3::MatchThree1v1AIPropPriorityConfig*>* PropPriorityConfigs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2D77AE8DCB298603(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::MatchThree1v1AIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::MatchThree1v1AIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AICONFIG_METHOD_2_2D77AE8DCB298603_OFFSET))(a1, a2);
		}
	};
}
