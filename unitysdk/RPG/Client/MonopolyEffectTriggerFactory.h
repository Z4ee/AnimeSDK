#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectTriggerType.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }
namespace RPG::Client { class IMonopolyVisualEffectTrigger; }

#define RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY_CREATETRIGGER_1_OFFSET UNITYSDK_OFFSET(0xD887FF0)
#define RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY_CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0xD887040)
#define RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY__CREATEADDITEMTRIGGER_OFFSET UNITYSDK_OFFSET(0xD887410)
#define RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY__CREATESUBITEMTRIGGER_OFFSET UNITYSDK_OFFSET(0xD8879A0)
#define RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY__FETCHTELEPORTTRIGGER_OFFSET UNITYSDK_OFFSET(0xD887DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyEffectTriggerFactory_TypeDefinitionIndex = 66273;

	class MonopolyEffectTriggerFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::IMonopolyVisualEffectTrigger* CreateTrigger(::Proto::MonopolyActionResult* a1)
		{
			return ((::RPG::Client::IMonopolyVisualEffectTrigger*(*)(::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY_CREATETRIGGER_OFFSET))(a1);
		}

		static ::RPG::Client::IMonopolyVisualEffectTrigger* CreateTrigger_1(::RPG::Client::MonopolyEffectTriggerType a1)
		{
			return ((::RPG::Client::IMonopolyVisualEffectTrigger*(*)(::RPG::Client::MonopolyEffectTriggerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY_CREATETRIGGER_1_OFFSET))(a1);
		}

		static ::RPG::Client::IMonopolyVisualEffectTrigger* _CreateAddItemTrigger(::Proto::MonopolyActionResult* a1)
		{
			return ((::RPG::Client::IMonopolyVisualEffectTrigger*(*)(::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY__CREATEADDITEMTRIGGER_OFFSET))(a1);
		}

		static ::RPG::Client::IMonopolyVisualEffectTrigger* _CreateSubItemTrigger(::Proto::MonopolyActionResult* a1)
		{
			return ((::RPG::Client::IMonopolyVisualEffectTrigger*(*)(::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY__CREATESUBITEMTRIGGER_OFFSET))(a1);
		}

		static ::RPG::Client::IMonopolyVisualEffectTrigger* _FetchTeleportTrigger(::Proto::MonopolyActionResult* a1)
		{
			return ((::RPG::Client::IMonopolyVisualEffectTrigger*(*)(::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY__FETCHTELEPORTTRIGGER_OFFSET))(a1);
		}
	};
}
