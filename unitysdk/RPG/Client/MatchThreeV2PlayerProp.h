#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMatchThreePropData; }

#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_CLONE_OFFSET UNITYSDK_OFFSET(0x1C9A1910)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_CREATE_OFFSET UNITYSDK_OFFSET(0x1C9A48A0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1C9A4A60)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1C9A4B30)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1C9A4D00)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_ISUPGRADABLE_OFFSET UNITYSDK_OFFSET(0x1C9A4C00)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_PROPID_OFFSET UNITYSDK_OFFSET(0x1C9A4A30)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_PROPLEVEL_OFFSET UNITYSDK_OFFSET(0x1C9A4A40)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_INIT_OFFSET UNITYSDK_OFFSET(0x1C9A4DE0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_MARKSEEN_OFFSET UNITYSDK_OFFSET(0x1C9A4E20)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP_SET_PROPLEVEL_OFFSET UNITYSDK_OFFSET(0x1C9A4A50)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9A4DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PlayerProp_TypeDefinitionIndex = 66055;

	class MatchThreeV2PlayerProp : public ::System::Object
	{
	public:
		::System::UInt32 _PropID_k__BackingField; // 0x10
		::System::UInt32 _PropLevel_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPROP__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_PropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_PROPID_OFFSET))(this);
		}

		::System::UInt32 get_PropLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPROP_GET_PROPLEVEL_OFFSET))(this);
		}

		::System::Void set_PropLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPROP_SET_PROPLEVEL_OFFSET))(this, a1);
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

		static ::RPG::Client::MatchThreeV2PlayerProp* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MatchThreeV2PlayerProp*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPROP_CREATE_OFFSET))(a1, a2);
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
