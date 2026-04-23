#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESETTREASURECHALLENGE_METHOD_3_1BA4639635945A4C_OFFSET UNITYSDK_OFFSET(0x18CABCD0)
#define RPG_GAMECORE_RESETTREASURECHALLENGE_METHOD_3_B226B83761C83CD8_OFFSET UNITYSDK_OFFSET(0x18CABDE0)
#define RPG_GAMECORE_RESETTREASURECHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CABDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetTreasureChallenge_TypeDefinitionIndex = 19427;

	class ResetTreasureChallenge : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTREASURECHALLENGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1BA4639635945A4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetTreasureChallenge*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetTreasureChallenge*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTREASURECHALLENGE_METHOD_3_1BA4639635945A4C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B226B83761C83CD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetTreasureChallenge* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetTreasureChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTREASURECHALLENGE_METHOD_3_B226B83761C83CD8_OFFSET))(a1, a2);
		}
	};
}
