#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMLADDERBAKEDCONFIG_METHOD_2_28A10FDC3FE70DF1_OFFSET UNITYSDK_OFFSET(0x1BA9C850)
#define RPG_GAMECORE_FIVEDIMLADDERBAKEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9CA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLadderBakedConfig_TypeDefinitionIndex = 16003;

	class FiveDimLadderBakedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ClimbSpeed; // 0x10
		::System::Single LadderFlipInitSpeed; // 0x14
		::System::Single LadderFlipTotalDuration; // 0x18
		::System::Single JumpInitSpeed; // 0x1C
		::System::Single JumpCutExemptSpeed; // 0x20
		::System::Single JumpCutMinHeight; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLADDERBAKEDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_28A10FDC3FE70DF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLadderBakedConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLadderBakedConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLADDERBAKEDCONFIG_METHOD_2_28A10FDC3FE70DF1_OFFSET))(a1, a2);
		}
	};
}
