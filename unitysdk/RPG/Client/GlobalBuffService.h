#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }

#define RPG_CLIENT_GLOBALBUFFSERVICE_GETAVATARFORGLOBALBUFFPROVIDER_OFFSET UNITYSDK_OFFSET(0xA42ED10)
#define RPG_CLIENT_GLOBALBUFFSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xA42F230)

namespace RPG::Client
{
	inline static constexpr unsigned int GlobalBuffService_TypeDefinitionIndex = 57845;

	class GlobalBuffService : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALBUFFSERVICE__CTOR_OFFSET))(this);
		}

		::RPG::Client::IAvatarInfoProvider* GetAvatarForGlobalBuffProvider(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALBUFFSERVICE_GETAVATARFORGLOBALBUFFPROVIDER_OFFSET))(this, avatarID);
		}
	};
}
