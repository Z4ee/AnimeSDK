#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4CD8A1ACD565F336.h"

namespace RPG::GameCore { class FiveDimBakedLevelConfig; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }

#define CLASS_2_EE700CDB1ACF8E3C_CLEAR_OFFSET UNITYSDK_OFFSET(0x12E71C50)
#define CLASS_2_EE700CDB1ACF8E3C_GET_BAKEDLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x12E71CD0)
#define CLASS_2_EE700CDB1ACF8E3C_GET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0x12E71D10)
#define CLASS_2_EE700CDB1ACF8E3C_GET_LEVELVARBINDINGMAP_OFFSET UNITYSDK_OFFSET(0x12E71CF0)
#define CLASS_2_EE700CDB1ACF8E3C_SET_BAKEDLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x12E71CE0)
#define CLASS_2_EE700CDB1ACF8E3C_SET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0x12E71D20)
#define CLASS_2_EE700CDB1ACF8E3C_SET_LEVELVARBINDINGMAP_OFFSET UNITYSDK_OFFSET(0x12E71D00)
#define CLASS_2_EE700CDB1ACF8E3C__CTOR_OFFSET UNITYSDK_OFFSET(0x12E71D30)

inline static constexpr unsigned int Class_2_EE700CDB1ACF8E3C_TypeDefinitionIndex = 60507;

class Class_2_EE700CDB1ACF8E3C : public ::Class_1_4CD8A1ACD565F336
{
public:
	::RPG::GameCore::FiveDimBakedLevelConfig* _BakedLevelConfig_k__BackingField; // 0x28
	::RPG::GameCore::LevelLittleGameInfo* _ContainerInfo_k__BackingField; // 0x30
	::RPG::GameCore::LittleGameLevelVarBindingMap* _LevelVarBindingMap_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE700CDB1ACF8E3C__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE700CDB1ACF8E3C_CLEAR_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimBakedLevelConfig* get_BakedLevelConfig()
	{
		return ((::RPG::GameCore::FiveDimBakedLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE700CDB1ACF8E3C_GET_BAKEDLEVELCONFIG_OFFSET))(this);
	}

	::System::Void set_BakedLevelConfig(::RPG::GameCore::FiveDimBakedLevelConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimBakedLevelConfig*))((::PBYTE)hIl2Cpp + CLASS_2_EE700CDB1ACF8E3C_SET_BAKEDLEVELCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameLevelVarBindingMap* get_LevelVarBindingMap()
	{
		return ((::RPG::GameCore::LittleGameLevelVarBindingMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE700CDB1ACF8E3C_GET_LEVELVARBINDINGMAP_OFFSET))(this);
	}

	::System::Void set_LevelVarBindingMap(::RPG::GameCore::LittleGameLevelVarBindingMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVarBindingMap*))((::PBYTE)hIl2Cpp + CLASS_2_EE700CDB1ACF8E3C_SET_LEVELVARBINDINGMAP_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelLittleGameInfo* get_ContainerInfo()
	{
		return ((::RPG::GameCore::LevelLittleGameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE700CDB1ACF8E3C_GET_CONTAINERINFO_OFFSET))(this);
	}

	::System::Void set_ContainerInfo(::RPG::GameCore::LevelLittleGameInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_2_EE700CDB1ACF8E3C_SET_CONTAINERINFO_OFFSET))(this, a1);
	}
};
