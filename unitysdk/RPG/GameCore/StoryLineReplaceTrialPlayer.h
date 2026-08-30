#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STORYLINEREPLACETRIALPLAYER_METHOD_3_202679E5F7870EB9_OFFSET UNITYSDK_OFFSET(0x1CAFFE90)
#define RPG_GAMECORE_STORYLINEREPLACETRIALPLAYER_METHOD_3_C59B12C6BA56C5B5_OFFSET UNITYSDK_OFFSET(0x1CAFFE40)
#define RPG_GAMECORE_STORYLINEREPLACETRIALPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAFFE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryLineReplaceTrialPlayer_TypeDefinitionIndex = 21426;

	class StoryLineReplaceTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEREPLACETRIALPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C59B12C6BA56C5B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StoryLineReplaceTrialPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryLineReplaceTrialPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEREPLACETRIALPLAYER_METHOD_3_C59B12C6BA56C5B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_202679E5F7870EB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StoryLineReplaceTrialPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryLineReplaceTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEREPLACETRIALPLAYER_METHOD_3_202679E5F7870EB9_OFFSET))(a1, a2);
		}
	};
}
