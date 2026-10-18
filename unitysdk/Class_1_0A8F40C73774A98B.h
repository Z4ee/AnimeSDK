#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_97E659ED8D5D259C_23;
class Class_1_D17272E82AE804C2_205;
class Class_2_A48F3719AA1CF200_46;
class Class_2_A78FC80A78B3367C_1;
class Class_2_D9FEBC6B8E1603F4;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfBoss; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfMemory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfStory; }

#define CLASS_1_0A8F40C73774A98B_METHOD_1_5D3A5FC3C34A17EA_OFFSET UNITYSDK_OFFSET(0x15EE7F30)
#define CLASS_1_0A8F40C73774A98B_METHOD_1_CD01C237BF729C91_OFFSET UNITYSDK_OFFSET(0x15EE8060)
#define CLASS_1_0A8F40C73774A98B_METHOD_1_F4BE6D5734C40BED_OFFSET UNITYSDK_OFFSET(0x15EE7FD0)
#define CLASS_1_0A8F40C73774A98B_METHOD_1_F98F711EA73EC7B6_OFFSET UNITYSDK_OFFSET(0x15EE7DC0)

inline static constexpr unsigned int Class_1_0A8F40C73774A98B_TypeDefinitionIndex = 81464;

class Class_1_0A8F40C73774A98B : public ::System::Object
{
public:
	static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* Method_1_F98F711EA73EC7B6(::Class_1_97E659ED8D5D259C_23* a1, ::Class_1_D17272E82AE804C2_205* a2)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::Class_1_97E659ED8D5D259C_23*, ::Class_1_D17272E82AE804C2_205*))((::PBYTE)hIl2Cpp + CLASS_1_0A8F40C73774A98B_METHOD_1_F98F711EA73EC7B6_OFFSET))(a1, a2);
	}

	static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfMemory* Method_1_5D3A5FC3C34A17EA(::Class_2_A78FC80A78B3367C_1* a1, ::Class_1_D17272E82AE804C2_205* a2)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfMemory*(*)(::Class_2_A78FC80A78B3367C_1*, ::Class_1_D17272E82AE804C2_205*))((::PBYTE)hIl2Cpp + CLASS_1_0A8F40C73774A98B_METHOD_1_5D3A5FC3C34A17EA_OFFSET))(a1, a2);
	}

	static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfStory* Method_1_F4BE6D5734C40BED(::Class_2_D9FEBC6B8E1603F4* a1, ::Class_1_D17272E82AE804C2_205* a2)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfStory*(*)(::Class_2_D9FEBC6B8E1603F4*, ::Class_1_D17272E82AE804C2_205*))((::PBYTE)hIl2Cpp + CLASS_1_0A8F40C73774A98B_METHOD_1_F4BE6D5734C40BED_OFFSET))(a1, a2);
	}

	static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfBoss* Method_1_CD01C237BF729C91(::Class_2_A48F3719AA1CF200_46* a1, ::Class_1_D17272E82AE804C2_205* a2)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfBoss*(*)(::Class_2_A48F3719AA1CF200_46*, ::Class_1_D17272E82AE804C2_205*))((::PBYTE)hIl2Cpp + CLASS_1_0A8F40C73774A98B_METHOD_1_CD01C237BF729C91_OFFSET))(a1, a2);
	}
};
