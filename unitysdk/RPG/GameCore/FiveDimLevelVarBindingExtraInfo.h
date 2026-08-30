#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVarBindingExtraInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMLEVELVARBINDINGEXTRAINFO_METHOD_3_04A8A7469D7CEAAF_OFFSET UNITYSDK_OFFSET(0x1D867BA0)
#define RPG_GAMECORE_FIVEDIMLEVELVARBINDINGEXTRAINFO_METHOD_3_3AEA9B4E821CDA9C_OFFSET UNITYSDK_OFFSET(0x1D867BE0)
#define RPG_GAMECORE_FIVEDIMLEVELVARBINDINGEXTRAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D867BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLevelVarBindingExtraInfo_TypeDefinitionIndex = 18299;

	class FiveDimLevelVarBindingExtraInfo : public ::RPG::GameCore::LittleGameLevelVarBindingExtraInfo
	{
	public:
		::System::Boolean ResetOnExit; // 0x10
		::System::UInt32 PuzzleID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELVARBINDINGEXTRAINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_04A8A7469D7CEAAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLevelVarBindingExtraInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLevelVarBindingExtraInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELVARBINDINGEXTRAINFO_METHOD_3_04A8A7469D7CEAAF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3AEA9B4E821CDA9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLevelVarBindingExtraInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLevelVarBindingExtraInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEVELVARBINDINGEXTRAINFO_METHOD_3_3AEA9B4E821CDA9C_OFFSET))(a1, a2);
		}
	};
}
