#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2DiceExchangeEventType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UIEXCHANGEDICEEVENTPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xB7C96F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UIEXCHANGEDICEEVENTPARAM_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0xB7DB9E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UIEXCHANGEDICEEVENTPARAM_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB7DB9C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UIEXCHANGEDICEEVENTPARAM_SET_CALLBACK_OFFSET UNITYSDK_OFFSET(0xB7DB9F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UIEXCHANGEDICEEVENTPARAM_SET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB7DB9D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2UIEXCHANGEDICEEVENTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB7DB9B0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2UIExchangeDiceEventParam_TypeDefinitionIndex = 70773;

	class DiceCombatV2UIExchangeDiceEventParam : public ::System::Object
	{
	public:
		::System::Action* _Callback_k__BackingField; // 0x10
		::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType _EventType_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UIEXCHANGEDICEEVENTPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2UIExchangeDiceEventParam* Create(::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType a1, ::System::Action* a2)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2UIExchangeDiceEventParam*(*)(::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UIEXCHANGEDICEEVENTPARAM_CREATE_OFFSET))(a1, a2);
		}

		::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType get_EventType()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UIEXCHANGEDICEEVENTPARAM_GET_EVENTTYPE_OFFSET))(this);
		}

		::System::Void set_EventType(::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UIEXCHANGEDICEEVENTPARAM_SET_EVENTTYPE_OFFSET))(this, a1);
		}

		::System::Action* get_Callback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UIEXCHANGEDICEEVENTPARAM_GET_CALLBACK_OFFSET))(this);
		}

		::System::Void set_Callback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2UIEXCHANGEDICEEVENTPARAM_SET_CALLBACK_OFFSET))(this, a1);
		}
	};
}
