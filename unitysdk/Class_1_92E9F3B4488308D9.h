#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_134;

#define CLASS_1_92E9F3B4488308D9_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C544B20)
#define CLASS_1_92E9F3B4488308D9_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C544B10)
#define CLASS_1_92E9F3B4488308D9__CTOR_OFFSET UNITYSDK_OFFSET(0x1C544B30)

inline static constexpr unsigned int Class_1_92E9F3B4488308D9_TypeDefinitionIndex = 41866;

class Class_1_92E9F3B4488308D9 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_134* _Config_k__BackingField; // 0x10
	::System::UInt32 _Identifier_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::Class_0_16E4307DCC419505_134* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + CLASS_1_92E9F3B4488308D9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_Identifier()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92E9F3B4488308D9_GET_IDENTIFIER_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_134* get_Config()
	{
		return ((::Class_0_16E4307DCC419505_134*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92E9F3B4488308D9_GET_CONFIG_OFFSET))(this);
	}
};
