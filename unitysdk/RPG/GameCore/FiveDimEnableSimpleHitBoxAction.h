#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMENABLESIMPLEHITBOXACTION_METHOD_4_96A20C999B80D06D_OFFSET UNITYSDK_OFFSET(0x1D68D8C0)
#define RPG_GAMECORE_FIVEDIMENABLESIMPLEHITBOXACTION_METHOD_4_B9FF1C5847E66730_OFFSET UNITYSDK_OFFSET(0x1D68D7E0)
#define RPG_GAMECORE_FIVEDIMENABLESIMPLEHITBOXACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68D8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEnableSimpleHitBoxAction_TypeDefinitionIndex = 18789;

	class FiveDimEnableSimpleHitBoxAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLESIMPLEHITBOXACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B9FF1C5847E66730(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnableSimpleHitBoxAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnableSimpleHitBoxAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLESIMPLEHITBOXACTION_METHOD_4_B9FF1C5847E66730_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_96A20C999B80D06D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnableSimpleHitBoxAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnableSimpleHitBoxAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLESIMPLEHITBOXACTION_METHOD_4_96A20C999B80D06D_OFFSET))(a1, a2);
		}
	};
}
