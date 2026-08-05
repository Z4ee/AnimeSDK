#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ButtonQTETaskEntryBase.h"

class Class_1_D47998EF092D4845;

#define MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYTIMESENTRY_CREATEREALTIMEQTETASK_OFFSET UNITYSDK_OFFSET(0x177D2A80)
#define MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYTIMESENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x177D2BD0)
#define MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYTIMESENTRY___BASE_CREATEREALTIMEQTETASK_OFFSET UNITYSDK_OFFSET(0x177D2C40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ButtonQTETaskMultiPressByTimesEntry_TypeDefinitionIndex = 60406;

	class ButtonQTETaskMultiPressByTimesEntry : public ::MoleMole::Config::ButtonQTETaskEntryBase
	{
	public:
		::System::Boolean IsInfinitePressTimes; // 0xA8
		::System::Int32 ListenTimes; // 0xAC
		::System::Single PressIntervalTimeThreshold; // 0xB0

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
