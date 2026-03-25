#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHENLINGBATTLE_CARDIDENTIFIER_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x931F6F0)
#define RPG_CLIENT_CHENLINGBATTLE_CARDIDENTIFIER_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x931F710)
#define RPG_CLIENT_CHENLINGBATTLE_CARDIDENTIFIER_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x931F700)
#define RPG_CLIENT_CHENLINGBATTLE_CARDIDENTIFIER_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x931F720)
#define RPG_CLIENT_CHENLINGBATTLE_CARDIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x931EF80)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int CardIdentifier_TypeDefinitionIndex = 61986;

	class CardIdentifier : public ::System::Object
	{
	public:
		::System::UInt32 _ConfigID_k__BackingField; // 0x10
		::System::Int32 _Index_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDIDENTIFIER__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDIDENTIFIER_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDIDENTIFIER_SET_CONFIGID_OFFSET))(this, value);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDIDENTIFIER_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CARDIDENTIFIER_SET_INDEX_OFFSET))(this, value);
		}
	};
}
