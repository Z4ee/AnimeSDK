#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class OptionTriggerInfo; }

#define RPG_GAMECORE_PROPOPTIONTRIGGER_BUTTONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xE6D9AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropOptionTrigger_ButtonParam_TypeDefinitionIndex = 57681;

	class PropOptionTrigger_ButtonParam : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* OptionList; // 0x10
		::System::UInt32 HostRuntimeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOPTIONTRIGGER_BUTTONPARAM__CTOR_OFFSET))(this);
		}
	};
}
