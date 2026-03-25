#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class GridIndex; }

#define RPG_CLIENT_CHENLINGBATTLE_ENTITYMOVEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x93396B0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int EntityMoveInfo_TypeDefinitionIndex = 62039;

	class EntityMoveInfo : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::GridIndex* Target; // 0x10
		::RPG::Client::ChenLingBattle::GridIndex* Source; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ENTITYMOVEINFO__CTOR_OFFSET))(this);
		}
	};
}
