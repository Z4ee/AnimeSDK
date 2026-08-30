#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore::Match3 { class MatchThree1v1AILevelConfig; }

#define CLASS_1_F4FDF85E8BF452D8___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54BBE0)
#define CLASS_1_F4FDF85E8BF452D8___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1C553B50)

inline static constexpr unsigned int Class_1_F4FDF85E8BF452D8___c__DisplayClass0_0_TypeDefinitionIndex = 41421;

class Class_1_F4FDF85E8BF452D8___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::UInt32 level; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __ctor_b__0(::RPG::GameCore::Match3::MatchThree1v1AILevelConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::Match3::MatchThree1v1AILevelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET))(this, a1);
	}
};
