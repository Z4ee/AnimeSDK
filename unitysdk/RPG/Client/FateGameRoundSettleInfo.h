#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_190BB2A3D431BCD2;
class Class_1_44C1627FBFCEEE3C;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GETHPDELTAINFO_OFFSET UNITYSDK_OFFSET(0xCF4CAD0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GETREALHPDELTA_OFFSET UNITYSDK_OFFSET(0xCF4C7B0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GETTHEORETICALHPDELTA_OFFSET UNITYSDK_OFFSET(0xCF4C6B0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_ISLASTROUND_OFFSET UNITYSDK_OFFSET(0xCF3E9B0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_LEFTBATTLEROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0xCF4CB80)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_LEFTBOSSMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCF4CC40)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_LEFTELITEMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCF4CC00)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_LEFTNORMALMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0xCF4CBC0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_ISLETHALPROTECTIONACTIVATED_OFFSET UNITYSDK_OFFSET(0xCF4C8B0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_ISUSINGSPECIALSKILL_OFFSET UNITYSDK_OFFSET(0xCF4C9C0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_ISWIN_OFFSET UNITYSDK_OFFSET(0xCF48BC0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_RESET_OFFSET UNITYSDK_OFFSET(0xCF3BE70)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xCF3D140)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCF3AD40)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameRoundSettleInfo_TypeDefinitionIndex = 64125;

	class FateGameRoundSettleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_44C1627FBFCEEE3C*>* _MasterHPDeltaDict; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _WinMasterAvatarIDs; // 0x18
		::System::UInt32 _LeftEliteMonsterCount; // 0x20
		::System::UInt32 _LeftNormalMonsterCount; // 0x24
		::System::UInt32 _LeftBossMonsterCount; // 0x28
		::System::UInt32 _LeftBattleRoundCount; // 0x2C
		::System::Boolean _IsLastRound; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_190BB2A3D431BCD2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_190BB2A3D431BCD2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean IsWin(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_ISWIN_OFFSET))(this, a1);
		}

		::System::Int32 GetTheoreticalHPDelta(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GETTHEORETICALHPDELTA_OFFSET))(this, a1);
		}

		::System::Int32 GetRealHPDelta(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GETREALHPDELTA_OFFSET))(this, a1);
		}

		::System::Boolean IsLethalProtectionActivated(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_ISLETHALPROTECTIONACTIVATED_OFFSET))(this, a1);
		}

		::System::Boolean IsUsingSpecialSkill(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_ISUSINGSPECIALSKILL_OFFSET))(this, a1);
		}

		::Class_1_44C1627FBFCEEE3C* GetHPDeltaInfo(::System::UInt32 a1)
		{
			return ((::Class_1_44C1627FBFCEEE3C*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GETHPDELTAINFO_OFFSET))(this, a1);
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
