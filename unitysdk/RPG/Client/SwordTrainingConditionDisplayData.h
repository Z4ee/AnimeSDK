#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingConditionType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_SWORDTRAININGCONDITIONDISPLAYDATA_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xC999C70)
#define RPG_CLIENT_SWORDTRAININGCONDITIONDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC999C60)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingConditionDisplayData_TypeDefinitionIndex = 57916;

	class SwordTrainingConditionDisplayData : public ::System::Object
	{
	public:
		::RPG::GameCore::SwordTrainingConditionType ConditionType; // 0x10
		::System::UInt32 TargetNum; // 0x14

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
