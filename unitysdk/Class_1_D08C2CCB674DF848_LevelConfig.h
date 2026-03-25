#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_1_D08C2CCB674DF848_LEVELCONFIG_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x8755F00)
#define CLASS_1_D08C2CCB674DF848_LEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x72EF0)

inline static constexpr unsigned int Class_1_D08C2CCB674DF848_LevelConfig_TypeDefinitionIndex = 41849;

struct alignas(4) Class_1_D08C2CCB674DF848_LevelConfig
{
	::System::Int32 level1TriggerInterval; // 0x10
	::System::Int32 level2TriggerInterval; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_LEVELCONFIG__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_1_D08C2CCB674DF848_LevelConfig get_Default()
	{
		return ((::Class_1_D08C2CCB674DF848_LevelConfig(*)())((::PBYTE)hIl2Cpp + CLASS_1_D08C2CCB674DF848_LEVELCONFIG_GET_DEFAULT_OFFSET))();
	}
};
