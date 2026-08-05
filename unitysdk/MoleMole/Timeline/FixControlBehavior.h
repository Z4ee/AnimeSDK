#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"

namespace MoleMole::Timeline { class FixParams; }

#define MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x191BDA90)
#define MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x191BDA80)
#define MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x191BD9E0)
#define MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x191BD970)
#define MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x191BDA40)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FixControlBehavior_TypeDefinitionIndex = 79406;

	class FixControlBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::MoleMole::Timeline::FixParams* Params; // 0x18
		::System::Boolean isInit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXCONTROLBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET))(this);
		}
	};
}
