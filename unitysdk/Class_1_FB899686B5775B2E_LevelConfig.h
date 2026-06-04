#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_1_FB899686B5775B2E_LEVELCONFIG_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x143C5350)
#define CLASS_1_FB899686B5775B2E_LEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x7BBE0)

inline static constexpr unsigned int Class_1_FB899686B5775B2E_LevelConfig_TypeDefinitionIndex = 48439;

struct alignas(4) Class_1_FB899686B5775B2E_LevelConfig
{
	::System::Int32 level1TriggerInterval; // 0x10
	::System::Int32 level2TriggerInterval; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_LEVELCONFIG__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_1_FB899686B5775B2E_LevelConfig get_Default()
	{
		return ((::Class_1_FB899686B5775B2E_LevelConfig(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB899686B5775B2E_LEVELCONFIG_GET_DEFAULT_OFFSET))();
	}
};
