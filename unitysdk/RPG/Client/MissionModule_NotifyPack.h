#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_MISSIONMODULE_NOTIFYPACK__CTOR_OFFSET UNITYSDK_OFFSET(0x73E20)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule_NotifyPack_TypeDefinitionIndex = 60910;

	struct alignas(4) MissionModule_NotifyPack
	{
		::System::UInt32 ID; // 0x10
		::RPG::Client::NotifyType Type; // 0x14

		::System::Void _ctor(::System::UInt32 id, ::RPG::Client::NotifyType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE_NOTIFYPACK__CTOR_OFFSET))(this, id, type);
		}
	};
}
