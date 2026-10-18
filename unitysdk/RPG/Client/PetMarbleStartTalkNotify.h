#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PETMARBLESTARTTALKNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0xDAEC620)

namespace RPG::Client
{
	inline static constexpr unsigned int PetMarbleStartTalkNotify_TypeDefinitionIndex = 65829;

	class PetMarbleStartTalkNotify : public ::System::Object
	{
	public:
		::System::Action* Callback; // 0x10
		::System::UInt32 BondId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLESTARTTALKNOTIFY__CTOR_OFFSET))(this);
		}
	};
}
