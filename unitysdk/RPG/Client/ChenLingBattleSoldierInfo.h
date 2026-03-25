#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChenLingBattleSoldierConfig; }
namespace RPG::Client { class ChenLingBattleSoldierLevelConfig; }
namespace RPG::Client { class ChenLingBattleSoldierUnitConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHENLINGBATTLESOLDIERINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x934F610)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERINFO_GETSOLDIERCONFIG_OFFSET UNITYSDK_OFFSET(0x9336D00)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERINFO_GETSOLDIERLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x934FF40)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERINFO_GETSOLDIERUNITCONFIG_OFFSET UNITYSDK_OFFSET(0x9350200)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERINFO_INIT_OFFSET UNITYSDK_OFFSET(0x934F2E0)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x93503D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleSoldierInfo_TypeDefinitionIndex = 49854;

	class ChenLingBattleSoldierInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattleSoldierConfig*>* _SoldierConfigDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattleSoldierLevelConfig*>*>* _SoldierLevelConfigDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattleSoldierUnitConfig*>* _SoldierUnitConfigDict; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattleSoldierConfig* GetSoldierConfig(::System::UInt32 soldierID)
		{
			return ((::RPG::Client::ChenLingBattleSoldierConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERINFO_GETSOLDIERCONFIG_OFFSET))(this, soldierID);
		}

		::RPG::Client::ChenLingBattleSoldierLevelConfig* GetSoldierLevelConfig(::System::UInt32 soldierID, ::System::UInt32 level)
		{
			return ((::RPG::Client::ChenLingBattleSoldierLevelConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERINFO_GETSOLDIERLEVELCONFIG_OFFSET))(this, soldierID, level);
		}

		::RPG::Client::ChenLingBattleSoldierUnitConfig* GetSoldierUnitConfig(::System::UInt32 unitID)
		{
			return ((::RPG::Client::ChenLingBattleSoldierUnitConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERINFO_GETSOLDIERUNITCONFIG_OFFSET))(this, unitID);
		}
	};
}
