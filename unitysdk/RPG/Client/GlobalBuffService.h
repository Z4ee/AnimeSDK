#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_GLOBALBUFFSERVICE_GETAVATARFORGLOBALBUFFPROVIDER_OFFSET UNITYSDK_OFFSET(0xD116B10)
#define RPG_CLIENT_GLOBALBUFFSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xD117090)

namespace RPG::Client
{
	inline static constexpr unsigned int GlobalBuffService_TypeDefinitionIndex = 62829;

	class GlobalBuffService : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALBUFFSERVICE__CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* GetAvatarForGlobalBuffProvider(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALBUFFSERVICE_GETAVATARFORGLOBALBUFFPROVIDER_OFFSET))(this, a1);
		}
	};
}
