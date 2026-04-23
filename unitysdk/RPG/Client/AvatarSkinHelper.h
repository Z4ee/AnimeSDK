#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class AvatarSkin; }

#define RPG_CLIENT_AVATARSKINHELPER_GETOWNERAVATARPATHNAME_OFFSET UNITYSDK_OFFSET(0x9DBF080)
#define RPG_CLIENT_AVATARSKINHELPER_GETSKINBYSKINID_OFFSET UNITYSDK_OFFSET(0x9DBEF40)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarSkinHelper_TypeDefinitionIndex = 57788;

	class AvatarSkinHelper : public ::System::Object
	{
	public:
		static ::RPG::AvatarSystem::AvatarSkin* GetSkinBySkinID(::System::UInt32 skinID)
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINHELPER_GETSKINBYSKINID_OFFSET))(skinID);
		}

		static ::RPG::Client::TextID GetOwnerAvatarPathName(::System::UInt32 skinID)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSKINHELPER_GETOWNERAVATARPATHNAME_OFFSET))(skinID);
		}
	};
}
