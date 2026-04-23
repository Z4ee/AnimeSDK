#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingConditionType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_SWORDTRAININGCONDITIONDISPLAYDATA_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xB24D2B0)
#define RPG_CLIENT_SWORDTRAININGCONDITIONDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB24D2A0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingConditionDisplayData_TypeDefinitionIndex = 57126;

	class SwordTrainingConditionDisplayData : public ::System::Object
	{
	public:
		::System::UInt32 TargetNum; // 0x10
		::RPG::GameCore::SwordTrainingConditionType ConditionType; // 0x14

		::System::Void _ctor(::RPG::GameCore::SwordTrainingConditionType conditionType, ::System::UInt32 targetNum)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingConditionType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGCONDITIONDISPLAYDATA__CTOR_OFFSET))(this, conditionType, targetNum);
		}

		::RPG::Client::TextID GetDisplayName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGCONDITIONDISPLAYDATA_GETDISPLAYNAME_OFFSET))(this);
		}
	};
}
