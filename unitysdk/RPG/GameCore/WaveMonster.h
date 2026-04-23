#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WaveMonsterTiming.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SingleMonsterInfo; }
namespace System { class String; }

#define RPG_GAMECORE_WAVEMONSTER_METHOD_3_9ECB7B60956F1A5F_OFFSET UNITYSDK_OFFSET(0x1910CCB0)
#define RPG_GAMECORE_WAVEMONSTER_METHOD_3_A404C235E773EB30_OFFSET UNITYSDK_OFFSET(0x1910CB80)
#define RPG_GAMECORE_WAVEMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1910CC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaveMonster_TypeDefinitionIndex = 22365;

	class WaveMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SingleMonsterInfo*>* MonsterList; // 0x18
		::RPG::GameCore::DynamicFloat* OverrideMonsterLevel; // 0x20
		::System::Int32 LevelWaveIndex; // 0x28
		::System::String* InitAnimStateName; // 0x30
		::System::Boolean WaitDie; // 0x38
		::System::String* TriggerCustomStringOnCreated; // 0x40
		::System::Boolean Hide; // 0x48
		::System::Boolean ForbiddenPassiveSkill; // 0x49
		::RPG::GameCore::WaveMonsterTiming CreateTiming; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A404C235E773EB30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaveMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaveMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTER_METHOD_3_A404C235E773EB30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9ECB7B60956F1A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaveMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaveMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTER_METHOD_3_9ECB7B60956F1A5F_OFFSET))(a1, a2);
		}
	};
}
