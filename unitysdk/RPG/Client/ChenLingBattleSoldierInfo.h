#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChenLingBattleSoldierConfig; }
namespace RPG::Client { class ChenLingBattleSoldierLevelConfig; }
namespace RPG::Client { class ChenLingBattleSoldierUnitConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHENLINGBATTLESOLDIERINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB21EC0)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERINFO_GETSOLDIERCONFIG_OFFSET UNITYSDK_OFFSET(0xCB14F70)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERINFO_GETSOLDIERLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0xCB15140)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERINFO_GETSOLDIERUNITCONFIG_OFFSET UNITYSDK_OFFSET(0xCB1A140)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERINFO_INIT_OFFSET UNITYSDK_OFFSET(0xCB218F0)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCB218E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleSoldierInfo_TypeDefinitionIndex = 61546;

	class ChenLingBattleSoldierInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattleSoldierLevelConfig*>*>* _SoldierLevelConfigDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattleSoldierConfig*>* _SoldierConfigDict; // 0x18
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

		::RPG::Client::ChenLingBattleSoldierConfig* GetSoldierConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingBattleSoldierConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERINFO_GETSOLDIERCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingBattleSoldierLevelConfig* GetSoldierLevelConfig(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ChenLingBattleSoldierLevelConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERINFO_GETSOLDIERLEVELCONFIG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChenLingBattleSoldierUnitConfig* GetSoldierUnitConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingBattleSoldierUnitConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERINFO_GETSOLDIERUNITCONFIG_OFFSET))(this, a1);
		}
	};
}
