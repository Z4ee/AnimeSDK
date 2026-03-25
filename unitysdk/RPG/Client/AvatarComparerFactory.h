#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarComparer; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_AVATARCOMPARERFACTORY_GETDEFAULTWITHCUSTOMHIGHLIGHT_1_OFFSET UNITYSDK_OFFSET(0x910A2D0)
#define RPG_CLIENT_AVATARCOMPARERFACTORY_GETDEFAULTWITHCUSTOMHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x910A110)
#define RPG_CLIENT_AVATARCOMPARERFACTORY_GETDEFAULT_OFFSET UNITYSDK_OFFSET(0x9109FC0)
#define RPG_CLIENT_AVATARCOMPARERFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x910A440)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarComparerFactory_TypeDefinitionIndex = 50982;

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

		static ::RPG::Client::IAvatarComparer* GetDefaultWithCustomHighlight(::RPG::Client::IAvatarComparer* customHighlightComparer)
		{
			return ((::RPG::Client::IAvatarComparer*(*)(::RPG::Client::IAvatarComparer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARERFACTORY_GETDEFAULTWITHCUSTOMHIGHLIGHT_OFFSET))(customHighlightComparer);
		}

		static ::RPG::Client::IAvatarComparer* GetDefaultWithCustomHighlight_1(::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>* customHighlightComparison)
		{
			return ((::RPG::Client::IAvatarComparer*(*)(::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARCOMPARERFACTORY_GETDEFAULTWITHCUSTOMHIGHLIGHT_1_OFFSET))(customHighlightComparison);
		}
	};
}
