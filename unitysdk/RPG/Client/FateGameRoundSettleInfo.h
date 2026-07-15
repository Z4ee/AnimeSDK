#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_09751665EAC0FA4D_3;
class Class_1_44C1627FBFCEEE3C;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GETHPDELTAINFO_OFFSET UNITYSDK_OFFSET(0x1A5AA130)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GETREALHPDELTA_OFFSET UNITYSDK_OFFSET(0x1A5A9E10)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GETTHEORETICALHPDELTA_OFFSET UNITYSDK_OFFSET(0x1A5A9D10)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_ISLASTROUND_OFFSET UNITYSDK_OFFSET(0x1A5AA320)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_LEFTBATTLEROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5AA220)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_LEFTBOSSMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5AA2E0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_LEFTELITEMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5AA2A0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_GET_LEFTNORMALMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5AA260)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_ISLETHALPROTECTIONACTIVATED_OFFSET UNITYSDK_OFFSET(0x1A5A9F10)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_ISUSINGSPECIALSKILL_OFFSET UNITYSDK_OFFSET(0x1A5AA020)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_ISWIN_OFFSET UNITYSDK_OFFSET(0x1A5A4F60)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_RESET_OFFSET UNITYSDK_OFFSET(0x1A5AA1E0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1A5A92F0)
#define RPG_CLIENT_FATEGAMEROUNDSETTLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A9250)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameRoundSettleInfo_TypeDefinitionIndex = 61144;

	class FateGameRoundSettleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _WinMasterAvatarIDs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_44C1627FBFCEEE3C*>* _MasterHPDeltaDict; // 0x18
		::System::Boolean _IsLastRound; // 0x20
		::System::UInt32 _LeftNormalMonsterCount; // 0x24
		::System::UInt32 _LeftBattleRoundCount; // 0x28
		::System::UInt32 _LeftBossMonsterCount; // 0x2C
		::System::UInt32 _LeftEliteMonsterCount; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_09751665EAC0FA4D_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_09751665EAC0FA4D_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEROUNDSETTLEINFO_SYNC_OFFSET))(this, a1);
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
