#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DB4B27FBA0545EF9.h"

namespace MoleMole::Project::Config { class LevelData; }

#define CLASS_2_8852285D598440E1_METHOD_2_1B2F40731D676555_OFFSET UNITYSDK_OFFSET(0x108C97C0)
#define CLASS_2_8852285D598440E1__CTOR_OFFSET UNITYSDK_OFFSET(0x108C97B0)

inline static constexpr unsigned int Class_2_8852285D598440E1_TypeDefinitionIndex = 67439;

class Class_2_8852285D598440E1 : public ::Class_1_DB4B27FBA0545EF9
{
public:
	::MoleMole::Project::Config::LevelData* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8852285D598440E1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1B2F40731D676555(::MoleMole::Project::Config::LevelData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Project::Config::LevelData*))((::PBYTE)hIl2Cpp + CLASS_2_8852285D598440E1_METHOD_2_1B2F40731D676555_OFFSET))(this, a1);
	}
};
