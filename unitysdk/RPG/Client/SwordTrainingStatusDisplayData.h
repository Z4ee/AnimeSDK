#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingConditionDisplayData.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingConditionType.h"

namespace RPG::GameCore { class SwordTrainingStatusRow; }

#define RPG_CLIENT_SWORDTRAININGSTATUSDISPLAYDATA_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xC9AF8E0)
#define RPG_CLIENT_SWORDTRAININGSTATUSDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC99A470)
#define RPG_CLIENT_SWORDTRAININGSTATUSDISPLAYDATA___IFIXBASEPROXY_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xC9AF950)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingStatusDisplayData_TypeDefinitionIndex = 57917;

	class SwordTrainingStatusDisplayData : public ::RPG::Client::SwordTrainingConditionDisplayData
	{
	public:
		::RPG::GameCore::SwordTrainingStatusRow* StatusRow; // 0x18
		::System::UInt32 StatusValue; // 0x20

		::System::Void _ctor(::RPG::GameCore::SwordTrainingConditionType a1, ::System::UInt32 a2, ::RPG::GameCore::SwordTrainingStatusRow* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingConditionType, ::System::UInt32, ::RPG::GameCore::SwordTrainingStatusRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTATUSDISPLAYDATA__CTOR_OFFSET))(this, a1, a2, a3, a4);
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
