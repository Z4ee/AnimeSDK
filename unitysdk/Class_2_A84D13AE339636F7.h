#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ACF89FC544029D07.h"

class Class_1_B87B48EBDCE76E87;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionAreaInfo; }

#define CLASS_2_A84D13AE339636F7_METHOD_2_EC28FD7AA4FC3328_OFFSET UNITYSDK_OFFSET(0x163D73E0)
#define CLASS_2_A84D13AE339636F7__CTOR_OFFSET UNITYSDK_OFFSET(0x163D7150)

inline static constexpr unsigned int Class_2_A84D13AE339636F7_TypeDefinitionIndex = 69285;

class Class_2_A84D13AE339636F7 : public ::Class_1_ACF89FC544029D07
{
public:
	::System::Void _ctor(::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo*))((::PBYTE)hIl2Cpp + CLASS_2_A84D13AE339636F7__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_EC28FD7AA4FC3328(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_A84D13AE339636F7_METHOD_2_EC28FD7AA4FC3328_OFFSET))(this, a1);
	}
};
