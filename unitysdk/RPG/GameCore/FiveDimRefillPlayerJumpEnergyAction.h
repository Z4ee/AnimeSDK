#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMREFILLPLAYERJUMPENERGYACTION_METHOD_3_6540E5D865568174_OFFSET UNITYSDK_OFFSET(0x17207160)
#define RPG_GAMECORE_FIVEDIMREFILLPLAYERJUMPENERGYACTION_METHOD_3_6BB9855695E7DBB1_OFFSET UNITYSDK_OFFSET(0x17207220)
#define RPG_GAMECORE_FIVEDIMREFILLPLAYERJUMPENERGYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17207200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRefillPlayerJumpEnergyAction_TypeDefinitionIndex = 17188;

	class FiveDimRefillPlayerJumpEnergyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREFILLPLAYERJUMPENERGYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6540E5D865568174(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREFILLPLAYERJUMPENERGYACTION_METHOD_3_6540E5D865568174_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6BB9855695E7DBB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREFILLPLAYERJUMPENERGYACTION_METHOD_3_6BB9855695E7DBB1_OFFSET))(a1, a2);
		}
	};
}
