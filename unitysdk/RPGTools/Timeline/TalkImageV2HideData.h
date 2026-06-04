#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PerformanceBgImagePanelConfig; }
namespace RPGTools::Timeline { class TalkImageV2HideClip; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA_SETUP_OFFSET UNITYSDK_OFFSET(0xD061FB0)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD061FA0)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA__GETFADESPEED_OFFSET UNITYSDK_OFFSET(0xD0624B0)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEDATA__GETPANELCONFIG_OFFSET UNITYSDK_OFFSET(0xD0622E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkImageV2HideData_TypeDefinitionIndex = 45661;

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
