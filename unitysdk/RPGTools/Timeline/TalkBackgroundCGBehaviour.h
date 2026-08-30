#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPG::GameCore { class TalkBackgroundCG; }

#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGBEHAVIOUR_METHOD_3_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0xE8F2990)
#define RPGTOOLS_TIMELINE_TALKBACKGROUNDCGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE8F2A00)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkBackgroundCGBehaviour_TypeDefinitionIndex = 48828;

	class TalkBackgroundCGBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPG::GameCore::TalkBackgroundCG* config; // 0x20
		::System::Boolean Show; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_229CEF33F0AF9039()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBACKGROUNDCGBEHAVIOUR_METHOD_3_229CEF33F0AF9039_OFFSET))(this);
		}
	};
}
