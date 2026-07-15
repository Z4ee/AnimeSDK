#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TEAMGETTRIALAVATARPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1855A8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamGetTrialAvatarParam_TypeDefinitionIndex = 65113;

	class TeamGetTrialAvatarParam : public ::System::Object
	{
	public:
		::System::Boolean IsJoinLineup; // 0x10
		::System::UInt32 AvatarID; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMGETTRIALAVATARPARAM__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
