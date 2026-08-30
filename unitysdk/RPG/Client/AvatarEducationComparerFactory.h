#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarComparer; }

#define RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY_CREATEFORHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x193BFB10)
#define RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x193BFEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEducationComparerFactory_TypeDefinitionIndex = 62543;

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
