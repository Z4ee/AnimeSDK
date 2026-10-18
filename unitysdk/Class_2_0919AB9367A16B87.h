#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleActionAgain; }

#define CLASS_2_0919AB9367A16B87_METHOD_2_14F96CE90F77CBB9_OFFSET UNITYSDK_OFFSET(0x1C90EE10)
#define CLASS_2_0919AB9367A16B87__CTOR_OFFSET UNITYSDK_OFFSET(0x1C90EE00)

inline static constexpr unsigned int Class_2_0919AB9367A16B87_TypeDefinitionIndex = 43099;

class Class_2_0919AB9367A16B87 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleActionAgain* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleActionAgain* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleActionAgain*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_0919AB9367A16B87__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_14F96CE90F77CBB9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0919AB9367A16B87_METHOD_2_14F96CE90F77CBB9_OFFSET))(this);
	}
};
