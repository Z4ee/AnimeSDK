#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_PROGRESSHINTMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xC9FBB00)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceMazeViewModel_ProgressHintMessage_TypeDefinitionIndex = 80265;

	class ChallengeTierceMazeViewModel_ProgressHintMessage : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_PROGRESSHINTMESSAGE__CTOR_OFFSET))(this);
		}
	};
}
