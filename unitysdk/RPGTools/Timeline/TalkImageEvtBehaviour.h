#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPG::GameCore { class TalkImage; }

#define RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR_METHOD_3_69D3760F65546E50_OFFSET UNITYSDK_OFFSET(0x1BF29820)
#define RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR_METHOD_3_6AA4C5D006C4446D_OFFSET UNITYSDK_OFFSET(0x1BF29A80)
#define RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF29AF0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkImageEvtBehaviour_TypeDefinitionIndex = 48842;

	class TalkImageEvtBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPG::GameCore::TalkImage* config; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_69D3760F65546E50()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR_METHOD_3_69D3760F65546E50_OFFSET))(this);
		}

		::System::Void Method_3_6AA4C5D006C4446D(::RPG::GameCore::TalkImage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TalkImage*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEEVTBEHAVIOUR_METHOD_3_6AA4C5D006C4446D_OFFSET))(this, a1);
		}
	};
}
