#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMatchThreePropData; }

#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_CLONE_OFFSET UNITYSDK_OFFSET(0xA85A9B0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_CREATE_OFFSET UNITYSDK_OFFSET(0xA85D2E0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_DATA_OFFSET UNITYSDK_OFFSET(0xA85D4A0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xA85D570)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xA85D740)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_ISUPGRADABLE_OFFSET UNITYSDK_OFFSET(0xA85D640)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_PROPID_OFFSET UNITYSDK_OFFSET(0xA85D470)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_PROPLEVEL_OFFSET UNITYSDK_OFFSET(0xA85D480)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_INIT_OFFSET UNITYSDK_OFFSET(0xA85D820)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_MARKSEEN_OFFSET UNITYSDK_OFFSET(0xA85D860)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_SET_PROPLEVEL_OFFSET UNITYSDK_OFFSET(0xA85D490)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP__CTOR_OFFSET UNITYSDK_OFFSET(0xA85D810)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PlayerProp_TypeDefinitionIndex = 60774;

	class MatchThreeV2PlayerProp : public ::System::Object
	{
	public:
		::System::UInt32 _PropID_k__BackingField; // 0x10
		::System::UInt32 _PropLevel_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 propID, ::System::UInt32 propLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPROP__CTOR_OFFSET))(this, propID, propLevel);
		}

		::System::UInt32 get_PropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_PROPID_OFFSET))(this);
		}

		::System::UInt32 get_PropLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_PROPLEVEL_OFFSET))(this);
		}

		::System::Void set_PropLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPROP_SET_PROPLEVEL_OFFSET))(this, value);
		}

		::RPG::Client::IMatchThreePropData* get_Data()
		{
			return ((::RPG::Client::IMatchThreePropData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_DATA_OFFSET))(this);
		}

		::System::Boolean get_IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_ISMAXLEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsUpgradable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_ISUPGRADABLE_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_ISNEW_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2PlayerProp* Create(::System::UInt32 propID, ::System::UInt32 propLevel)
		{
			return ((::RPG::Client::MatchThreeV2PlayerProp*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPROP_CREATE_OFFSET))(propID, propLevel);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPROP_INIT_OFFSET))(this);
		}

		::System::Void MarkSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPROP_MARKSEEN_OFFSET))(this);
		}

		::RPG::Client::MatchThreeV2PlayerProp* Clone()
		{
			return ((::RPG::Client::MatchThreeV2PlayerProp*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPROP_CLONE_OFFSET))(this);
		}
	};
}
