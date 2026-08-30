#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyEventFadeInType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYEVENTFADEINDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE25E5E0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyEventFadeInData_TypeDefinitionIndex = 74219;

	class TrainPartyEventFadeInData : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::Boolean IsReplaceImage; // 0x18
		::RPG::GameCore::TrainPartyEventFadeInType Type; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYEVENTFADEINDATA__CTOR_OFFSET))(this);
		}
	};
}
