#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingSkillData; }

#define RPG_CLIENT_SWORDTRAININGSKILLINFO___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B48D160)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO___C__DISPLAYCLASS3_0__GETSKILLDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1B48EF30)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingSkillInfo___c__DisplayClass3_0_TypeDefinitionIndex = 62058;

	class SwordTrainingSkillInfo___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 skillID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSkillData_b__0(::RPG::Client::SwordTrainingSkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO___C__DISPLAYCLASS3_0__GETSKILLDATA_B__0_OFFSET))(this, a1);
		}
	};
}
