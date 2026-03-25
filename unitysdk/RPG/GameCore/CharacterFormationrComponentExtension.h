#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define RPG_GAMECORE_CHARACTERFORMATIONRCOMPONENTEXTENSION_GETFORMATIONENTITY_OFFSET UNITYSDK_OFFSET(0xA898EB0)
#define RPG_GAMECORE_CHARACTERFORMATIONRCOMPONENTEXTENSION_GETFORMATIONWORLDPOS_1_OFFSET UNITYSDK_OFFSET(0xA899050)
#define RPG_GAMECORE_CHARACTERFORMATIONRCOMPONENTEXTENSION_GETFORMATIONWORLDPOS_OFFSET UNITYSDK_OFFSET(0xA898F20)
#define RPG_GAMECORE_CHARACTERFORMATIONRCOMPONENTEXTENSION_GETTARGETSELECTGROUP_OFFSET UNITYSDK_OFFSET(0xA899170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterFormationrComponentExtension_TypeDefinitionIndex = 45819;

	class CharacterFormationrComponentExtension : public ::System::Object
	{
	public:
		static ::RPG::GameCore::GameEntity* GetFormationEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFORMATIONRCOMPONENTEXTENSION_GETFORMATIONENTITY_OFFSET))(entity);
		}

		static ::RPG::MVector3 GetFormationWorldPos(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::MVector3(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFORMATIONRCOMPONENTEXTENSION_GETFORMATIONWORLDPOS_OFFSET))(entity);
		}

		static ::RPG::MVector3 GetFormationWorldPos_1(::RPG::GameCore::TransformComponent* trans)
		{
			return ((::RPG::MVector3(*)(::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFORMATIONRCOMPONENTEXTENSION_GETFORMATIONWORLDPOS_1_OFFSET))(trans);
		}

		static ::System::Int32 GetTargetSelectGroup(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFORMATIONRCOMPONENTEXTENSION_GETTARGETSELECTGROUP_OFFSET))(entity);
		}
	};
}
