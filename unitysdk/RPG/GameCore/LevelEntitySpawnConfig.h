#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EntitySpawnConfig; }

#define RPG_GAMECORE_LEVELENTITYSPAWNCONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x19873350)
#define RPG_GAMECORE_LEVELENTITYSPAWNCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19873120)
#define RPG_GAMECORE_LEVELENTITYSPAWNCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19873340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntitySpawnConfig_TypeDefinitionIndex = 16398;

	class LevelEntitySpawnConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean OverrideSpawn; // 0x10
		::RPG::GameCore::EntitySpawnConfig* EntitySpawnConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPAWNCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelEntitySpawnConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelEntitySpawnConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPAWNCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelEntitySpawnConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelEntitySpawnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPAWNCONFIG_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
