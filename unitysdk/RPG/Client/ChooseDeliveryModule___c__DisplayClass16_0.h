#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCC1FF00)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS16_0___ONFINISHEDMAINMISSION_B__0_OFFSET UNITYSDK_OFFSET(0xCC21630)

namespace RPG::Client
{
	inline static constexpr unsigned int ChooseDeliveryModule___c__DisplayClass16_0_TypeDefinitionIndex = 63585;

	class ChooseDeliveryModule___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Boolean anyUnlocked; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnFinishedMainMission_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS16_0___ONFINISHEDMAINMISSION_B__0_OFFSET))(this, a1);
		}
	};
}
