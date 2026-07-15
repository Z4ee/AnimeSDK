#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x193914B0)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP___C__DISPLAYCLASS3_0__GETTRIALAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0x19391620)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerReturnTrialAvatarGroup___c__DisplayClass3_0_TypeDefinitionIndex = 59141;

	class PlayerReturnTrialAvatarGroup___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTrialAvatar_b__0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP___C__DISPLAYCLASS3_0__GETTRIALAVATAR_B__0_OFFSET))(this, a1);
		}
	};
}
