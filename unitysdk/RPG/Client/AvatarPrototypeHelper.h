#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_AVATARPROTOTYPEHELPER_GETMAXEIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0xC83C320)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPrototypeHelper_TypeDefinitionIndex = 62723;

	class AvatarPrototypeHelper : public ::System::Object
	{
	public:
		static ::System::UInt32 GetMaxEidolonLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROTOTYPEHELPER_GETMAXEIDOLONLEVEL_OFFSET))(a1);
		}
	};
}
