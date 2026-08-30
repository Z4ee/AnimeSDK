#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class BlusherData; }

#define RPGTOOLS_TIMELINE_EMOFACEBLUSHERTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B574670)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmoFaceBlusherTimelineBehaviour_TypeDefinitionIndex = 48578;

	class EmoFaceBlusherTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::BlusherData* BlusherData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOFACEBLUSHERTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
