#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERACTIONRANDOMCOUNTCONFIG_METHOD_6_545AC452D0A28549_OFFSET UNITYSDK_OFFSET(0x19AF8FE0)
#define RPG_GAMECORE_ROGUEACTTRIGGERACTIONRANDOMCOUNTCONFIG_METHOD_6_BB63F9F0BAEE15E4_OFFSET UNITYSDK_OFFSET(0x19AF9200)
#define RPG_GAMECORE_ROGUEACTTRIGGERACTIONRANDOMCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF9120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerActionRandomCountConfig_TypeDefinitionIndex = 18610;

	class RogueActTriggerActionRandomCountConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERACTIONRANDOMCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_545AC452D0A28549(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerActionRandomCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerActionRandomCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERACTIONRANDOMCOUNTCONFIG_METHOD_6_545AC452D0A28549_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_BB63F9F0BAEE15E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerActionRandomCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerActionRandomCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERACTIONRANDOMCOUNTCONFIG_METHOD_6_BB63F9F0BAEE15E4_OFFSET))(a1, a2);
		}
	};
}
