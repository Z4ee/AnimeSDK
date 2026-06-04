#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define RPG_GAMECORE_CHARACTERFORMATIONRCOMPONENTEXTENSION_GETFORMATIONENTITY_OFFSET UNITYSDK_OFFSET(0xCD455E0)
#define RPG_GAMECORE_CHARACTERFORMATIONRCOMPONENTEXTENSION_GETFORMATIONWORLDPOS_1_OFFSET UNITYSDK_OFFSET(0xCD45780)
#define RPG_GAMECORE_CHARACTERFORMATIONRCOMPONENTEXTENSION_GETFORMATIONWORLDPOS_OFFSET UNITYSDK_OFFSET(0xCD45650)
#define RPG_GAMECORE_CHARACTERFORMATIONRCOMPONENTEXTENSION_GETTARGETSELECTGROUP_OFFSET UNITYSDK_OFFSET(0xCD458A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterFormationrComponentExtension_TypeDefinitionIndex = 53175;

	class CharacterFormationrComponentExtension : public ::System::Object
	{
	public:
		static ::RPG::GameCore::GameEntity* GetFormationEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFORMATIONRCOMPONENTEXTENSION_GETFORMATIONENTITY_OFFSET))(a1);
		}

		static ::RPG::MVector3 GetFormationWorldPos(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::MVector3(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFORMATIONRCOMPONENTEXTENSION_GETFORMATIONWORLDPOS_OFFSET))(a1);
		}

		static ::RPG::MVector3 GetFormationWorldPos_1(::RPG::GameCore::TransformComponent* a1)
		{
			return ((::RPG::MVector3(*)(::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFORMATIONRCOMPONENTEXTENSION_GETFORMATIONWORLDPOS_1_OFFSET))(a1);
		}

		static ::System::Int32 GetTargetSelectGroup(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERFORMATIONRCOMPONENTEXTENSION_GETTARGETSELECTGROUP_OFFSET))(a1);
		}
	};
}
