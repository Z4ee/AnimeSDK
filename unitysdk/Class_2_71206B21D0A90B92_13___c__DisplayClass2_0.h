#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_71206B21D0A90B92_13;

#define CLASS_2_71206B21D0A90B92_13___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBA7AFA0)
#define CLASS_2_71206B21D0A90B92_13___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xBA7B630)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_13___c__DisplayClass2_0_TypeDefinitionIndex = 53078;

class Class_2_71206B21D0A90B92_13___c__DisplayClass2_0 : public ::System::Object
{
public:
	::Class_2_71206B21D0A90B92_13* __4__this; // 0x10
	::System::UInt32 preMissionID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_13___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET))(this, a1);
	}
};
