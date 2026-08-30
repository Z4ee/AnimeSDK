#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ENTITYFORMATIONSORTDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x39BE970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamFormationComponent_EntityFormationSortData_TypeDefinitionIndex = 57862;

	struct alignas(8) TeamFormationComponent_EntityFormationSortData
	{
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::Boolean Active; // 0x18
		::System::Int32 FormationIndex; // 0x1C
		::System::UInt32 RemoveVersion; // 0x20

		::System::Int32 CompareTo(::RPG::GameCore::TeamFormationComponent_EntityFormationSortData a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TeamFormationComponent_EntityFormationSortData))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ENTITYFORMATIONSORTDATA_COMPARETO_OFFSET))(this, a1);
		}
	};
}
