#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STARTENTERBATTLEPRELOAD_METHOD_3_03A872561A5460F8_OFFSET UNITYSDK_OFFSET(0x1CAF4E80)
#define RPG_GAMECORE_STARTENTERBATTLEPRELOAD_METHOD_3_F181E5B582F8D52B_OFFSET UNITYSDK_OFFSET(0x1CAF4ED0)
#define RPG_GAMECORE_STARTENTERBATTLEPRELOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF4EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartEnterBattlePreload_TypeDefinitionIndex = 23060;

	class StartEnterBattlePreload : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean EnableCustomPreload; // 0x18
		::System::Boolean UnloadNPC; // 0x19
		::System::Boolean UnloadNPCMonster; // 0x1A
		::System::Boolean UnloadProp; // 0x1B
		::System::Boolean GoPoolRelease; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTENTERBATTLEPRELOAD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_03A872561A5460F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartEnterBattlePreload*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartEnterBattlePreload*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTENTERBATTLEPRELOAD_METHOD_3_03A872561A5460F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F181E5B582F8D52B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartEnterBattlePreload* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartEnterBattlePreload*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTENTERBATTLEPRELOAD_METHOD_3_F181E5B582F8D52B_OFFSET))(a1, a2);
		}
	};
}
