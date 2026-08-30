#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class IEntity; }

#define RPG_CLIENT_CHENLINGBATTLE_ENTITYLEVELCHANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCB07810)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int EntityLevelChangeData_TypeDefinitionIndex = 75764;

	class EntityLevelChangeData : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::IEntity* Entity; // 0x10
		::System::Int32 DeltaValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENTITYLEVELCHANGEDATA__CTOR_OFFSET))(this);
		}
	};
}
