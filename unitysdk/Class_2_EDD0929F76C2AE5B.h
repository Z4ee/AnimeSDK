#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_109.h"

namespace RPG::GameCore { class AdventureHitConfig; }

#define CLASS_2_EDD0929F76C2AE5B__CTOR_OFFSET UNITYSDK_OFFSET(0x12886920)

inline static constexpr unsigned int Class_2_EDD0929F76C2AE5B_TypeDefinitionIndex = 52570;

class Class_2_EDD0929F76C2AE5B : public ::Class_1_43BD383C98B4C0C5_109
{
public:
	::RPG::GameCore::AdventureHitConfig* Field_2_5; // 0x10
	::System::Single Field_2_4; // 0x18
	::System::Single Field_2_2; // 0x1C
	::System::Single Field_2_3; // 0x20
	::System::Single Field_2_1; // 0x24
	::System::Single Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDD0929F76C2AE5B__CTOR_OFFSET))(this);
	}
};
