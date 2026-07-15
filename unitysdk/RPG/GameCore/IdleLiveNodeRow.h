#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVENODEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B697860)
#define RPG_GAMECORE_IDLELIVENODEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B697EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveNodeRow_TypeDefinitionIndex = 11283;

	class IdleLiveNodeRow : public ::System::Object
	{
	public:
		::System::String* BGMState; // 0x10
		::Il2CppArray<::System::UInt32>* SubNodeList; // 0x18
		::Il2CppArray<::System::UInt32>* PossibleEventIDList; // 0x20
		::RPG::GameCore::FixPoint TimeLimitRankA; // 0x28
		::RPG::GameCore::FixPoint TimeLimitRankS; // 0x30
		::System::UInt32 TicketPerHour; // 0x38
		::RPG::GameCore::IdleLiveNodeType Type; // 0x3C
		::System::UInt32 ChatPhase; // 0x40
		::System::UInt32 ChestLevel; // 0x44
		::System::UInt32 ChapterIndex; // 0x48
		::System::UInt32 CrystalPerHour; // 0x4C
		::System::UInt32 Index; // 0x50
		::System::UInt32 BossID; // 0x54
		::System::Boolean CanTriggerAmphoreusBuff; // 0x58
		::System::Boolean IsAutoNextNode; // 0x59
		::System::UInt32 EmojiPhaseID; // 0x5C
		::System::UInt32 ChestPerHour; // 0x60
		::System::UInt32 LiveRoomExpGainOnFinished; // 0x64
		::System::UInt32 RewardID; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVENODEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveNodeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveNodeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVENODEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
