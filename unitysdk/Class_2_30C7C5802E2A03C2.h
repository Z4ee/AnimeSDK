#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ACF89FC544029D07.h"

class Class_1_9AAC3BB4FD7CE6FE;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionAreaInfo; }

#define CLASS_2_30C7C5802E2A03C2_METHOD_2_EC28FD7AA4FC3328_OFFSET UNITYSDK_OFFSET(0x12993E40)
#define CLASS_2_30C7C5802E2A03C2__CTOR_OFFSET UNITYSDK_OFFSET(0x12993B90)

inline static constexpr unsigned int Class_2_30C7C5802E2A03C2_TypeDefinitionIndex = 63899;

class Class_2_30C7C5802E2A03C2 : public ::Class_1_ACF89FC544029D07
{
public:
	::System::Void _ctor(::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2IntersectionAreaInfo*))((::PBYTE)hIl2Cpp + CLASS_2_30C7C5802E2A03C2__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_EC28FD7AA4FC3328(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_2_30C7C5802E2A03C2_METHOD_2_EC28FD7AA4FC3328_OFFSET))(this, a1);
	}
};
