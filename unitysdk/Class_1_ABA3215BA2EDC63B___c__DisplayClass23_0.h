#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ABA3215BA2EDC63B;
namespace RPG::Client { class ChallengePeak; }

#define CLASS_1_ABA3215BA2EDC63B___C__DISPLAYCLASS23_0__CHALLENGENORMAL_B__0_OFFSET UNITYSDK_OFFSET(0xC097E90)
#define CLASS_1_ABA3215BA2EDC63B___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC097E80)

inline static constexpr unsigned int Class_1_ABA3215BA2EDC63B___c__DisplayClass23_0_TypeDefinitionIndex = 63231;

class Class_1_ABA3215BA2EDC63B___c__DisplayClass23_0 : public ::System::Object
{
public:
	::RPG::Client::ChallengePeak* peak; // 0x10
	::Class_1_ABA3215BA2EDC63B* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABA3215BA2EDC63B___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
	}

	::System::Void _ChallengeNormal_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ABA3215BA2EDC63B___C__DISPLAYCLASS23_0__CHALLENGENORMAL_B__0_OFFSET))(this, a1);
	}
};
