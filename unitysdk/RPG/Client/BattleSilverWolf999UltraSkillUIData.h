#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraSkillUIState.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATTLESILVERWOLF999ULTRASKILLUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E7DE10)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleSilverWolf999UltraSkillUIData_TypeDefinitionIndex = 65868;

	class BattleSilverWolf999UltraSkillUIData : public ::System::Object
	{
	public:
		::RPG::GameCore::SilverWolf999UltraSkillUIState State; // 0x10
		::System::Single Ratio; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESILVERWOLF999ULTRASKILLUIDATA__CTOR_OFFSET))(this);
		}
	};
}
