#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleImmuneAttackBack; }

#define CLASS_2_EB1E99A9B0813826_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x1C96FB00)
#define CLASS_2_EB1E99A9B0813826__CTOR_OFFSET UNITYSDK_OFFSET(0x1C96FAF0)

inline static constexpr unsigned int Class_2_EB1E99A9B0813826_TypeDefinitionIndex = 43132;

class Class_2_EB1E99A9B0813826 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleImmuneAttackBack* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleImmuneAttackBack* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleImmuneAttackBack*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_EB1E99A9B0813826__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB1E99A9B0813826_METHOD_2_E5695720AB0F6E98_OFFSET))(this);
	}
};
