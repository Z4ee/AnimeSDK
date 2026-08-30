#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3E3E8891404D8201;
class Class_1_D17272E82AE804C2_339;
namespace System { class String; }

#define RPG_CLIENT_FATEGAMEBATTLEZONEINFO_CONVERTPHASEROUND2ZONEID_OFFSET UNITYSDK_OFFSET(0x1C17D050)
#define RPG_CLIENT_FATEGAMEBATTLEZONEINFO_GET_BATTLEAREAID_OFFSET UNITYSDK_OFFSET(0x1C17D170)
#define RPG_CLIENT_FATEGAMEBATTLEZONEINFO_GET_POSTBATTLEBGIMGPATH_OFFSET UNITYSDK_OFFSET(0x1C17D320)
#define RPG_CLIENT_FATEGAMEBATTLEZONEINFO_GET_PREBATTLEBGIMGPATH_OFFSET UNITYSDK_OFFSET(0x1C17D270)
#define RPG_CLIENT_FATEGAMEBATTLEZONEINFO_GET_ZONEID_OFFSET UNITYSDK_OFFSET(0x1C17D130)
#define RPG_CLIENT_FATEGAMEBATTLEZONEINFO_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1C17D210)
#define RPG_CLIENT_FATEGAMEBATTLEZONEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1C17CFF0)
#define RPG_CLIENT_FATEGAMEBATTLEZONEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C17CFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameBattleZoneInfo_TypeDefinitionIndex = 64091;

	class FateGameBattleZoneInfo : public ::System::Object
	{
	public:
		::System::UInt32 _ZoneID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBATTLEZONEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_339* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_339*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBATTLEZONEINFO_SYNC_OFFSET))(this, a1);
		}

		static ::System::UInt32 ConvertPhaseRound2ZoneID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBATTLEZONEINFO_CONVERTPHASEROUND2ZONEID_OFFSET))(a1, a2);
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
