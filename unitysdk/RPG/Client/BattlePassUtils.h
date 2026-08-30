#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattlePassRewardPointData; }

#define RPG_CLIENT_BATTLEPASSUTILS_GETREWARDREDDOTKEY_OFFSET UNITYSDK_OFFSET(0xC9243B0)
#define RPG_CLIENT_BATTLEPASSUTILS_HASNEWACTIVITYQUEST_OFFSET UNITYSDK_OFFSET(0xC92CDA0)
#define RPG_CLIENT_BATTLEPASSUTILS_ISPURCHASESEEN_OFFSET UNITYSDK_OFFSET(0xC92D020)
#define RPG_CLIENT_BATTLEPASSUTILS_RECORDPURCHASESEEN_OFFSET UNITYSDK_OFFSET(0xC92D200)
#define RPG_CLIENT_BATTLEPASSUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xC92D370)

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePassUtils_TypeDefinitionIndex = 62964;

	class BattlePassUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Int32 GetRewardRedDotKey(::RPG::Client::BattlePassRewardPointData* a1)
		{
			return ((::System::Int32(*)(::RPG::Client::BattlePassRewardPointData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSUTILS_GETREWARDREDDOTKEY_OFFSET))(a1);
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
