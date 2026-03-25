#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SwordTrainingSkillTypeRow; }
namespace System { class String; }

#define RPG_CLIENT_SWORDTRAININGGAMESETTLESKILLDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA51AAC0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLESKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA51AB70)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLESKILLDATA__SETSKILLNUM_OFFSET UNITYSDK_OFFSET(0xA51AB80)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingGameSettleSkillData_TypeDefinitionIndex = 50295;

	class SwordTrainingGameSettleSkillData : public ::System::Object
	{
	public:
		::System::String* SkillTypePath; // 0x10
		::System::UInt32 SkillTypeID; // 0x18
		::System::UInt32 SkillNum; // 0x1C
		::RPG::Client::TextID SkillTypeName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLESKILLDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingGameSettleSkillData* Create(::RPG::GameCore::SwordTrainingSkillTypeRow* row)
		{
			return ((::RPG::Client::SwordTrainingGameSettleSkillData*(*)(::RPG::GameCore::SwordTrainingSkillTypeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLESKILLDATA_CREATE_OFFSET))(row);
		}

		::System::Void _SetSkillNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLESKILLDATA__SETSKILLNUM_OFFSET))(this);
		}
	};
}
