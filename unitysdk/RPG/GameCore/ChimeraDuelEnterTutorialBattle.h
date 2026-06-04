#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE_METHOD_3_2D99BCE3BCA87DAC_OFFSET UNITYSDK_OFFSET(0x1963B880)
#define RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE_METHOD_3_B7BFCAE89522B638_OFFSET UNITYSDK_OFFSET(0x1963B990)
#define RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1963B960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEnterTutorialBattle_TypeDefinitionIndex = 20523;

	class ChimeraDuelEnterTutorialBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2D99BCE3BCA87DAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEnterTutorialBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEnterTutorialBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE_METHOD_3_2D99BCE3BCA87DAC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B7BFCAE89522B638(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEnterTutorialBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEnterTutorialBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE_METHOD_3_B7BFCAE89522B638_OFFSET))(a1, a2);
		}
	};
}
