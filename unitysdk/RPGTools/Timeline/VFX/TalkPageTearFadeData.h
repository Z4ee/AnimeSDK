#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPGTools::Timeline::VFX { class PageTearFadeConfig; }

#define RPGTOOLS_TIMELINE_VFX_TALKPAGETEARFADEDATA_SETUP_OFFSET UNITYSDK_OFFSET(0x19F5B210)
#define RPGTOOLS_TIMELINE_VFX_TALKPAGETEARFADEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5B270)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int TalkPageTearFadeData_TypeDefinitionIndex = 46888;

	class TalkPageTearFadeData : public ::System::Object
	{
	public:
		::System::Single TearAngle; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_TALKPAGETEARFADEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::RPGTools::Timeline::VFX::PageTearFadeConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFX::PageTearFadeConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_TALKPAGETEARFADEDATA_SETUP_OFFSET))(this, a1);
		}
	};
}
