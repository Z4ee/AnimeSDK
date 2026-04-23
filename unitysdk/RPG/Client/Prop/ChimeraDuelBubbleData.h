#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTalkType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelTalkData; }

#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xADBD1D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelBubbleData_TypeDefinitionIndex = 71775;

	class ChimeraDuelBubbleData : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelTalkData* TalkData; // 0x10
		::RPG::GameCore::ChimeraDuelTeamType TeamType; // 0x18
		::System::Single Duration; // 0x1C
		::System::Int32 UniqueID; // 0x20
		::System::Boolean IsEvilTalk; // 0x24
		::System::Boolean IsFollowTimeScale; // 0x25
		::RPG::GameCore::ChimeraDuelTalkType TalkType; // 0x28
		::System::UInt32 ConfigID; // 0x2C

		::System::Void _ctor(::RPG::Client::ChimeraDuelTalkData* talkData, ::System::UInt32 configID, ::System::Int32 uniqueID, ::System::Single duration, ::RPG::GameCore::ChimeraDuelTeamType teamType, ::System::Boolean isEvilTalk, ::System::Boolean isFollowTimeScale)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelTalkData*, ::System::UInt32, ::System::Int32, ::System::Single, ::RPG::GameCore::ChimeraDuelTeamType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEDATA__CTOR_OFFSET))(this, talkData, configID, uniqueID, duration, teamType, isEvilTalk, isFollowTimeScale);
		}
	};
}
