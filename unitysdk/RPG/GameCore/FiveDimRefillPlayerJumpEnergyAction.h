#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMREFILLPLAYERJUMPENERGYACTION_METHOD_4_5829623962483376_OFFSET UNITYSDK_OFFSET(0x1D6D7210)
#define RPG_GAMECORE_FIVEDIMREFILLPLAYERJUMPENERGYACTION_METHOD_4_EDCB415E5439BDE7_OFFSET UNITYSDK_OFFSET(0x1D6D7190)
#define RPG_GAMECORE_FIVEDIMREFILLPLAYERJUMPENERGYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D7200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRefillPlayerJumpEnergyAction_TypeDefinitionIndex = 18726;

	class FiveDimRefillPlayerJumpEnergyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREFILLPLAYERJUMPENERGYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EDCB415E5439BDE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREFILLPLAYERJUMPENERGYACTION_METHOD_4_EDCB415E5439BDE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5829623962483376(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREFILLPLAYERJUMPENERGYACTION_METHOD_4_5829623962483376_OFFSET))(a1, a2);
		}
	};
}
