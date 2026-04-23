#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_553;
namespace RPG::Client { class MatchThreeV2BirdData; }

#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_CREATE_OFFSET UNITYSDK_OFFSET(0xA85A4D0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_BIRDID_OFFSET UNITYSDK_OFFSET(0xA85A390)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_DATA_OFFSET UNITYSDK_OFFSET(0xA85A3A0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_MAXPOWER_OFFSET UNITYSDK_OFFSET(0xA85A490)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_POSID_OFFSET UNITYSDK_OFFSET(0xA85A4B0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_USECOUNT_OFFSET UNITYSDK_OFFSET(0xA85A470)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_INIT_OFFSET UNITYSDK_OFFSET(0xA85A560)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SET_MAXPOWER_OFFSET UNITYSDK_OFFSET(0xA85A4A0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SET_POSID_OFFSET UNITYSDK_OFFSET(0xA85A4C0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SET_USECOUNT_OFFSET UNITYSDK_OFFSET(0xA85A480)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SYNCPOS_OFFSET UNITYSDK_OFFSET(0xA857E80)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SYNC_OFFSET UNITYSDK_OFFSET(0xA85A5A0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD__CTOR_OFFSET UNITYSDK_OFFSET(0xA85A550)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PlayerBird_TypeDefinitionIndex = 60772;

	class MatchThreeV2PlayerBird : public ::System::Object
	{
	public:
		::System::UInt32 _PosID_k__BackingField; // 0x10
		::System::UInt32 _UseCount_k__BackingField; // 0x14
		::System::UInt32 _MaxPower_k__BackingField; // 0x18
		::System::UInt32 _BirdID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 birdID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD__CTOR_OFFSET))(this, birdID);
		}

		::System::UInt32 get_BirdID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_BIRDID_OFFSET))(this);
		}

		::RPG::Client::MatchThreeV2BirdData* get_Data()
		{
			return ((::RPG::Client::MatchThreeV2BirdData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_DATA_OFFSET))(this);
		}

		::System::UInt32 get_UseCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_USECOUNT_OFFSET))(this);
		}

		::System::Void set_UseCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SET_USECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxPower()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_MAXPOWER_OFFSET))(this);
		}

		::System::Void set_MaxPower(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SET_MAXPOWER_OFFSET))(this, value);
		}

		::System::UInt32 get_PosID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_POSID_OFFSET))(this);
		}

		::System::Void set_PosID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SET_POSID_OFFSET))(this, value);
		}

		static ::RPG::Client::MatchThreeV2PlayerBird* Create(::System::UInt32 birdID)
		{
			return ((::RPG::Client::MatchThreeV2PlayerBird*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_CREATE_OFFSET))(birdID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_INIT_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_553* birdRecord)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_553*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SYNC_OFFSET))(this, birdRecord);
		}

		::System::Void SyncPos(::System::UInt32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SYNCPOS_OFFSET))(this, pos);
		}
	};
}
