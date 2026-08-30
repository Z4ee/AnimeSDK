#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_5.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class CheckTurnStateAxis; }

#define CLASS_2_ECA77334F321C3FB_METHOD_2_770FD2CFDE656E17_OFFSET UNITYSDK_OFFSET(0x1873CBF0)
#define CLASS_2_ECA77334F321C3FB__CTOR_OFFSET UNITYSDK_OFFSET(0x1873CBE0)

inline static constexpr unsigned int Class_2_ECA77334F321C3FB_TypeDefinitionIndex = 54590;

class Class_2_ECA77334F321C3FB : public ::Class_1_F9FBCC956DFCF137_5
{
public:
	::RPG::GameCore::CheckTurnStateAxis* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckTurnStateAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckTurnStateAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_ECA77334F321C3FB__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_770FD2CFDE656E17()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECA77334F321C3FB_METHOD_2_770FD2CFDE656E17_OFFSET))(this);
	}
};
