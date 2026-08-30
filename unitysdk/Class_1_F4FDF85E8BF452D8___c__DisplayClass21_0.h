#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore::Match3 { class MatchThree1v1AIPriorityRetainMap; }

#define CLASS_1_F4FDF85E8BF452D8___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C768B00)
#define CLASS_1_F4FDF85E8BF452D8___C__DISPLAYCLASS21_0___GETPRIORITYRETAINCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0x1C769530)

inline static constexpr unsigned int Class_1_F4FDF85E8BF452D8___c__DisplayClass21_0_TypeDefinitionIndex = 41424;

class Class_1_F4FDF85E8BF452D8___c__DisplayClass21_0 : public ::System::Object
{
public:
	::System::Int32 priority; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetPriorityRetainConfig_b__0(::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainMap* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainMap*))((::PBYTE)hIl2Cpp + CLASS_1_F4FDF85E8BF452D8___C__DISPLAYCLASS21_0___GETPRIORITYRETAINCONFIG_B__0_OFFSET))(this, a1);
	}
};
