#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PerformanceBgImagePanelConfig; }
namespace RPGTools::Timeline { class TalkImageV2HideClip; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA_SETUP_OFFSET UNITYSDK_OFFSET(0xE8F4A40)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE8F4A30)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA__GETFADESPEED_OFFSET UNITYSDK_OFFSET(0xE8F4F30)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA__GETPANELCONFIG_OFFSET UNITYSDK_OFFSET(0xE8F4D60)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkImageV2HideData_TypeDefinitionIndex = 48844;

	class TalkImageV2HideData : public ::System::Object
	{
	public:
		::System::String* PanelType; // 0x10
		::System::Single FadeSpeed; // 0x18
		::System::UInt32 PanelIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::RPGTools::Timeline::TalkImageV2HideClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::TalkImageV2HideClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA_SETUP_OFFSET))(this, a1);
		}

		::System::Single _GetFadeSpeed(::RPGTools::Timeline::TalkImageV2HideClip* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPGTools::Timeline::TalkImageV2HideClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA__GETFADESPEED_OFFSET))(this, a1);
		}

		::RPG::GameCore::PerformanceBgImagePanelConfig* _GetPanelConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::PerformanceBgImagePanelConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA__GETPANELCONFIG_OFFSET))(this, a1);
		}
	};
}
