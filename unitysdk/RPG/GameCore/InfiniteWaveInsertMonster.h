#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InfiniteWavePosition.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_INFINITEWAVEINSERTMONSTER_METHOD_3_7DFDC224EF9CC547_OFFSET UNITYSDK_OFFSET(0x18A1CBD0)
#define RPG_GAMECORE_INFINITEWAVEINSERTMONSTER_METHOD_3_C9B2E853D025EAA8_OFFSET UNITYSDK_OFFSET(0x18A1CC50)
#define RPG_GAMECORE_INFINITEWAVEINSERTMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1CC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfiniteWaveInsertMonster_TypeDefinitionIndex = 22226;

	class InfiniteWaveInsertMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MonsterID; // 0x18
		::RPG::GameCore::InfiniteWavePosition InsertPos; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVEINSERTMONSTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7DFDC224EF9CC547(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfiniteWaveInsertMonster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfiniteWaveInsertMonster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVEINSERTMONSTER_METHOD_3_7DFDC224EF9CC547_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C9B2E853D025EAA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InfiniteWaveInsertMonster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InfiniteWaveInsertMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INFINITEWAVEINSERTMONSTER_METHOD_3_C9B2E853D025EAA8_OFFSET))(a1, a2);
		}
	};
}
