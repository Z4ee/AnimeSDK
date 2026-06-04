#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarComparer; }

#define RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY_CREATEFORHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xB35F3F0)
#define RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xB35F7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEducationComparerFactory_TypeDefinitionIndex = 58435;

	class AvatarEducationComparerFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::IAvatarComparer* CreateForHighlight(::RPG::Client::IAvatarComparer* a1)
		{
			return ((::RPG::Client::IAvatarComparer*(*)(::RPG::Client::IAvatarComparer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY_CREATEFORHIGHLIGHT_OFFSET))(a1);
		}
	};
}
