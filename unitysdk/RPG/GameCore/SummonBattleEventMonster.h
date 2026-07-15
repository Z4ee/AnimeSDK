#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SummonMonsterData; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SUMMONBATTLEEVENTMONSTER_METHOD_3_9589811D6C577C4E_OFFSET UNITYSDK_OFFSET(0x1B42DB00)
#define RPG_GAMECORE_SUMMONBATTLEEVENTMONSTER_METHOD_3_BB42FE607BF62C67_OFFSET UNITYSDK_OFFSET(0x1B42DA20)
#define RPG_GAMECORE_SUMMONBATTLEEVENTMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B42DAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonBattleEventMonster_TypeDefinitionIndex = 21839;

	class SummonBattleEventMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SummonMonsterData* MonsterData; // 0x18
		::RPG::GameCore::VCameraConfig* CameraConfig; // 0x20
		::RPG::GameCore::DynamicFloat* DelayRatio; // 0x28
		::System::Boolean InheritSummonerDelay; // 0x30
		::System::String* AnchorName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONBATTLEEVENTMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BB42FE607BF62C67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonBattleEventMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonBattleEventMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONBATTLEEVENTMONSTER_METHOD_3_BB42FE607BF62C67_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9589811D6C577C4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonBattleEventMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonBattleEventMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONBATTLEEVENTMONSTER_METHOD_3_9589811D6C577C4E_OFFSET))(a1, a2);
		}
	};
}
