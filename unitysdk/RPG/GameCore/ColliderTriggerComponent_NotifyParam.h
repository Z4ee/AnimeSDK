#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_NOTIFYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xE594970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ColliderTriggerComponent_NotifyParam_TypeDefinitionIndex = 57659;

	class ColliderTriggerComponent_NotifyParam : public ::System::Object
	{
	public:
		::System::UInt32 HostRuntimeID; // 0x10
		::System::UInt32 GuestRuntimeID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COLLIDERTRIGGERCOMPONENT_NOTIFYPARAM__CTOR_OFFSET))(this);
		}
	};
}
