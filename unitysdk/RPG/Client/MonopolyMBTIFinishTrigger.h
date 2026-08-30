#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONOPOLYMBTIFINISHTRIGGER_TRIGGER_OFFSET UNITYSDK_OFFSET(0x195EE3D0)
#define RPG_CLIENT_MONOPOLYMBTIFINISHTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x195EE3C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyMBTIFinishTrigger_TypeDefinitionIndex = 66277;

	class MonopolyMBTIFinishTrigger : public ::System::Object
	{
	public:
		::RPG::Client::MonopolyEffectShowType _ShowType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYMBTIFINISHTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYMBTIFINISHTRIGGER_TRIGGER_OFFSET))(this);
		}
	};
}
