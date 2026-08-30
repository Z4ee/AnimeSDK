#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VISITORBEHAVIORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D69B9E0)
#define RPG_GAMECORE_VISITORBEHAVIORCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69BD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VisitorBehaviorConfigRow_TypeDefinitionIndex = 15196;

	class VisitorBehaviorConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 AnchorID; // 0x10
		::System::UInt32 NPCID; // 0x14
		::System::Single NPCRotationYInfo; // 0x18
		::System::UInt32 PerformanceID; // 0x1C
		::System::UInt32 NpcBubbleTalkSentenceID; // 0x20
		::System::UInt32 DefaultPerformanceID; // 0x24
		::System::UInt32 BehaviorID; // 0x28
		::System::UInt32 VisitorID; // 0x2C
		::System::UInt32 RewardID; // 0x30
		::System::UInt32 NPCGroupID; // 0x34
		::System::UInt32 DefaultIdleFreeStyleMotionID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISITORBEHAVIORCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VisitorBehaviorConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VisitorBehaviorConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISITORBEHAVIORCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
