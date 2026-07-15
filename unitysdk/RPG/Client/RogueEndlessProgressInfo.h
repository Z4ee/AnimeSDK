#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_20D743894CDF214D_2;
class Class_1_EBB10EC01CCC4716_16;
namespace RPG::Client { class RogueEndlessBattleResult; }
namespace RPG::Client { class RogueReviveAvatarInfo; }

#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A44E340)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_BATTLERESULT_OFFSET UNITYSDK_OFFSET(0x1A44E950)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_BESTBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x1A44E970)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_CURAREAID_OFFSET UNITYSDK_OFFSET(0x1A44E930)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x1A44E990)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x1A44E430)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SET_BATTLERESULT_OFFSET UNITYSDK_OFFSET(0x1A44E960)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SET_BESTBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x1A44E980)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SET_CURAREAID_OFFSET UNITYSDK_OFFSET(0x1A44E940)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SYNCBATTLERESULT_1_OFFSET UNITYSDK_OFFSET(0x1A44E610)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SYNCBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x1A44E480)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_TRYMERGEANDSHOWENDLESSGIFTROGUECOIN_OFFSET UNITYSDK_OFFSET(0x1A44E760)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A44E1A0)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x1A44E8E0)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO__TRYNOTIFYGIFTROGUECOIN_OFFSET UNITYSDK_OFFSET(0x1A44E7B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueEndlessProgressInfo_TypeDefinitionIndex = 64448;

	class RogueEndlessProgressInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueEndlessBattleResult* _BestBattleResult_k__BackingField; // 0x10
		::RPG::Client::RogueEndlessBattleResult* _BattleResult_k__BackingField; // 0x18
		::System::UInt32 _CurAreaID_k__BackingField; // 0x20
		::System::UInt32 _CachedRogueGiftCoinCount; // 0x24

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshProgress(::Class_1_20D743894CDF214D_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_20D743894CDF214D_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_REFRESHPROGRESS_OFFSET))(this, a1);
		}

		::System::Void SyncBattleResult(::Class_1_EBB10EC01CCC4716_16* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SYNCBATTLERESULT_OFFSET))(this, a1);
		}

		::System::Void SyncBattleResult_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SYNCBATTLERESULT_1_OFFSET))(this);
		}

		::System::Void TryMergeAndShowEndlessGiftRogueCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_TRYMERGEANDSHOWENDLESSGIFTROGUECOIN_OFFSET))(this, a1);
		}

		::System::Void _OnHideLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _TryNotifyGiftRogueCoin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO__TRYNOTIFYGIFTROGUECOIN_OFFSET))(this);
		}

		::System::UInt32 get_CurAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_CURAREAID_OFFSET))(this);
		}

		::System::Void set_CurAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SET_CURAREAID_OFFSET))(this, a1);
		}

		::RPG::Client::RogueEndlessBattleResult* get_BattleResult()
		{
			return ((::RPG::Client::RogueEndlessBattleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_BATTLERESULT_OFFSET))(this);
		}

		::System::Void set_BattleResult(::RPG::Client::RogueEndlessBattleResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueEndlessBattleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SET_BATTLERESULT_OFFSET))(this, a1);
		}

		::RPG::Client::RogueEndlessBattleResult* get_BestBattleResult()
		{
			return ((::RPG::Client::RogueEndlessBattleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_BESTBATTLERESULT_OFFSET))(this);
		}

		::System::Void set_BestBattleResult(::RPG::Client::RogueEndlessBattleResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueEndlessBattleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SET_BESTBATTLERESULT_OFFSET))(this, a1);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_REVIVEAVATARINFO_OFFSET))(this);
		}
	};
}
