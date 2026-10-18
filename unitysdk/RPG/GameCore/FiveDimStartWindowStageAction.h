#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTARTWINDOWSTAGEACTION_METHOD_4_40F7E7656C8F1B5F_OFFSET UNITYSDK_OFFSET(0x1D6B1290)
#define RPG_GAMECORE_FIVEDIMSTARTWINDOWSTAGEACTION_METHOD_4_ACB31698E4364E6C_OFFSET UNITYSDK_OFFSET(0x1D6B12D0)
#define RPG_GAMECORE_FIVEDIMSTARTWINDOWSTAGEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B12C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartWindowStageAction_TypeDefinitionIndex = 18722;

	class FiveDimStartWindowStageAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 WindowControllerEntityID; // 0x10
		::System::UInt32 PuzzleID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTWINDOWSTAGEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_40F7E7656C8F1B5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartWindowStageAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartWindowStageAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTWINDOWSTAGEACTION_METHOD_4_40F7E7656C8F1B5F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ACB31698E4364E6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartWindowStageAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartWindowStageAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTWINDOWSTAGEACTION_METHOD_4_ACB31698E4364E6C_OFFSET))(a1, a2);
		}
	};
}
