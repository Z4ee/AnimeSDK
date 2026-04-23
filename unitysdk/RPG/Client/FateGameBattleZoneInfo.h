#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3E3E8891404D8201;
class Class_1_D1E0AD3915BCCF29_30;
namespace System { class String; }

#define RPG_CLIENT_FATEGAMEBATTLEZONEINFO_CONVERTPHASEROUND2ZONEID_OFFSET UNITYSDK_OFFSET(0xA33A920)
#define RPG_CLIENT_FATEGAMEBATTLEZONEINFO_GET_BATTLEAREAID_OFFSET UNITYSDK_OFFSET(0xA33AA10)
#define RPG_CLIENT_FATEGAMEBATTLEZONEINFO_GET_POSTBATTLEBGIMGPATH_OFFSET UNITYSDK_OFFSET(0xA33ABC0)
#define RPG_CLIENT_FATEGAMEBATTLEZONEINFO_GET_PREBATTLEBGIMGPATH_OFFSET UNITYSDK_OFFSET(0xA33AB10)
#define RPG_CLIENT_FATEGAMEBATTLEZONEINFO_GET_ZONEID_OFFSET UNITYSDK_OFFSET(0xA33AA00)
#define RPG_CLIENT_FATEGAMEBATTLEZONEINFO_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA33AAB0)
#define RPG_CLIENT_FATEGAMEBATTLEZONEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA33A8C0)
#define RPG_CLIENT_FATEGAMEBATTLEZONEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA33A8B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameBattleZoneInfo_TypeDefinitionIndex = 58895;

	class FateGameBattleZoneInfo : public ::System::Object
	{
	public:
		::System::UInt32 _ZoneID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBATTLEZONEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D1E0AD3915BCCF29_30* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBATTLEZONEINFO_SYNC_OFFSET))(this, proto);
		}

		static ::System::UInt32 ConvertPhaseRound2ZoneID(::System::UInt32 phaseID, ::System::UInt32 roundIndex)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBATTLEZONEINFO_CONVERTPHASEROUND2ZONEID_OFFSET))(phaseID, roundIndex);
		}

		::System::UInt32 get_ZoneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBATTLEZONEINFO_GET_ZONEID_OFFSET))(this);
		}

		::System::UInt32 get_BattleAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBATTLEZONEINFO_GET_BATTLEAREAID_OFFSET))(this);
		}

		::System::String* get_PreBattleBgImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBATTLEZONEINFO_GET_PREBATTLEBGIMGPATH_OFFSET))(this);
		}

		::System::String* get_PostBattleBgImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBATTLEZONEINFO_GET_POSTBATTLEBGIMGPATH_OFFSET))(this);
		}

		::Class_1_3E3E8891404D8201* get__Row()
		{
			return ((::Class_1_3E3E8891404D8201*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBATTLEZONEINFO_GET__ROW_OFFSET))(this);
		}
	};
}
