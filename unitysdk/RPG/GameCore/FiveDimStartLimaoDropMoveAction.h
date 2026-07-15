#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMSTARTLIMAODROPMOVEACTION_METHOD_3_5C3E5CCB27C88155_OFFSET UNITYSDK_OFFSET(0x1BEB4EF0)
#define RPG_GAMECORE_FIVEDIMSTARTLIMAODROPMOVEACTION_METHOD_3_F40F618C75856C0C_OFFSET UNITYSDK_OFFSET(0x1BEB4F30)
#define RPG_GAMECORE_FIVEDIMSTARTLIMAODROPMOVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB4F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartLimaoDropMoveAction_TypeDefinitionIndex = 17960;

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

		static ::System::Void Method_3_5C3E5CCB27C88155(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTLIMAODROPMOVEACTION_METHOD_3_5C3E5CCB27C88155_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F40F618C75856C0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTLIMAODROPMOVEACTION_METHOD_3_F40F618C75856C0C_OFFSET))(a1, a2);
		}
	};
}
