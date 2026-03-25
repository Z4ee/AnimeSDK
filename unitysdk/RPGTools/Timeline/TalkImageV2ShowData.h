#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PerformanceBgImagePanelConfig; }
namespace RPGTools::Timeline { class TalkImageV2ShowClip; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWDATA_SETUP_OFFSET UNITYSDK_OFFSET(0xABAD2C0)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xABAD2B0)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWDATA__GETFADESPEED_OFFSET UNITYSDK_OFFSET(0xABAD8F0)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWDATA__GETPANELCONFIG_OFFSET UNITYSDK_OFFSET(0xABAD710)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkImageV2ShowData_TypeDefinitionIndex = 39207;

	class TalkImageV2ShowData : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::String* PanelType; // 0x18
		::System::String* MaterialPath; // 0x20
		::System::UInt32 PanelIndex; // 0x28
		::System::Single FadeSpeed; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWDATA__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::RPGTools::Timeline::TalkImageV2ShowClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::TalkImageV2ShowClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWDATA_SETUP_OFFSET))(this, clip);
		}

		::System::Single _GetFadeSpeed(::RPGTools::Timeline::TalkImageV2ShowClip* clip)
		{
			return ((::System::Single(*)(::PVOID, ::RPGTools::Timeline::TalkImageV2ShowClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWDATA__GETFADESPEED_OFFSET))(this, clip);
		}

		::RPG::GameCore::PerformanceBgImagePanelConfig* _GetPanelConfig(::System::String* panelType)
		{
			return ((::RPG::GameCore::PerformanceBgImagePanelConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWDATA__GETPANELCONFIG_OFFSET))(this, panelType);
		}
	};
}
