#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfBoss; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfMemory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfStory; }

#define CLASS_1_16B02A03131C2AFB_METHOD_1_58DD6ADBBC500C4B_OFFSET UNITYSDK_OFFSET(0x16A00FE0)
#define CLASS_1_16B02A03131C2AFB_METHOD_1_8FBFF7C89BC99A12_OFFSET UNITYSDK_OFFSET(0x16A00E80)
#define CLASS_1_16B02A03131C2AFB_METHOD_1_9A494792ABDCBE2A_OFFSET UNITYSDK_OFFSET(0x16A014D0)
#define CLASS_1_16B02A03131C2AFB_METHOD_1_D6F3EB5312377256_OFFSET UNITYSDK_OFFSET(0x16A012A0)

inline static constexpr unsigned int Class_1_16B02A03131C2AFB_TypeDefinitionIndex = 76506;

class Class_1_16B02A03131C2AFB : public ::System::Object
{
public:
	static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* Method_1_8FBFF7C89BC99A12(::Class_1_06E38C65842C3B24* a1)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::Class_1_06E38C65842C3B24*))((::PBYTE)hIl2Cpp + CLASS_1_16B02A03131C2AFB_METHOD_1_8FBFF7C89BC99A12_OFFSET))(a1);
	}

	static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfMemory* Method_1_58DD6ADBBC500C4B(::Class_1_06E38C65842C3B24* a1)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfMemory*(*)(::Class_1_06E38C65842C3B24*))((::PBYTE)hIl2Cpp + CLASS_1_16B02A03131C2AFB_METHOD_1_58DD6ADBBC500C4B_OFFSET))(a1);
	}

	static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfStory* Method_1_D6F3EB5312377256(::Class_1_06E38C65842C3B24* a1)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfStory*(*)(::Class_1_06E38C65842C3B24*))((::PBYTE)hIl2Cpp + CLASS_1_16B02A03131C2AFB_METHOD_1_D6F3EB5312377256_OFFSET))(a1);
	}

	static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfBoss* Method_1_9A494792ABDCBE2A(::Class_1_06E38C65842C3B24* a1)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfBoss*(*)(::Class_1_06E38C65842C3B24*))((::PBYTE)hIl2Cpp + CLASS_1_16B02A03131C2AFB_METHOD_1_9A494792ABDCBE2A_OFFSET))(a1);
	}
};
