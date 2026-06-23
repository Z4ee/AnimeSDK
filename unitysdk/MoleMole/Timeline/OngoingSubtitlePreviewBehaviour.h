#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWBEHAVIOUR_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x17DF8C70)
#define MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x17DF8C60)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int OngoingSubtitlePreviewBehaviour_TypeDefinitionIndex = 76093;

	class OngoingSubtitlePreviewBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Int32 ongoingGroupId; // 0x10
		::System::Int32 orderId; // 0x14
		::System::Int32 subtitlePos; // 0x18
		::System::Int32 languageType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_2_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWBEHAVIOUR_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
		}
	};
}
