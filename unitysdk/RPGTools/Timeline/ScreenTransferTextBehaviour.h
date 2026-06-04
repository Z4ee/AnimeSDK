#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_SCREENTRANSFERTEXTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD051940)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ScreenTransferTextBehaviour_TypeDefinitionIndex = 45510;

	class ScreenTransferTextBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Double OutStart; // 0x10
		::System::UInt32 SentenceID; // 0x18
		::System::Boolean CanPauseTimeline; // 0x1C
		::System::Boolean NotAuto; // 0x1D
		::System::Boolean PlayVoice; // 0x1E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCREENTRANSFERTEXTBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
