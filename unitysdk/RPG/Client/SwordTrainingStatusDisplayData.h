#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingConditionDisplayData.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingConditionType.h"

namespace RPG::GameCore { class SwordTrainingStatusRow; }

#define RPG_CLIENT_SWORDTRAININGSTATUSDISPLAYDATA_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xA525CC0)
#define RPG_CLIENT_SWORDTRAININGSTATUSDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA510960)
#define RPG_CLIENT_SWORDTRAININGSTATUSDISPLAYDATA___IFIXBASEPROXY_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xA525D20)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingStatusDisplayData_TypeDefinitionIndex = 50268;

	class SwordTrainingStatusDisplayData : public ::RPG::Client::SwordTrainingConditionDisplayData
	{
	public:
		::RPG::GameCore::SwordTrainingStatusRow* StatusRow; // 0x18
		::System::UInt32 StatusValue; // 0x20

		::System::Void _ctor(::RPG::GameCore::SwordTrainingConditionType conditionType, ::System::UInt32 targetNum, ::RPG::GameCore::SwordTrainingStatusRow* statusRow, ::System::UInt32 statusValue)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingConditionType, ::System::UInt32, ::RPG::GameCore::SwordTrainingStatusRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDISPLAYDATA__CTOR_OFFSET))(this, conditionType, targetNum, statusRow, statusValue);
		}

		::RPG::Client::TextID GetDisplayName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDISPLAYDATA_GETDISPLAYNAME_OFFSET))(this);
		}

		::RPG::Client::TextID __iFixBaseProxy_GetDisplayName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDISPLAYDATA___IFIXBASEPROXY_GETDISPLAYNAME_OFFSET))(this);
		}
	};
}
