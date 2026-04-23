#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }

#define CLASS_1_75C90E178B164D38_CLEAR_OFFSET UNITYSDK_OFFSET(0x950A790)
#define CLASS_1_75C90E178B164D38_GET_LEVELCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x950A7E0)
#define CLASS_1_75C90E178B164D38_GET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x950A800)
#define CLASS_1_75C90E178B164D38_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x950A820)
#define CLASS_1_75C90E178B164D38_SET_LEVELCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x950A7F0)
#define CLASS_1_75C90E178B164D38_SET_LEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x950A810)
#define CLASS_1_75C90E178B164D38_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x950A830)
#define CLASS_1_75C90E178B164D38__CTOR_OFFSET UNITYSDK_OFFSET(0x950A840)

inline static constexpr unsigned int Class_1_75C90E178B164D38_TypeDefinitionIndex = 55844;

class Class_1_75C90E178B164D38 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x10
	::RPG::GameCore::LittleGameLevelConfig* _LevelConfig_k__BackingField; // 0x18
	::System::String* _LevelConfigPath_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90E178B164D38__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90E178B164D38_CLEAR_OFFSET))(this);
	}

	::System::String* get_LevelConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90E178B164D38_GET_LEVELCONFIGPATH_OFFSET))(this);
	}

	::System::Void set_LevelConfigPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_75C90E178B164D38_SET_LEVELCONFIGPATH_OFFSET))(this, value);
	}

	::RPG::GameCore::LittleGameLevelConfig* get_LevelConfig()
	{
		return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90E178B164D38_GET_LEVELCONFIG_OFFSET))(this);
	}

	::System::Void set_LevelConfig(::RPG::GameCore::LittleGameLevelConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_75C90E178B164D38_SET_LEVELCONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* get_OwnerEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90E178B164D38_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_75C90E178B164D38_SET_OWNERENTITY_OFFSET))(this, value);
	}
};
