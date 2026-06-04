#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STORYLINEDELTRIALPLAYER_METHOD_3_76C9E15816939AB6_OFFSET UNITYSDK_OFFSET(0x19CC2D40)
#define RPG_GAMECORE_STORYLINEDELTRIALPLAYER_METHOD_3_8AD7516548FB60B6_OFFSET UNITYSDK_OFFSET(0x19CC2DD0)
#define RPG_GAMECORE_STORYLINEDELTRIALPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC2DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryLineDelTrialPlayer_TypeDefinitionIndex = 20453;

	class StoryLineDelTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEDELTRIALPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_76C9E15816939AB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StoryLineDelTrialPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryLineDelTrialPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEDELTRIALPLAYER_METHOD_3_76C9E15816939AB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8AD7516548FB60B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StoryLineDelTrialPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryLineDelTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEDELTRIALPLAYER_METHOD_3_8AD7516548FB60B6_OFFSET))(a1, a2);
		}
	};
}
