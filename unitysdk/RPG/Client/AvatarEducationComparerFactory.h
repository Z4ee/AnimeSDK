#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarComparer; }

#define RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY_CREATEFORHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x9D7ACE0)
#define RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x9D7B080)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEducationComparerFactory_TypeDefinitionIndex = 57623;

	class AvatarEducationComparerFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::IAvatarComparer* CreateForHighlight(::RPG::Client::IAvatarComparer* customPreferNewAvatarComparer)
		{
			return ((::RPG::Client::IAvatarComparer*(*)(::RPG::Client::IAvatarComparer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY_CREATEFORHIGHLIGHT_OFFSET))(customPreferNewAvatarComparer);
		}
	};
}
