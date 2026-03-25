#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::TrainParty { class TrainPartyPassengerSkillInfo; }
namespace RPG::GameCore { class TrainPartySkillEffectRow; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_PREVIEWSKILLEFFECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x25E80)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingPreviewInfo_PreviewSkillEffectInfo_TypeDefinitionIndex = 61116;

	struct alignas(8) TrainPartyMeetingPreviewInfo_PreviewSkillEffectInfo
	{
		::RPG::GameCore::TrainPartySkillEffectRow* EffectRow; // 0x10
		::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo* BelongSkillInfo; // 0x18
		::System::Int32 SkillIndex; // 0x20

		::System::Void _ctor(::RPG::GameCore::TrainPartySkillEffectRow* row, ::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo* skillInfo, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartySkillEffectRow*, ::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_PREVIEWSKILLEFFECTINFO__CTOR_OFFSET))(this, row, skillInfo, index);
		}
	};
}
