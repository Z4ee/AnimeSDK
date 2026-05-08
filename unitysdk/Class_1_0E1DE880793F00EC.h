#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_161;

#define CLASS_1_0E1DE880793F00EC_CREATEEFFECTEXPRESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0xE4D1C90)
#define CLASS_1_0E1DE880793F00EC__CTOR_OFFSET UNITYSDK_OFFSET(0xE4D1D00)

inline static constexpr unsigned int Class_1_0E1DE880793F00EC_TypeDefinitionIndex = 71217;

class Class_1_0E1DE880793F00EC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E1DE880793F00EC__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_161* CreateEffectExpressionConfig()
	{
		return ((::Class_0_16E4307DCC419505_161*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E1DE880793F00EC_CREATEEFFECTEXPRESSIONCONFIG_OFFSET))(this);
	}
};
