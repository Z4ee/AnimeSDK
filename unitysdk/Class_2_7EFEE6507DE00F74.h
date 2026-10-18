#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleOnField; }

#define CLASS_2_7EFEE6507DE00F74_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x1C98CDD0)
#define CLASS_2_7EFEE6507DE00F74__CTOR_OFFSET UNITYSDK_OFFSET(0x1C98CDC0)

inline static constexpr unsigned int Class_2_7EFEE6507DE00F74_TypeDefinitionIndex = 43114;

class Class_2_7EFEE6507DE00F74 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleOnField* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleOnField* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleOnField*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_7EFEE6507DE00F74__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EFEE6507DE00F74_METHOD_2_E5695720AB0F6E98_OFFSET))(this);
	}
};
