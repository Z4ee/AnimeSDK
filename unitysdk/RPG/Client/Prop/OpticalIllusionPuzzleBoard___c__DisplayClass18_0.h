#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCDataRow; }

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAE63130)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPLAYCLASS18_0___CREATECONTROLENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xAE75C10)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleBoard___c__DisplayClass18_0_TypeDefinitionIndex = 72206;

	class OpticalIllusionPuzzleBoard___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::NPCDataRow* npcRow; // 0x10
		::RPG::Client::MapNpcDef* npcDef; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void __CreateControlEntity_b__0(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPLAYCLASS18_0___CREATECONTROLENTITY_B__0_OFFSET))(this, pEntity);
		}
	};
}
