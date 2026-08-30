#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/EquipUiData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int EquipSelectUiData_TypeDefinitionIndex = 75122;

	struct alignas(8) EquipSelectUiData
	{
		::System::Nullable_1<::RPG::Client::ActivityIdleLive::EquipUiData> CurEquipUiData; // 0x10
		::RPG::Client::ActivityIdleLive::EquipUiData NewEquipUiData; // 0x88
		::System::UInt32 ConfirmedPendingEquipNum; // 0xF8
		::System::UInt32 TotalPendingEquipNum; // 0xFC
		::System::Collections::Generic::List_1<::System::Int32>* CompareResults; // 0x100
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal PowerDiff; // 0x108
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal PendingPower; // 0x120
		::System::String* PendingPowerStr; // 0x138
		::System::Action* onKeep; // 0x140
		::System::Action* onReplace; // 0x148
		::System::String* NewGotStateStr; // 0x150
		::RPG::Client::TextID Title; // 0x158
		::RPG::Client::TextID OverrideConfirmBtnTitle; // 0x168
	};
}
