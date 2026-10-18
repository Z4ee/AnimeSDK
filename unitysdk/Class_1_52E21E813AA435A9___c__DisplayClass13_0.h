#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_59F064CC78086962;

#define CLASS_1_52E21E813AA435A9___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C57DBE0)
#define CLASS_1_52E21E813AA435A9___C__DISPLAYCLASS13_0__GETTALENTPOINT_B__0_OFFSET UNITYSDK_OFFSET(0x1C57DBF0)

inline static constexpr unsigned int Class_1_52E21E813AA435A9___c__DisplayClass13_0_TypeDefinitionIndex = 41876;

class Class_1_52E21E813AA435A9___c__DisplayClass13_0 : public ::System::Object
{
public:
	::System::UInt32 identifier; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52E21E813AA435A9___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetTalentPoint_b__0(::Class_1_59F064CC78086962* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_59F064CC78086962*))((::PBYTE)hIl2Cpp + CLASS_1_52E21E813AA435A9___C__DISPLAYCLASS13_0__GETTALENTPOINT_B__0_OFFSET))(this, a1);
	}
};
