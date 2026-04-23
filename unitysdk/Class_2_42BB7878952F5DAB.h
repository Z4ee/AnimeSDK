#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_75C90E178B164D38.h"

namespace RPG::GameCore { class FiveDimBakedLevelConfig; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }

#define CLASS_2_42BB7878952F5DAB_CLEAR_OFFSET UNITYSDK_OFFSET(0xA553340)
#define CLASS_2_42BB7878952F5DAB_GET_BAKEDLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xA5533C0)
#define CLASS_2_42BB7878952F5DAB_GET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0xA553400)
#define CLASS_2_42BB7878952F5DAB_GET_LEVELVARBINDINGMAP_OFFSET UNITYSDK_OFFSET(0xA5533E0)
#define CLASS_2_42BB7878952F5DAB_SET_BAKEDLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xA5533D0)
#define CLASS_2_42BB7878952F5DAB_SET_CONTAINERINFO_OFFSET UNITYSDK_OFFSET(0xA553410)
#define CLASS_2_42BB7878952F5DAB_SET_LEVELVARBINDINGMAP_OFFSET UNITYSDK_OFFSET(0xA5533F0)
#define CLASS_2_42BB7878952F5DAB__CTOR_OFFSET UNITYSDK_OFFSET(0xA553420)
#define CLASS_2_42BB7878952F5DAB___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA553430)

inline static constexpr unsigned int Class_2_42BB7878952F5DAB_TypeDefinitionIndex = 55697;

class Class_2_42BB7878952F5DAB : public ::Class_1_75C90E178B164D38
{
public:
	::RPG::GameCore::LevelLittleGameInfo* _ContainerInfo_k__BackingField; // 0x28
	::RPG::GameCore::FiveDimBakedLevelConfig* _BakedLevelConfig_k__BackingField; // 0x30
	::RPG::GameCore::LittleGameLevelVarBindingMap* _LevelVarBindingMap_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42BB7878952F5DAB__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42BB7878952F5DAB_CLEAR_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimBakedLevelConfig* get_BakedLevelConfig()
	{
		return ((::RPG::GameCore::FiveDimBakedLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42BB7878952F5DAB_GET_BAKEDLEVELCONFIG_OFFSET))(this);
	}

	::System::Void set_BakedLevelConfig(::RPG::GameCore::FiveDimBakedLevelConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimBakedLevelConfig*))((::PBYTE)hIl2Cpp + CLASS_2_42BB7878952F5DAB_SET_BAKEDLEVELCONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::LittleGameLevelVarBindingMap* get_LevelVarBindingMap()
	{
		return ((::RPG::GameCore::LittleGameLevelVarBindingMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42BB7878952F5DAB_GET_LEVELVARBINDINGMAP_OFFSET))(this);
	}

	::System::Void set_LevelVarBindingMap(::RPG::GameCore::LittleGameLevelVarBindingMap* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVarBindingMap*))((::PBYTE)hIl2Cpp + CLASS_2_42BB7878952F5DAB_SET_LEVELVARBINDINGMAP_OFFSET))(this, value);
	}

	::RPG::GameCore::LevelLittleGameInfo* get_ContainerInfo()
	{
		return ((::RPG::GameCore::LevelLittleGameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42BB7878952F5DAB_GET_CONTAINERINFO_OFFSET))(this);
	}

	::System::Void set_ContainerInfo(::RPG::GameCore::LevelLittleGameInfo* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_2_42BB7878952F5DAB_SET_CONTAINERINFO_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_42BB7878952F5DAB___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
