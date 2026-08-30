#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"
#include "unitysdk/System/Object.h"

class Class_1_634284739E90CAFA;

#define CLASS_1_1B85A1A2F31A0618___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x188D5920)
#define CLASS_1_1B85A1A2F31A0618___C__DISPLAYCLASS6_0__REMOVEBUFF_B__0_OFFSET UNITYSDK_OFFSET(0x188D5DA0)

inline static constexpr unsigned int Class_1_1B85A1A2F31A0618___c__DisplayClass6_0_TypeDefinitionIndex = 77333;

class Class_1_1B85A1A2F31A0618___c__DisplayClass6_0 : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingBattleBuffType buffType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B85A1A2F31A0618___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RemoveBuff_b__0(::Class_1_634284739E90CAFA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_634284739E90CAFA*))((::PBYTE)hIl2Cpp + CLASS_1_1B85A1A2F31A0618___C__DISPLAYCLASS6_0__REMOVEBUFF_B__0_OFFSET))(this, a1);
	}
};
