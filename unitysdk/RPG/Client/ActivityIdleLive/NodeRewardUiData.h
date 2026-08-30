#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_NODEREWARDUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC5F8640)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int NodeRewardUiData_TypeDefinitionIndex = 75130;

	class NodeRewardUiData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 Num; // 0x18
		::RPG::Client::TextID RewardHintText; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_NODEREWARDUIDATA__CTOR_OFFSET))(this);
		}
	};
}
