#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_589E588DE5457488.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_48AADA497C3F117F_2;

#define CLASS_3_86E0535F5988D909__CTOR_OFFSET UNITYSDK_OFFSET(0xB901210)

inline static constexpr unsigned int Class_3_86E0535F5988D909_TypeDefinitionIndex = 57780;

class Class_3_86E0535F5988D909 : public ::Class_2_589E588DE5457488
{
public:
	::Class_1_48AADA497C3F117F_2* LJLDPJFOKCE; // 0x98
	::RPG::GameCore::FixPoint CCMEMJGPOGE; // 0xA0
	::RPG::GameCore::FixPoint HKLPHLBFGAD; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_86E0535F5988D909__CTOR_OFFSET))(this);
	}
};
