#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::TrainParty { class TrainPartyPassengerSkillInfo; }
namespace RPG::GameCore { class TrainPartySkillEffectRow; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_PREVIEWSKILLEFFECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x82E370)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingPreviewInfo_PreviewSkillEffectInfo_TypeDefinitionIndex = 74235;

	struct alignas(8) TrainPartyMeetingPreviewInfo_PreviewSkillEffectInfo
	{
		::RPG::GameCore::TrainPartySkillEffectRow* EffectRow; // 0x10
		::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo* BelongSkillInfo; // 0x18
		::System::Int32 SkillIndex; // 0x20

		::System::Void _ctor(::RPG::GameCore::TrainPartySkillEffectRow* a1, ::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartySkillEffectRow*, ::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_PREVIEWSKILLEFFECTINFO__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
