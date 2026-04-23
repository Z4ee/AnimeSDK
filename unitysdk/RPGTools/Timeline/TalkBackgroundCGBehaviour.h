#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPG::GameCore { class TalkBackgroundCG; }

#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGBEHAVIOUR_METHOD_3_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0xB91F8B0)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB91F930)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB91F920)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkBackgroundCGBehaviour_TypeDefinitionIndex = 45097;

	class TalkBackgroundCGBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPG::GameCore::TalkBackgroundCG* config; // 0x20
		::System::Boolean Show; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_51AC7912135C5E23()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGBEHAVIOUR_METHOD_3_51AC7912135C5E23_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}
	};
}
