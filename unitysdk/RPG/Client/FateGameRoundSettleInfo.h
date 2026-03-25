#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_44C1627FBFCEEE3C;
class Class_1_5FC34B774F665446;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GETHPDELTAINFO_OFFSET UNITYSDK_OFFSET(0x968C710)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GETREALHPDELTA_OFFSET UNITYSDK_OFFSET(0x968C450)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GETTHEORETICALHPDELTA_OFFSET UNITYSDK_OFFSET(0x968C370)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_ISLASTROUND_OFFSET UNITYSDK_OFFSET(0x968C830)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_LEFTBATTLEROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x968C7F0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_LEFTBOSSMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0x968C820)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_LEFTELITEMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0x968C810)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_LEFTNORMALMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0x968C800)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_ISLETHALPROTECTIONACTIVATED_OFFSET UNITYSDK_OFFSET(0x968C530)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_ISUSINGSPECIALSKILL_OFFSET UNITYSDK_OFFSET(0x968C620)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_ISWIN_OFFSET UNITYSDK_OFFSET(0x9688600)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_RESET_OFFSET UNITYSDK_OFFSET(0x967D550)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x967E470)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x967C2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameRoundSettleInfo_TypeDefinitionIndex = 51980;

	class FateGameRoundSettleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_44C1627FBFCEEE3C*>* _MasterHPDeltaDict; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _WinMasterAvatarIDs; // 0x18
		::System::UInt32 _LeftNormalMonsterCount; // 0x20
		::System::UInt32 _LeftEliteMonsterCount; // 0x24
		::System::UInt32 _LeftBossMonsterCount; // 0x28
		::System::UInt32 _LeftBattleRoundCount; // 0x2C
		::System::Boolean _IsLastRound; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_5FC34B774F665446* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FC34B774F665446*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_SYNC_OFFSET))(this, proto);
		}

		::System::Boolean IsWin(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_ISWIN_OFFSET))(this, avatarID);
		}

		::System::Int32 GetTheoreticalHPDelta(::System::UInt32 avatarID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GETTHEORETICALHPDELTA_OFFSET))(this, avatarID);
		}

		::System::Int32 GetRealHPDelta(::System::UInt32 avatarID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GETREALHPDELTA_OFFSET))(this, avatarID);
		}

		::System::Boolean IsLethalProtectionActivated(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_ISLETHALPROTECTIONACTIVATED_OFFSET))(this, avatarID);
		}

		::System::Boolean IsUsingSpecialSkill(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_ISUSINGSPECIALSKILL_OFFSET))(this, avatarID);
		}

		::Class_1_44C1627FBFCEEE3C* GetHPDeltaInfo(::System::UInt32 avatarID)
		{
			return ((::Class_1_44C1627FBFCEEE3C*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GETHPDELTAINFO_OFFSET))(this, avatarID);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_RESET_OFFSET))(this);
		}

		::System::UInt32 get_LeftBattleRoundCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_LEFTBATTLEROUNDCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_LeftNormalMonsterCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_LEFTNORMALMONSTERCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_LeftEliteMonsterCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_LEFTELITEMONSTERCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_LeftBossMonsterCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_LEFTBOSSMONSTERCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsLastRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_ISLASTROUND_OFFSET))(this);
		}
	};
}
