#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SimpleTalkTargetBehavior; }

#define RPG_CLIENT_SIMPLETALKTARGETBEHAVIORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB1776A0)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpleTalkTargetBehaviorInfo_TypeDefinitionIndex = 56017;

	class SimpleTalkTargetBehaviorInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::SimpleTalkTargetBehavior* Config; // 0x10
		::System::UInt32 TalkSentenceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETALKTARGETBEHAVIORINFO__CTOR_OFFSET))(this);
		}
	};
}
