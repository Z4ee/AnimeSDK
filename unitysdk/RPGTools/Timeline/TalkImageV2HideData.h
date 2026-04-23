#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PerformanceBgImagePanelConfig; }
namespace RPGTools::Timeline { class TalkImageV2HideClip; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA_SETUP_OFFSET UNITYSDK_OFFSET(0xB9222D0)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB9222C0)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA__GETFADESPEED_OFFSET UNITYSDK_OFFSET(0xB922840)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA__GETPANELCONFIG_OFFSET UNITYSDK_OFFSET(0xB922660)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkImageV2HideData_TypeDefinitionIndex = 45113;

	class TalkImageV2HideData : public ::System::Object
	{
	public:
		::System::String* PanelType; // 0x10
		::System::UInt32 PanelIndex; // 0x18
		::System::Single FadeSpeed; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::RPGTools::Timeline::TalkImageV2HideClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::TalkImageV2HideClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA_SETUP_OFFSET))(this, clip);
		}

		::System::Single _GetFadeSpeed(::RPGTools::Timeline::TalkImageV2HideClip* clip)
		{
			return ((::System::Single(*)(::PVOID, ::RPGTools::Timeline::TalkImageV2HideClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA__GETFADESPEED_OFFSET))(this, clip);
		}

		::RPG::GameCore::PerformanceBgImagePanelConfig* _GetPanelConfig(::System::String* panelType)
		{
			return ((::RPG::GameCore::PerformanceBgImagePanelConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA__GETPANELCONFIG_OFFSET))(this, panelType);
		}
	};
}
