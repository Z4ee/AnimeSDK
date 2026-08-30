#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarComparer; }

#define RPG_CLIENT_ACTIVITYPLAYERRETURNRELICAVATARCOMPARERFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x1B8726E0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNRELICAVATARCOMPARERFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B872820)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPlayerReturnRelicAvatarComparerFactory_TypeDefinitionIndex = 61972;

	class ActivityPlayerReturnRelicAvatarComparerFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNRELICAVATARCOMPARERFACTORY__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::IAvatarComparer* Create()
		{
			return ((::RPG::Client::IAvatarComparer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNRELICAVATARCOMPARERFACTORY_CREATE_OFFSET))();
		}
	};
}
