#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyContentType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }

#define RPG_CLIENT_MONOPOLYCONTENTTRIGGER_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xAA9A510)
#define RPG_CLIENT_MONOPOLYCONTENTTRIGGER_GET_SEQID_OFFSET UNITYSDK_OFFSET(0xAA9A550)
#define RPG_CLIENT_MONOPOLYCONTENTTRIGGER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xAA9A530)
#define RPG_CLIENT_MONOPOLYCONTENTTRIGGER_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xAA9A520)
#define RPG_CLIENT_MONOPOLYCONTENTTRIGGER_SET_SEQID_OFFSET UNITYSDK_OFFSET(0xAA9A560)
#define RPG_CLIENT_MONOPOLYCONTENTTRIGGER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xAA9A540)
#define RPG_CLIENT_MONOPOLYCONTENTTRIGGER_TRIGGER_OFFSET UNITYSDK_OFFSET(0xAA9A080)
#define RPG_CLIENT_MONOPOLYCONTENTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA9A070)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyContentTrigger_TypeDefinitionIndex = 61034;

	class MonopolyContentTrigger : public ::System::Object
	{
	public:
		::RPG::Client::MonopolyContentType _Type_k__BackingField; // 0x10
		::System::UInt32 _ContentID_k__BackingField; // 0x14
		::System::UInt32 _SeqID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 seqID, ::System::UInt32 contentID, ::RPG::Client::MonopolyContentType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::MonopolyContentType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYCONTENTTRIGGER__CTOR_OFFSET))(this, seqID, contentID, type);
		}

		::RPG::Client::LuaUIController* Trigger()
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYCONTENTTRIGGER_TRIGGER_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYCONTENTTRIGGER_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void set_ContentID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYCONTENTTRIGGER_SET_CONTENTID_OFFSET))(this, value);
		}

		::RPG::Client::MonopolyContentType get_Type()
		{
			return ((::RPG::Client::MonopolyContentType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYCONTENTTRIGGER_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::MonopolyContentType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonopolyContentType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYCONTENTTRIGGER_SET_TYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_SeqID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYCONTENTTRIGGER_GET_SEQID_OFFSET))(this);
		}

		::System::Void set_SeqID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYCONTENTTRIGGER_SET_SEQID_OFFSET))(this, value);
		}
	};
}
