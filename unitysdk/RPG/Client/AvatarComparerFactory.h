#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class IAvatarComparer; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_AVATARCOMPARERFACTORY_GETDEFAULTWITHCUSTOMHIGHLIGHT_1_OFFSET UNITYSDK_OFFSET(0xC6CDD90)
#define RPG_CLIENT_AVATARCOMPARERFACTORY_GETDEFAULTWITHCUSTOMHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xC6CDC20)
#define RPG_CLIENT_AVATARCOMPARERFACTORY_GETDEFAULT_OFFSET UNITYSDK_OFFSET(0xC6CDAD0)
#define RPG_CLIENT_AVATARCOMPARERFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xC6CDF00)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarComparerFactory_TypeDefinitionIndex = 62808;

	class AvatarComparerFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARERFACTORY__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::IAvatarComparer* GetDefault()
		{
			return ((::RPG::Client::IAvatarComparer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARERFACTORY_GETDEFAULT_OFFSET))();
		}

		static ::RPG::Client::IAvatarComparer* GetDefaultWithCustomHighlight(::RPG::Client::IAvatarComparer* a1)
		{
			return ((::RPG::Client::IAvatarComparer*(*)(::RPG::Client::IAvatarComparer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARERFACTORY_GETDEFAULTWITHCUSTOMHIGHLIGHT_OFFSET))(a1);
		}

		static ::RPG::Client::IAvatarComparer* GetDefaultWithCustomHighlight_1(::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::RPG::Client::IAvatarComparer*(*)(::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARERFACTORY_GETDEFAULTWITHCUSTOMHIGHLIGHT_1_OFFSET))(a1);
		}
	};
}
