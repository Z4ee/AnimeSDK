#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_EVOLVEBUILDCOLLECTIONMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x962F540)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildCollectionMonster_TypeDefinitionIndex = 51837;

	class EvolveBuildCollectionMonster : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDCOLLECTIONMONSTER__CTOR_OFFSET))(this);
		}
	};
}
