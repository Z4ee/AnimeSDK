#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_520;
namespace RPG::Client { class MatchThreeV2BirdData; }

#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_CREATE_OFFSET UNITYSDK_OFFSET(0x9B61E90)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_BIRDID_OFFSET UNITYSDK_OFFSET(0x9B61D50)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_DATA_OFFSET UNITYSDK_OFFSET(0x9B61D60)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_MAXPOWER_OFFSET UNITYSDK_OFFSET(0x9B61E50)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_POSID_OFFSET UNITYSDK_OFFSET(0x9B61E70)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_GET_USECOUNT_OFFSET UNITYSDK_OFFSET(0x9B61E30)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_INIT_OFFSET UNITYSDK_OFFSET(0x9B61F20)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SET_MAXPOWER_OFFSET UNITYSDK_OFFSET(0x9B61E60)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SET_POSID_OFFSET UNITYSDK_OFFSET(0x9B61E80)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SET_USECOUNT_OFFSET UNITYSDK_OFFSET(0x9B61E40)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SYNCPOS_OFFSET UNITYSDK_OFFSET(0x9B5F0D0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SYNC_OFFSET UNITYSDK_OFFSET(0x9B61F60)
#define RPG_CLIENT_MATCHTHREEV2PLAYERBIRD__CTOR_OFFSET UNITYSDK_OFFSET(0x9B61F10)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PlayerBird_TypeDefinitionIndex = 53628;

	class MatchThreeV2PlayerBird : public ::System::Object
	{
	public:
		::System::UInt32 _MaxPower_k__BackingField; // 0x10
		::System::UInt32 _UseCount_k__BackingField; // 0x14
		::System::UInt32 _BirdID_k__BackingField; // 0x18
		::System::UInt32 _PosID_k__BackingField; // 0x1C

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

		::System::Void Sync(::Class_1_FA4F4A67B1C04320_520* birdRecord)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_520*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SYNC_OFFSET))(this, birdRecord);
		}

		::System::Void SyncPos(::System::UInt32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERBIRD_SYNCPOS_OFFSET))(this, pos);
		}
	};
}
