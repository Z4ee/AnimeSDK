#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class AvatarSkin; }

#define RPG_CLIENT_AVATARSKINEXTENSIONS_CHECKBELONGTOMULTIPATHAVATAR_OFFSET UNITYSDK_OFFSET(0x186707E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarSkinExtensions_TypeDefinitionIndex = 59810;

	class AvatarSkinExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean CheckBelongToMultiPathAvatar(::RPG::AvatarSystem::AvatarSkin* a1)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::AvatarSkin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINEXTENSIONS_CHECKBELONGTOMULTIPATHAVATAR_OFFSET))(a1);
		}
	};
}
