#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_3.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_BD800F5B29A08E1F;
namespace RPG::GameCore { class CheckCurrentAIPhaseAxis; }

#define CLASS_2_7E61EDEB571619E9_METHOD_2_4B1627D78D57FD39_OFFSET UNITYSDK_OFFSET(0x9576E70)
#define CLASS_2_7E61EDEB571619E9_METHOD_2_CE2B4CF74BC3468E_OFFSET UNITYSDK_OFFSET(0x9576DA0)
#define CLASS_2_7E61EDEB571619E9__CTOR_OFFSET UNITYSDK_OFFSET(0x9576D90)

inline static constexpr unsigned int Class_2_7E61EDEB571619E9_TypeDefinitionIndex = 50144;

class Class_2_7E61EDEB571619E9 : public ::Class_1_F9FBCC956DFCF137_3
{
public:
	::RPG::GameCore::CheckCurrentAIPhaseAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckCurrentAIPhaseAxis* a1, ::Class_1_BD800F5B29A08E1F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckCurrentAIPhaseAxis*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_7E61EDEB571619E9__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_CE2B4CF74BC3468E()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E61EDEB571619E9_METHOD_2_CE2B4CF74BC3468E_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_4B1627D78D57FD39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E61EDEB571619E9_METHOD_2_4B1627D78D57FD39_OFFSET))(this);
	}
};
