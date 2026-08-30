#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WaveMonsterTiming.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SingleMonsterInfo; }
namespace System { class String; }

#define RPG_GAMECORE_WAVEMONSTER_METHOD_3_1DCB78F664EB377D_OFFSET UNITYSDK_OFFSET(0x1D6B0400)
#define RPG_GAMECORE_WAVEMONSTER_METHOD_3_477B4E46EEFE1F4C_OFFSET UNITYSDK_OFFSET(0x1D6B0300)
#define RPG_GAMECORE_WAVEMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B0390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaveMonster_TypeDefinitionIndex = 23135;

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

		static ::System::Void Method_3_477B4E46EEFE1F4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaveMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaveMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTER_METHOD_3_477B4E46EEFE1F4C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1DCB78F664EB377D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaveMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaveMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTER_METHOD_3_1DCB78F664EB377D_OFFSET))(a1, a2);
		}
	};
}
