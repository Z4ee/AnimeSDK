#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_84BF80250A9F5C6A;
class Class_1_EBB10EC01CCC4716_24;
namespace RPG::Client { class RogueEndlessBattleResult; }
namespace RPG::Client { class RogueReviveAvatarInfo; }

#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2FA100)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_BATTLERESULT_OFFSET UNITYSDK_OFFSET(0xA2FA700)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_BESTBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xA2FA720)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_CURAREAID_OFFSET UNITYSDK_OFFSET(0xA2FA6E0)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA2FA740)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0xA2FA1E0)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SET_BATTLERESULT_OFFSET UNITYSDK_OFFSET(0xA2FA710)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SET_BESTBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xA2FA730)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SET_CURAREAID_OFFSET UNITYSDK_OFFSET(0xA2FA6F0)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SYNCBATTLERESULT_1_OFFSET UNITYSDK_OFFSET(0xA2FA3C0)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SYNCBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xA2FA230)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_TRYMERGEANDSHOWENDLESSGIFTROGUECOIN_OFFSET UNITYSDK_OFFSET(0xA2FA510)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA2F9F70)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xA2FA690)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO__TRYNOTIFYGIFTROGUECOIN_OFFSET UNITYSDK_OFFSET(0xA2FA560)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueEndlessProgressInfo_TypeDefinitionIndex = 54960;

	class RogueEndlessProgressInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueEndlessBattleResult* _BattleResult_k__BackingField; // 0x10
		::RPG::Client::RogueEndlessBattleResult* _BestBattleResult_k__BackingField; // 0x18
		::System::UInt32 _CurAreaID_k__BackingField; // 0x20
		::System::UInt32 _CachedRogueGiftCoinCount; // 0x24

		::System::Void _ctor(::System::UInt32 areaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO__CTOR_OFFSET))(this, areaID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshProgress(::Class_1_84BF80250A9F5C6A* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_84BF80250A9F5C6A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_REFRESHPROGRESS_OFFSET))(this, proto);
		}

		::System::Void SyncBattleResult(::Class_1_EBB10EC01CCC4716_24* layerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SYNCBATTLERESULT_OFFSET))(this, layerInfo);
		}

		::System::Void SyncBattleResult_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SYNCBATTLERESULT_1_OFFSET))(this);
		}

		::System::Void TryMergeAndShowEndlessGiftRogueCoin(::System::UInt32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_TRYMERGEANDSHOWENDLESSGIFTROGUECOIN_OFFSET))(this, count);
		}

		::System::Void _OnHideLoadingPage(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO__ONHIDELOADINGPAGE_OFFSET))(this, arg);
		}

		::System::Void _TryNotifyGiftRogueCoin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO__TRYNOTIFYGIFTROGUECOIN_OFFSET))(this);
		}

		::System::UInt32 get_CurAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_CURAREAID_OFFSET))(this);
		}

		::System::Void set_CurAreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SET_CURAREAID_OFFSET))(this, value);
		}

		::RPG::Client::RogueEndlessBattleResult* get_BattleResult()
		{
			return ((::RPG::Client::RogueEndlessBattleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_BATTLERESULT_OFFSET))(this);
		}

		::System::Void set_BattleResult(::RPG::Client::RogueEndlessBattleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueEndlessBattleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SET_BATTLERESULT_OFFSET))(this, value);
		}

		::RPG::Client::RogueEndlessBattleResult* get_BestBattleResult()
		{
			return ((::RPG::Client::RogueEndlessBattleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_BESTBATTLERESULT_OFFSET))(this);
		}

		::System::Void set_BestBattleResult(::RPG::Client::RogueEndlessBattleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueEndlessBattleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SET_BESTBATTLERESULT_OFFSET))(this, value);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_REVIVEAVATARINFO_OFFSET))(this);
		}
	};
}
