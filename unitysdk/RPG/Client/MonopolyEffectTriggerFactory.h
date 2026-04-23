#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectTriggerType.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }
namespace RPG::Client { class IMonopolyVisualEffectTrigger; }

#define RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY_CREATETRIGGER_1_OFFSET UNITYSDK_OFFSET(0xAA9C690)
#define RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY_CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0xAA9B6F0)
#define RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY__CREATEADDITEMTRIGGER_OFFSET UNITYSDK_OFFSET(0xAA9BAC0)
#define RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY__CREATESUBITEMTRIGGER_OFFSET UNITYSDK_OFFSET(0xAA9C050)
#define RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY__FETCHTELEPORTTRIGGER_OFFSET UNITYSDK_OFFSET(0xAA9C450)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyEffectTriggerFactory_TypeDefinitionIndex = 60989;

	class MonopolyEffectTriggerFactory : public ::System::Object
	{
	public:
		static ::RPG::Client::IMonopolyVisualEffectTrigger* CreateTrigger(::Proto::MonopolyActionResult* result)
		{
			return ((::RPG::Client::IMonopolyVisualEffectTrigger*(*)(::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY_CREATETRIGGER_OFFSET))(result);
		}

		static ::RPG::Client::IMonopolyVisualEffectTrigger* CreateTrigger_1(::RPG::Client::MonopolyEffectTriggerType type)
		{
			return ((::RPG::Client::IMonopolyVisualEffectTrigger*(*)(::RPG::Client::MonopolyEffectTriggerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY_CREATETRIGGER_1_OFFSET))(type);
		}

		static ::RPG::Client::IMonopolyVisualEffectTrigger* _CreateAddItemTrigger(::Proto::MonopolyActionResult* changer)
		{
			return ((::RPG::Client::IMonopolyVisualEffectTrigger*(*)(::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY__CREATEADDITEMTRIGGER_OFFSET))(changer);
		}

		static ::RPG::Client::IMonopolyVisualEffectTrigger* _CreateSubItemTrigger(::Proto::MonopolyActionResult* changer)
		{
			return ((::RPG::Client::IMonopolyVisualEffectTrigger*(*)(::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY__CREATESUBITEMTRIGGER_OFFSET))(changer);
		}

		static ::RPG::Client::IMonopolyVisualEffectTrigger* _FetchTeleportTrigger(::Proto::MonopolyActionResult* changer)
		{
			return ((::RPG::Client::IMonopolyVisualEffectTrigger*(*)(::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYEFFECTTRIGGERFACTORY__FETCHTELEPORTTRIGGER_OFFSET))(changer);
		}
	};
}
