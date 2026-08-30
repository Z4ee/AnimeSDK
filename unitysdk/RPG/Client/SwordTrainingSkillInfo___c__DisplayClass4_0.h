#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingSkillTypeData; }

#define RPG_CLIENT_SWORDTRAININGSKILLINFO___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE137860)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO___C__DISPLAYCLASS4_0__GETSKILLTYPEDATA_B__0_OFFSET UNITYSDK_OFFSET(0xE139530)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingSkillInfo___c__DisplayClass4_0_TypeDefinitionIndex = 62059;

	class SwordTrainingSkillInfo___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 skillTypeID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSkillTypeData_b__0(::RPG::Client::SwordTrainingSkillTypeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingSkillTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO___C__DISPLAYCLASS4_0__GETSKILLTYPEDATA_B__0_OFFSET))(this, a1);
		}
	};
}
