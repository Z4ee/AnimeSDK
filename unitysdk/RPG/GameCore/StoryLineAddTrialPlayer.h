#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STORYLINEADDTRIALPLAYER_METHOD_3_C8DC5D48FCBCE998_OFFSET UNITYSDK_OFFSET(0x18EA5B70)
#define RPG_GAMECORE_STORYLINEADDTRIALPLAYER_METHOD_3_CEDA54AF7BF67298_OFFSET UNITYSDK_OFFSET(0x18EA5C00)
#define RPG_GAMECORE_STORYLINEADDTRIALPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA5BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryLineAddTrialPlayer_TypeDefinitionIndex = 20516;

	class StoryLineAddTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEADDTRIALPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C8DC5D48FCBCE998(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StoryLineAddTrialPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryLineAddTrialPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEADDTRIALPLAYER_METHOD_3_C8DC5D48FCBCE998_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CEDA54AF7BF67298(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StoryLineAddTrialPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryLineAddTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEADDTRIALPLAYER_METHOD_3_CEDA54AF7BF67298_OFFSET))(a1, a2);
		}
	};
}
