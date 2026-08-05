#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_355;

#define CLASS_1_0E1DE880793F00EC_CREATEEFFECTEXPRESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0x12849340)
#define CLASS_1_0E1DE880793F00EC__CTOR_OFFSET UNITYSDK_OFFSET(0x128493B0)

inline static constexpr unsigned int Class_1_0E1DE880793F00EC_TypeDefinitionIndex = 60091;

class Class_1_0E1DE880793F00EC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E1DE880793F00EC__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_355* CreateEffectExpressionConfig()
	{
		return ((::Class_0_16E4307DCC419505_355*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E1DE880793F00EC_CREATEEFFECTEXPRESSIONCONFIG_OFFSET))(this);
	}
};
