#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETRESETPOINTACTION_METHOD_4_1357D2D5E3440CD6_OFFSET UNITYSDK_OFFSET(0x1D6AD690)
#define RPG_GAMECORE_FIVEDIMSETRESETPOINTACTION_METHOD_4_C98F7F2DD236CC6D_OFFSET UNITYSDK_OFFSET(0x1D6AD650)
#define RPG_GAMECORE_FIVEDIMSETRESETPOINTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AD680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetResetPointAction_TypeDefinitionIndex = 18650;

	class FiveDimSetResetPointAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::UInt32 EntityID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRESETPOINTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C98F7F2DD236CC6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetResetPointAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetResetPointAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRESETPOINTACTION_METHOD_4_C98F7F2DD236CC6D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1357D2D5E3440CD6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetResetPointAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetResetPointAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRESETPOINTACTION_METHOD_4_1357D2D5E3440CD6_OFFSET))(a1, a2);
		}
	};
}
