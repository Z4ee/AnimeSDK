#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EntitySpawnConfig; }

#define RPG_GAMECORE_LEVELENTITYSPAWNCONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x18A41680)
#define RPG_GAMECORE_LEVELENTITYSPAWNCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A41450)
#define RPG_GAMECORE_LEVELENTITYSPAWNCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A41670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntitySpawnConfig_TypeDefinitionIndex = 16366;

	class LevelEntitySpawnConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean OverrideSpawn; // 0x10
		::RPG::GameCore::EntitySpawnConfig* EntitySpawnConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPAWNCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelEntitySpawnConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelEntitySpawnConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPAWNCONFIG_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelEntitySpawnConfig* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelEntitySpawnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYSPAWNCONFIG_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
