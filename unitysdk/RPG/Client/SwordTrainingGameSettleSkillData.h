#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SwordTrainingSkillTypeRow; }
namespace System { class String; }

#define RPG_CLIENT_SWORDTRAININGGAMESETTLESKILLDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1B488F60)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLESKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B489010)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLESKILLDATA__SETSKILLNUM_OFFSET UNITYSDK_OFFSET(0x1B489020)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingGameSettleSkillData_TypeDefinitionIndex = 62045;

	class SwordTrainingGameSettleSkillData : public ::System::Object
	{
	public:
		::System::String* SkillTypePath; // 0x10
		::RPG::Client::TextID SkillTypeName; // 0x18
		::System::UInt32 SkillTypeID; // 0x28
		::System::UInt32 SkillNum; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLESKILLDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingGameSettleSkillData* Create(::RPG::GameCore::SwordTrainingSkillTypeRow* a1)
		{
			return ((::RPG::Client::SwordTrainingGameSettleSkillData*(*)(::RPG::GameCore::SwordTrainingSkillTypeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLESKILLDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _SetSkillNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLESKILLDATA__SETSKILLNUM_OFFSET))(this);
		}
	};
}
