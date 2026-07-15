#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelEntitySpawnConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPROPSPAWNCONFIG_METHOD_3_89CCEF482ABDBF19_OFFSET UNITYSDK_OFFSET(0x1B087350)
#define RPG_GAMECORE_LEVELPROPSPAWNCONFIG_METHOD_3_DF52097FA33DEEA2_OFFSET UNITYSDK_OFFSET(0x1B0876B0)
#define RPG_GAMECORE_LEVELPROPSPAWNCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0876A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPropSpawnConfig_TypeDefinitionIndex = 16570;

	class LevelPropSpawnConfig : public ::RPG::GameCore::LevelEntitySpawnConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPSPAWNCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_89CCEF482ABDBF19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPropSpawnConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPropSpawnConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPSPAWNCONFIG_METHOD_3_89CCEF482ABDBF19_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DF52097FA33DEEA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPropSpawnConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPropSpawnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPSPAWNCONFIG_METHOD_3_DF52097FA33DEEA2_OFFSET))(a1, a2);
		}
	};
}
