#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TreasureChallengeStatus.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TREASURECHALLENGEDATA_GETCHALLENGESTATUS_OFFSET UNITYSDK_OFFSET(0x198AB2B0)
#define RPG_CLIENT_TREASURECHALLENGEDATA_GETISSAVE_OFFSET UNITYSDK_OFFSET(0x198AB340)
#define RPG_CLIENT_TREASURECHALLENGEDATA_GETRAIDID_OFFSET UNITYSDK_OFFSET(0x198AB230)
#define RPG_CLIENT_TREASURECHALLENGEDATA_GETWORLDLV_OFFSET UNITYSDK_OFFSET(0x198AB270)
#define RPG_CLIENT_TREASURECHALLENGEDATA_SETCHALLENGESTATUS_OFFSET UNITYSDK_OFFSET(0x198AB2F0)
#define RPG_CLIENT_TREASURECHALLENGEDATA_SETISSAVE_OFFSET UNITYSDK_OFFSET(0x198AB380)
#define RPG_CLIENT_TREASURECHALLENGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x198AB220)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureChallengeData_TypeDefinitionIndex = 65169;

	class TreasureChallengeData : public ::System::Object
	{
	public:
		::System::UInt32 _RaidID; // 0x10
		::System::UInt32 _WorldLv; // 0x14
		::System::Boolean _IsSave; // 0x18
		::RPG::Client::TreasureChallengeStatus _Status; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::TreasureChallengeStatus a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::TreasureChallengeStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetRaidID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEDATA_GETRAIDID_OFFSET))(this);
		}

		::System::UInt32 GetWorldLv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEDATA_GETWORLDLV_OFFSET))(this);
		}

		::RPG::Client::TreasureChallengeStatus GetChallengeStatus()
		{
			return ((::RPG::Client::TreasureChallengeStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEDATA_GETCHALLENGESTATUS_OFFSET))(this);
		}

		::System::Void SetChallengeStatus(::RPG::Client::TreasureChallengeStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureChallengeStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEDATA_SETCHALLENGESTATUS_OFFSET))(this, a1);
		}

		::System::Boolean GetIsSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEDATA_GETISSAVE_OFFSET))(this);
		}

		::System::Void SetIsSave(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEDATA_SETISSAVE_OFFSET))(this, a1);
		}
	};
}
