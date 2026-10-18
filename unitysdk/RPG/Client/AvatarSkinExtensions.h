#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class AvatarSkin; }

#define RPG_CLIENT_AVATARSKINEXTENSIONS_CHECKBELONGTOMULTIPATHAVATAR_OFFSET UNITYSDK_OFFSET(0xC70B520)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarSkinExtensions_TypeDefinitionIndex = 62574;

	class AvatarSkinExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean CheckBelongToMultiPathAvatar(::RPG::AvatarSystem::AvatarSkin* a1)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::AvatarSkin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINEXTENSIONS_CHECKBELONGTOMULTIPATHAVATAR_OFFSET))(a1);
		}
	};
}
