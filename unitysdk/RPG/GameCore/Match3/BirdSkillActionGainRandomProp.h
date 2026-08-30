#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGAINRANDOMPROP_METHOD_5_89BBF369C3E82F1E_OFFSET UNITYSDK_OFFSET(0x1D240030)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGAINRANDOMPROP_METHOD_5_C4AE5193A926C21B_OFFSET UNITYSDK_OFFSET(0x1D23FF70)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGAINRANDOMPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D240020)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BirdSkillActionGainRandomProp_TypeDefinitionIndex = 24650;

	class BirdSkillActionGainRandomProp : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGAINRANDOMPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C4AE5193A926C21B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillActionGainRandomProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillActionGainRandomProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGAINRANDOMPROP_METHOD_5_C4AE5193A926C21B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_89BBF369C3E82F1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillActionGainRandomProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillActionGainRandomProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGAINRANDOMPROP_METHOD_5_89BBF369C3E82F1E_OFFSET))(a1, a2);
		}
	};
}
