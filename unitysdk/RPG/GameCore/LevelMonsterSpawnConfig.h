#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelEntitySpawnConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELMONSTERSPAWNCONFIG_METHOD_3_113ABBB9CD7BFBC4_OFFSET UNITYSDK_OFFSET(0x1733CDD0)
#define RPG_GAMECORE_LEVELMONSTERSPAWNCONFIG_METHOD_3_36102E97BFB94F5F_OFFSET UNITYSDK_OFFSET(0x173348E0)
#define RPG_GAMECORE_LEVELMONSTERSPAWNCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x173348D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelMonsterSpawnConfig_TypeDefinitionIndex = 15841;

	class LevelMonsterSpawnConfig : public ::RPG::GameCore::LevelEntitySpawnConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMONSTERSPAWNCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_113ABBB9CD7BFBC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelMonsterSpawnConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelMonsterSpawnConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMONSTERSPAWNCONFIG_METHOD_3_113ABBB9CD7BFBC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_36102E97BFB94F5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelMonsterSpawnConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelMonsterSpawnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMONSTERSPAWNCONFIG_METHOD_3_36102E97BFB94F5F_OFFSET))(a1, a2);
		}
	};
}
