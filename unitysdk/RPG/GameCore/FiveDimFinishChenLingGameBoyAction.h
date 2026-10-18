#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMFINISHCHENLINGGAMEBOYACTION_METHOD_4_0FA969D2C988739B_OFFSET UNITYSDK_OFFSET(0x1D68FE60)
#define RPG_GAMECORE_FIVEDIMFINISHCHENLINGGAMEBOYACTION_METHOD_4_397913651634167A_OFFSET UNITYSDK_OFFSET(0x1D68FEE0)
#define RPG_GAMECORE_FIVEDIMFINISHCHENLINGGAMEBOYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68FED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFinishChenLingGameBoyAction_TypeDefinitionIndex = 18676;

	class FiveDimFinishChenLingGameBoyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFINISHCHENLINGGAMEBOYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0FA969D2C988739B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFINISHCHENLINGGAMEBOYACTION_METHOD_4_0FA969D2C988739B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_397913651634167A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFINISHCHENLINGGAMEBOYACTION_METHOD_4_397913651634167A_OFFSET))(a1, a2);
		}
	};
}
