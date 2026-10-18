#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_160;
class Class_1_52E21E813AA435A9;

#define CLASS_1_B2447A5CC3B0423D___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53F6A0)
#define CLASS_1_B2447A5CC3B0423D___C__DISPLAYCLASS1_0__GETUNLOCKEDTALENTPATH_B__0_OFFSET UNITYSDK_OFFSET(0x1C53F6B0)

inline static constexpr unsigned int Class_1_B2447A5CC3B0423D___c__DisplayClass1_0_TypeDefinitionIndex = 41906;

class Class_1_B2447A5CC3B0423D___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_160* queryMissionService; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2447A5CC3B0423D___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetUnlockedTalentPath_b__0(::Class_1_52E21E813AA435A9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_52E21E813AA435A9*))((::PBYTE)hIl2Cpp + CLASS_1_B2447A5CC3B0423D___C__DISPLAYCLASS1_0__GETUNLOCKEDTALENTPATH_B__0_OFFSET))(this, a1);
	}
};
