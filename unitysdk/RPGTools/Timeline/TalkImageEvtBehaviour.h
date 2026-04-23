#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPG::GameCore { class TalkImage; }

#define RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR_METHOD_3_484762C2E531AD16_OFFSET UNITYSDK_OFFSET(0xB921B80)
#define RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB921C00)
#define RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR_METHOD_3_649C3F0ABF636A99_OFFSET UNITYSDK_OFFSET(0xB921960)
#define RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB921BF0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkImageEvtBehaviour_TypeDefinitionIndex = 45111;

	class TalkImageEvtBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPG::GameCore::TalkImage* config; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_649C3F0ABF636A99()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR_METHOD_3_649C3F0ABF636A99_OFFSET))(this);
		}

		::System::Void Method_3_484762C2E531AD16(::RPG::GameCore::TalkImage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TalkImage*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR_METHOD_3_484762C2E531AD16_OFFSET))(this, a1);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}
	};
}
