#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMSTARTLIMAODROPMOVEACTION_METHOD_4_15A916A474165C9B_OFFSET UNITYSDK_OFFSET(0x1D6B0C20)
#define RPG_GAMECORE_FIVEDIMSTARTLIMAODROPMOVEACTION_METHOD_4_48206085BA7FC23E_OFFSET UNITYSDK_OFFSET(0x1D6B0BE0)
#define RPG_GAMECORE_FIVEDIMSTARTLIMAODROPMOVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B0C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartLimaoDropMoveAction_TypeDefinitionIndex = 18690;

	class FiveDimStartLimaoDropMoveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Single Gravity; // 0x10
		::System::Single Radius; // 0x14
		::System::Single Speed; // 0x18
		::System::Single MaxDropDistance; // 0x1C
		::RPG::GameCore::LittleGameEvent* OnDropEvent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTLIMAODROPMOVEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_48206085BA7FC23E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTLIMAODROPMOVEACTION_METHOD_4_48206085BA7FC23E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_15A916A474165C9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTLIMAODROPMOVEACTION_METHOD_4_15A916A474165C9B_OFFSET))(a1, a2);
		}
	};
}
