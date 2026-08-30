#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingFallingLandingQteJudgeResult.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0C15422AD41E3637_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1629F420)
#define CLASS_1_0C15422AD41E3637_GET_PRESSSTATEDELAYSECONDS_OFFSET UNITYSDK_OFFSET(0x1629F440)
#define CLASS_1_0C15422AD41E3637_METHOD_1_70F893E7EF68AD8E_OFFSET UNITYSDK_OFFSET(0x1629F3B0)
#define CLASS_1_0C15422AD41E3637_METHOD_1_999B8B439422C7E7_OFFSET UNITYSDK_OFFSET(0x1629F1A0)
#define CLASS_1_0C15422AD41E3637_METHOD_1_A3C110D24483923C_OFFSET UNITYSDK_OFFSET(0x1629F330)
#define CLASS_1_0C15422AD41E3637_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1629F2D0)
#define CLASS_1_0C15422AD41E3637_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1629F430)
#define CLASS_1_0C15422AD41E3637_SET_PRESSSTATEDELAYSECONDS_OFFSET UNITYSDK_OFFSET(0x1629F450)
#define CLASS_1_0C15422AD41E3637__CTOR_OFFSET UNITYSDK_OFFSET(0x1629F460)

inline static constexpr unsigned int Class_1_0C15422AD41E3637_TypeDefinitionIndex = 80549;

class Class_1_0C15422AD41E3637 : public ::System::Object
{
public:
	::System::Single _PressStateDelaySeconds_k__BackingField; // 0x10
	::System::Single FEIHGBCIGLC; // 0x14
	::System::Single KMHCAIPONMO; // 0x18
	::System::Boolean _IsActive_k__BackingField; // 0x1C
	::System::Single APNFJECJODF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C15422AD41E3637__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_999B8B439422C7E7(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0C15422AD41E3637_METHOD_1_999B8B439422C7E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C15422AD41E3637_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::B51Racing::B51RacingFallingLandingQteJudgeResult Method_1_A3C110D24483923C(::System::Single a1)
	{
		return ((::RPG::Client::B51Racing::B51RacingFallingLandingQteJudgeResult(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0C15422AD41E3637_METHOD_1_A3C110D24483923C_OFFSET))(this, a1);
	}

	::RPG::Client::B51Racing::B51RacingFallingLandingQteJudgeResult Method_1_70F893E7EF68AD8E()
	{
		return ((::RPG::Client::B51Racing::B51RacingFallingLandingQteJudgeResult(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C15422AD41E3637_METHOD_1_70F893E7EF68AD8E_OFFSET))(this);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C15422AD41E3637_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0C15422AD41E3637_SET_ISACTIVE_OFFSET))(this, a1);
	}

	::System::Single get_PressStateDelaySeconds()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C15422AD41E3637_GET_PRESSSTATEDELAYSECONDS_OFFSET))(this);
	}

	::System::Void set_PressStateDelaySeconds(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0C15422AD41E3637_SET_PRESSSTATEDELAYSECONDS_OFFSET))(this, a1);
	}
};
