#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ButtonQTETaskEntryBase.h"

class Class_1_D47998EF092D4845;

#define MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYTIMESENTRY_CREATEREALTIMEQTETASK_OFFSET UNITYSDK_OFFSET(0x1A05F0C0)
#define MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYTIMESENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05F210)
#define MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYTIMESENTRY___BASE_CREATEREALTIMEQTETASK_OFFSET UNITYSDK_OFFSET(0x1A05F280)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ButtonQTETaskMultiPressByTimesEntry_TypeDefinitionIndex = 40660;

	class ButtonQTETaskMultiPressByTimesEntry : public ::MoleMole::Config::ButtonQTETaskEntryBase
	{
	public:
		::System::Boolean IsInfinitePressTimes; // 0x98
		::System::Int32 ListenTimes; // 0x9C
		::System::Single PressIntervalTimeThreshold; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYTIMESENTRY__CTOR_OFFSET))(this);
		}

		::Class_1_D47998EF092D4845* CreateRealtimeQTETask()
		{
			return ((::Class_1_D47998EF092D4845*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYTIMESENTRY_CREATEREALTIMEQTETASK_OFFSET))(this);
		}

		::Class_1_D47998EF092D4845* __base_CreateRealtimeQTETask()
		{
			return ((::Class_1_D47998EF092D4845*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYTIMESENTRY___BASE_CREATEREALTIMEQTETASK_OFFSET))(this);
		}
	};
}
