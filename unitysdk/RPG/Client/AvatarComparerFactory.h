#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class IAvatarComparer; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_AVATARCOMPARERFACTORY_GETDEFAULTWITHCUSTOMHIGHLIGHT_1_OFFSET UNITYSDK_OFFSET(0xC800A30)
#define RPG_CLIENT_AVATARCOMPARERFACTORY_GETDEFAULTWITHCUSTOMHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xC8008C0)
#define RPG_CLIENT_AVATARCOMPARERFACTORY_GETDEFAULT_OFFSET UNITYSDK_OFFSET(0xC800770)
#define RPG_CLIENT_AVATARCOMPARERFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xC800BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarComparerFactory_TypeDefinitionIndex = 62875;

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
