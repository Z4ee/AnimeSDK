#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class AvatarServant; }

#define RPG_CLIENT_AVATARSERVANTEXTENSIONS_GETSERVANTID_OFFSET UNITYSDK_OFFSET(0x9157E60)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarServantExtensions_TypeDefinitionIndex = 50857;

	class AvatarServantExtensions : public ::System::Object
	{
	public:
		static ::System::UInt32 GetServantID(::RPG::AvatarSystem::AvatarServant* servant)
		{
			return ((::System::UInt32(*)(::RPG::AvatarSystem::AvatarServant*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTEXTENSIONS_GETSERVANTID_OFFSET))(servant);
		}
	};
}
