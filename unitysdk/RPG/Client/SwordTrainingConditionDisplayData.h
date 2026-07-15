#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingConditionType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_SWORDTRAININGCONDITIONDISPLAYDATA_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x19C67CE0)
#define RPG_CLIENT_SWORDTRAININGCONDITIONDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19C67CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingConditionDisplayData_TypeDefinitionIndex = 59182;

	class SwordTrainingConditionDisplayData : public ::System::Object
	{
	public:
		::System::UInt32 TargetNum; // 0x10
		::RPG::GameCore::SwordTrainingConditionType ConditionType; // 0x14

		::System::Void _ctor(::RPG::GameCore::SwordTrainingConditionType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingConditionType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGCONDITIONDISPLAYDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID GetDisplayName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGCONDITIONDISPLAYDATA_GETDISPLAYNAME_OFFSET))(this);
		}
	};
}
