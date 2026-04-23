#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SimpleTalkInfo; }
namespace System { class String; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_MOUTHINFO_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB8EE620)
#define RPGTOOLS_TIMELINE_MOUTHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB8EE660)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MouthInfo_TypeDefinitionIndex = 44968;

	class MouthInfo : public ::System::Object
	{
	public:
		::UnityEngine::Timeline::TimelineClip* TimelineClip; // 0x10
		::RPG::GameCore::SimpleTalkInfo* Config; // 0x18
		::System::Boolean UseDiscussionMouthTalk; // 0x20
		::System::String* UniqueName; // 0x28
		::System::Boolean ShowMouthAssetCheck; // 0x30
		::System::String* VoiceID; // 0x38
		::System::Boolean SupportCN; // 0x40
		::System::Boolean SupportEN; // 0x41
		::System::Boolean SupportJP; // 0x42
		::System::Boolean SupportKR; // 0x43
		::System::Boolean SupportMouth; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOUTHINFO__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MOUTHINFO_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
