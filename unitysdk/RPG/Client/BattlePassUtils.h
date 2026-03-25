#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattlePassRewardPointData; }

#define RPG_CLIENT_BATTLEPASSUTILS_GETREWARDREDDOTKEY_OFFSET UNITYSDK_OFFSET(0x91C3CA0)
#define RPG_CLIENT_BATTLEPASSUTILS_HASNEWACTIVITYQUEST_OFFSET UNITYSDK_OFFSET(0x91CB3C0)
#define RPG_CLIENT_BATTLEPASSUTILS_ISPURCHASESEEN_OFFSET UNITYSDK_OFFSET(0x91CB630)
#define RPG_CLIENT_BATTLEPASSUTILS_RECORDPURCHASESEEN_OFFSET UNITYSDK_OFFSET(0x91CB7E0)
#define RPG_CLIENT_BATTLEPASSUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x91CB8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePassUtils_TypeDefinitionIndex = 51048;

	class BattlePassUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Int32 GetRewardRedDotKey(::RPG::Client::BattlePassRewardPointData* data)
		{
			return ((::System::Int32(*)(::RPG::Client::BattlePassRewardPointData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSUTILS_GETREWARDREDDOTKEY_OFFSET))(data);
		}

		static ::System::Boolean HasNewActivityQuest()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSUTILS_HASNEWACTIVITYQUEST_OFFSET))();
		}

		static ::System::Boolean IsPurchaseSeen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSUTILS_ISPURCHASESEEN_OFFSET))();
		}

		static ::System::Void RecordPurchaseSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSUTILS_RECORDPURCHASESEEN_OFFSET))();
		}
	};
}
