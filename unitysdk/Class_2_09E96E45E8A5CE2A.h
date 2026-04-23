#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_3.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_BD800F5B29A08E1F;
namespace RPG::GameCore { class CheckTargetDistanceAxis; }

#define CLASS_2_09E96E45E8A5CE2A_METHOD_2_4B1627D78D57FD39_OFFSET UNITYSDK_OFFSET(0x9A43270)
#define CLASS_2_09E96E45E8A5CE2A_METHOD_2_E2C273CA106EBD0B_OFFSET UNITYSDK_OFFSET(0x9A43220)
#define CLASS_2_09E96E45E8A5CE2A__CTOR_OFFSET UNITYSDK_OFFSET(0x9A43210)

inline static constexpr unsigned int Class_2_09E96E45E8A5CE2A_TypeDefinitionIndex = 50152;

class Class_2_09E96E45E8A5CE2A : public ::Class_1_F9FBCC956DFCF137_3
{
public:
	::RPG::GameCore::CheckTargetDistanceAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckTargetDistanceAxis* a1, ::Class_1_BD800F5B29A08E1F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckTargetDistanceAxis*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_09E96E45E8A5CE2A__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_E2C273CA106EBD0B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09E96E45E8A5CE2A_METHOD_2_E2C273CA106EBD0B_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_4B1627D78D57FD39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09E96E45E8A5CE2A_METHOD_2_4B1627D78D57FD39_OFFSET))(this);
	}
};
