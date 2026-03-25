#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_838;
class Class_1_95EEF67A826E14FF;

#define CLASS_2_4144E6E29A80FDF1___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__0_OFFSET UNITYSDK_OFFSET(0xE462A90)
#define CLASS_2_4144E6E29A80FDF1___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__1_OFFSET UNITYSDK_OFFSET(0xE462B40)
#define CLASS_2_4144E6E29A80FDF1___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__2_OFFSET UNITYSDK_OFFSET(0xE462B60)
#define CLASS_2_4144E6E29A80FDF1___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE461920)

inline static constexpr unsigned int Class_2_4144E6E29A80FDF1___c__DisplayClass1_0_TypeDefinitionIndex = 58628;

class Class_2_4144E6E29A80FDF1___c__DisplayClass1_0 : public ::System::Object
{
public:
	::RPG::GameCore::FloatMessageType messageType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4144E6E29A80FDF1___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ClearAllToast_b__0(::Class_0_16E4307DCC419505_838* item)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_838*))((::PBYTE)hIl2Cpp + CLASS_2_4144E6E29A80FDF1___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__0_OFFSET))(this, item);
	}

	::System::Boolean _ClearAllToast_b__1(::Class_1_95EEF67A826E14FF* entry)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_2_4144E6E29A80FDF1___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__1_OFFSET))(this, entry);
	}

	::System::Boolean _ClearAllToast_b__2(::Class_1_95EEF67A826E14FF* entry)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_2_4144E6E29A80FDF1___C__DISPLAYCLASS1_0__CLEARALLTOAST_B__2_OFFSET))(this, entry);
	}
};
