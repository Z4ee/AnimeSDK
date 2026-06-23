#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ButtonQTETaskEntryBase.h"

class Class_1_D47998EF092D4845;

#define MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYPROGRESSENTRY_CREATEREALTIMEQTETASK_OFFSET UNITYSDK_OFFSET(0x192919F0)
#define MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYPROGRESSENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19291B50)
#define MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYPROGRESSENTRY___BASE_CREATEREALTIMEQTETASK_OFFSET UNITYSDK_OFFSET(0x19291BD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ButtonQTETaskMultiPressByProgressEntry_TypeDefinitionIndex = 77703;

	class ButtonQTETaskMultiPressByProgressEntry : public ::MoleMole::Config::ButtonQTETaskEntryBase
	{
	public:
		::System::Single MaxProgress; // 0x98
		::System::Single InitialProgress; // 0x9C
		::System::Single AutoProgressDecrease; // 0xA0
		::System::Single ProgressIncreaseOnPress; // 0xA4
		::System::Single PressIntervalTimeThreshold; // 0xA8
		::System::Boolean EmptyProgressFail; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYPROGRESSENTRY__CTOR_OFFSET))(this);
		}

		::Class_1_D47998EF092D4845* CreateRealtimeQTETask()
		{
			return ((::Class_1_D47998EF092D4845*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYPROGRESSENTRY_CREATEREALTIMEQTETASK_OFFSET))(this);
		}

		::Class_1_D47998EF092D4845* __base_CreateRealtimeQTETask()
		{
			return ((::Class_1_D47998EF092D4845*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUTTONQTETASKMULTIPRESSBYPROGRESSENTRY___BASE_CREATEREALTIMEQTETASK_OFFSET))(this);
		}
	};
}
