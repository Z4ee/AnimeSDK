#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EAudiencePrefabSpecialTag.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_AUDIENCEPREFABSPECIALTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x9D51CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudiencePrefabSpecialTag_TypeDefinitionIndex = 63729;

	class AudiencePrefabSpecialTag : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEPREFABSPECIALTAG__CTOR_OFFSET))(this);
		}
	};
}
