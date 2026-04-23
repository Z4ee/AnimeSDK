#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPGTools::Timeline { class CharacterStopBodyControlData; }

#define RPGTOOLS_TIMELINE_CHARACTERSTOPBODYCONTROLBEHAVIOUR_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xB8AF7F0)
#define RPGTOOLS_TIMELINE_CHARACTERSTOPBODYCONTROLBEHAVIOUR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB8AF9A0)
#define RPGTOOLS_TIMELINE_CHARACTERSTOPBODYCONTROLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8AF990)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStopBodyControlBehaviour_TypeDefinitionIndex = 44697;

	class CharacterStopBodyControlBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterStopBodyControlData* Config; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPBODYCONTROLBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPBODYCONTROLBEHAVIOUR_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPBODYCONTROLBEHAVIOUR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
