#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE_METHOD_3_2DE57E93A86B4575_OFFSET UNITYSDK_OFFSET(0x1CFC42A0)
#define RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE_METHOD_3_B7BFCAE89522B638_OFFSET UNITYSDK_OFFSET(0x1CFC4370)
#define RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC4360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEnterTutorialBattle_TypeDefinitionIndex = 21494;

	class ChimeraDuelEnterTutorialBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2DE57E93A86B4575(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEnterTutorialBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEnterTutorialBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE_METHOD_3_2DE57E93A86B4575_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B7BFCAE89522B638(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEnterTutorialBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEnterTutorialBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE_METHOD_3_B7BFCAE89522B638_OFFSET))(a1, a2);
		}
	};
}
