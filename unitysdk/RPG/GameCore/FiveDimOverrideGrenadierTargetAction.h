#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMOVERRIDEGRENADIERTARGETACTION_METHOD_3_1B4339F5E5C4FA75_OFFSET UNITYSDK_OFFSET(0x1D0F70B0)
#define RPG_GAMECORE_FIVEDIMOVERRIDEGRENADIERTARGETACTION_METHOD_3_B3C7826DD5486460_OFFSET UNITYSDK_OFFSET(0x1D0F7000)
#define RPG_GAMECORE_FIVEDIMOVERRIDEGRENADIERTARGETACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F70A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimOverrideGrenadierTargetAction_TypeDefinitionIndex = 18581;

	class FiveDimOverrideGrenadierTargetAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 OverrideTargetConfigID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMOVERRIDEGRENADIERTARGETACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B3C7826DD5486460(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimOverrideGrenadierTargetAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimOverrideGrenadierTargetAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMOVERRIDEGRENADIERTARGETACTION_METHOD_3_B3C7826DD5486460_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B4339F5E5C4FA75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimOverrideGrenadierTargetAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimOverrideGrenadierTargetAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMOVERRIDEGRENADIERTARGETACTION_METHOD_3_1B4339F5E5C4FA75_OFFSET))(a1, a2);
		}
	};
}
