#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_DISCUSSION_STANDSLOTUSAGEINFO_METHOD_1_42B060478E2DDADB_OFFSET UNITYSDK_OFFSET(0xE8DC0C0)
#define RPGTOOLS_TIMELINE_DISCUSSION_STANDSLOTUSAGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE8DC200)

namespace RPGTools::Timeline::Discussion
{
	inline static constexpr unsigned int StandSlotUsageInfo_TypeDefinitionIndex = 48781;

	class StandSlotUsageInfo : public ::System::Object
	{
	public:
		::System::Int32 SlotIndex; // 0x10
		::System::String* SlotKey; // 0x18
		::System::String* DisplayName; // 0x20
		::System::String* Side; // 0x28
		::System::Int32 SideIndex; // 0x30
		::System::String* CharacterUniqueName; // 0x38
		::System::String* AnchorName; // 0x40
		::UnityEngine::Vector3 StandardLocalPosition; // 0x48
		::System::Single StandardLocalForward; // 0x54
		::System::String* Motion; // 0x58
		::UnityEngine::Vector3 CurrentLocalPosition; // 0x60
		::System::Single CurrentLocalForward; // 0x6C
		::System::Single PositionDelta; // 0x70
		::System::Single ForwardDelta; // 0x74
		::System::Boolean IsVariant; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_STANDSLOTUSAGEINFO__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::Discussion::StandSlotUsageInfo* Method_1_42B060478E2DDADB()
		{
			return ((::RPGTools::Timeline::Discussion::StandSlotUsageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_STANDSLOTUSAGEINFO_METHOD_1_42B060478E2DDADB_OFFSET))(this);
		}
	};
}
