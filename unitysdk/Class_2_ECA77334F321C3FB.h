#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_3.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_BD800F5B29A08E1F;
namespace RPG::GameCore { class CheckTurnStateAxis; }

#define CLASS_2_ECA77334F321C3FB_METHOD_2_4B1627D78D57FD39_OFFSET UNITYSDK_OFFSET(0x128EBAA0)
#define CLASS_2_ECA77334F321C3FB_METHOD_2_770FD2CFDE656E17_OFFSET UNITYSDK_OFFSET(0x128EB9A0)
#define CLASS_2_ECA77334F321C3FB__CTOR_OFFSET UNITYSDK_OFFSET(0x128EB990)

inline static constexpr unsigned int Class_2_ECA77334F321C3FB_TypeDefinitionIndex = 50154;

class Class_2_ECA77334F321C3FB : public ::Class_1_F9FBCC956DFCF137_3
{
public:
	::RPG::GameCore::CheckTurnStateAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckTurnStateAxis* a1, ::Class_1_BD800F5B29A08E1F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckTurnStateAxis*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_ECA77334F321C3FB__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_770FD2CFDE656E17()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECA77334F321C3FB_METHOD_2_770FD2CFDE656E17_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_4B1627D78D57FD39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECA77334F321C3FB_METHOD_2_4B1627D78D57FD39_OFFSET))(this);
	}
};
