#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTARTWINDOWSTAGEACTION_METHOD_3_140D2BFCF0530F0E_OFFSET UNITYSDK_OFFSET(0x1720E1C0)
#define RPG_GAMECORE_FIVEDIMSTARTWINDOWSTAGEACTION_METHOD_3_5AA39CCF585AA36D_OFFSET UNITYSDK_OFFSET(0x1720E230)
#define RPG_GAMECORE_FIVEDIMSTARTWINDOWSTAGEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1720E210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartWindowStageAction_TypeDefinitionIndex = 17184;

	class FiveDimStartWindowStageAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 WindowControllerEntityID; // 0x10
		::System::UInt32 PuzzleID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTWINDOWSTAGEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_140D2BFCF0530F0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartWindowStageAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartWindowStageAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTWINDOWSTAGEACTION_METHOD_3_140D2BFCF0530F0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5AA39CCF585AA36D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStartWindowStageAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStartWindowStageAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTWINDOWSTAGEACTION_METHOD_3_5AA39CCF585AA36D_OFFSET))(a1, a2);
		}
	};
}
