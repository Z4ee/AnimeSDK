#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STORYLINEADDTRIALPLAYER_METHOD_3_5275FAE1B3B7255C_OFFSET UNITYSDK_OFFSET(0x1B0C7EC0)
#define RPG_GAMECORE_STORYLINEADDTRIALPLAYER_METHOD_3_CEDA54AF7BF67298_OFFSET UNITYSDK_OFFSET(0x1B0C7F10)
#define RPG_GAMECORE_STORYLINEADDTRIALPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C7F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryLineAddTrialPlayer_TypeDefinitionIndex = 20867;

	class StoryLineAddTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEADDTRIALPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5275FAE1B3B7255C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StoryLineAddTrialPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryLineAddTrialPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEADDTRIALPLAYER_METHOD_3_5275FAE1B3B7255C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CEDA54AF7BF67298(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StoryLineAddTrialPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryLineAddTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEADDTRIALPLAYER_METHOD_3_CEDA54AF7BF67298_OFFSET))(a1, a2);
		}
	};
}
