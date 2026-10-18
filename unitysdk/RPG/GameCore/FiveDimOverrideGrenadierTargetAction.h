#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMOVERRIDEGRENADIERTARGETACTION_METHOD_4_5751488E3B4310C0_OFFSET UNITYSDK_OFFSET(0x1D6CF7D0)
#define RPG_GAMECORE_FIVEDIMOVERRIDEGRENADIERTARGETACTION_METHOD_4_845A3C35FDCA5C55_OFFSET UNITYSDK_OFFSET(0x1D6CF720)
#define RPG_GAMECORE_FIVEDIMOVERRIDEGRENADIERTARGETACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CF7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimOverrideGrenadierTargetAction_TypeDefinitionIndex = 18791;

	class FiveDimOverrideGrenadierTargetAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 OverrideTargetConfigID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMOVERRIDEGRENADIERTARGETACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_845A3C35FDCA5C55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimOverrideGrenadierTargetAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimOverrideGrenadierTargetAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMOVERRIDEGRENADIERTARGETACTION_METHOD_4_845A3C35FDCA5C55_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5751488E3B4310C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimOverrideGrenadierTargetAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimOverrideGrenadierTargetAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMOVERRIDEGRENADIERTARGETACTION_METHOD_4_5751488E3B4310C0_OFFSET))(a1, a2);
		}
	};
}
