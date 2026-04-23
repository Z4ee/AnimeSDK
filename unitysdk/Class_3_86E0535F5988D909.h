#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_589E588DE5457488.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_48AADA497C3F117F_2;

#define CLASS_3_86E0535F5988D909__CTOR_OFFSET UNITYSDK_OFFSET(0x1296B0C0)

inline static constexpr unsigned int Class_3_86E0535F5988D909_TypeDefinitionIndex = 53125;

class Class_3_86E0535F5988D909 : public ::Class_2_589E588DE5457488
{
public:
	::Class_1_48AADA497C3F117F_2* Field_3_2; // 0x88
	::RPG::GameCore::FixPoint Field_3_0; // 0x90
	::RPG::GameCore::FixPoint Field_3_1; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_86E0535F5988D909__CTOR_OFFSET))(this);
	}
};
