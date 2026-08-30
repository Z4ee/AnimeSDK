#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PerformanceBgImagePanelConfig; }
namespace RPGTools::Timeline { class TalkImageV2ShowClip; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWDATA_SETUP_OFFSET UNITYSDK_OFFSET(0xE8F50F0)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE8F50E0)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWDATA__GETFADESPEED_OFFSET UNITYSDK_OFFSET(0xE8F56E0)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWDATA__GETPANELCONFIG_OFFSET UNITYSDK_OFFSET(0xE8F5510)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkImageV2ShowData_TypeDefinitionIndex = 48847;

	class TalkImageV2ShowData : public ::System::Object
	{
	public:
		// static const ::System::Single DefaultAspectRatio; // 0x0
		::System::String* MaterialPath; // 0x10
		::System::String* ImagePath; // 0x18
		::System::String* PanelType; // 0x20
		::System::Boolean IsCustomAspectRatio; // 0x28
		::System::Single FadeSpeed; // 0x2C
		::System::Single CustomAspectRatio; // 0x30
		::System::UInt32 PanelIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWDATA__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::RPGTools::Timeline::TalkImageV2ShowClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::TalkImageV2ShowClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWDATA_SETUP_OFFSET))(this, a1);
		}

		::System::Single _GetFadeSpeed(::RPGTools::Timeline::TalkImageV2ShowClip* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPGTools::Timeline::TalkImageV2ShowClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWDATA__GETFADESPEED_OFFSET))(this, a1);
		}

		::RPG::GameCore::PerformanceBgImagePanelConfig* _GetPanelConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::PerformanceBgImagePanelConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWDATA__GETPANELCONFIG_OFFSET))(this, a1);
		}
	};
}
