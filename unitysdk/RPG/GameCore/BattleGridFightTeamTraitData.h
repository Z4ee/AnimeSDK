#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitSourceMask.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_3;
class Class_1_C9A481ADC2AC33EC;
namespace RPG { template <typename T> class PoolList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xA8855D0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETATTACHEDTRAITBONUSEFFECT_OFFSET UNITYSDK_OFFSET(0xA885B20)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETATTACHEDTRAITBONUSID_OFFSET UNITYSDK_OFFSET(0xA885AC0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETBATTLECOUNTER_OFFSET UNITYSDK_OFFSET(0xA8859E0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETROLEIDLISTBYSOURCE_OFFSET UNITYSDK_OFFSET(0xA885190)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETTRAITEFFECTINFO_OFFSET UNITYSDK_OFFSET(0xA8854B0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_MEMBERCOUNTEXCEPTDUMMY_OFFSET UNITYSDK_OFFSET(0xA885060)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xA885010)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_RAWTRAITBONUSCROSSBATTLECOUNTER_OFFSET UNITYSDK_OFFSET(0xA885410)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_HASROLE_OFFSET UNITYSDK_OFFSET(0xA885340)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA885970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleGridFightTeamTraitData_TypeDefinitionIndex = 45117;

	class BattleGridFightTeamTraitData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_C9A481ADC2AC33EC*>* TraitEffectList; // 0x10
		::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_3*>* MemberList; // 0x18
		::System::UInt32 SubTraitId; // 0x20
		::System::UInt32 ActiveLayer; // 0x24
		::System::UInt32 TeamTraitID; // 0x28
		::System::UInt32 WhiteBoxActiveCount; // 0x2C
		::System::UInt32 LayerLimit; // 0x30
		::RPG::GameCore::FixPoint TraitBonusCrossBattleCounter; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_MemberCountExceptDummy()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_MEMBERCOUNTEXCEPTDUMMY_OFFSET))(this);
		}

		::RPG::PoolList_1<::System::UInt32>* GetRoleIdListBySource(::RPG::GameCore::GridFightTraitSourceMask srcType)
		{
			return ((::RPG::PoolList_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightTraitSourceMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETROLEIDLISTBYSOURCE_OFFSET))(this, srcType);
		}

		::System::Boolean HasRole(::System::UInt32 roleId, ::RPG::GameCore::GridFightTraitSourceMask srcType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GridFightTraitSourceMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_HASROLE_OFFSET))(this, roleId, srcType);
		}

		::RPG::GameCore::FixPoint get_RawTraitBonusCrossBattleCounter()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_RAWTRAITBONUSCROSSBATTLECOUNTER_OFFSET))(this);
		}

		::RPG::GameCore::BattleGridFightTeamTraitData* DeepClone()
		{
			return ((::RPG::GameCore::BattleGridFightTeamTraitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_DEEPCLONE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetBattleCounter(::RPG::GameCore::GridFightTraitEffectType effectType, ::System::UInt32 paramIndex)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETBATTLECOUNTER_OFFSET))(this, effectType, paramIndex);
		}

		::System::UInt32 GetAttachedTraitBonusID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETATTACHEDTRAITBONUSID_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetAttachedTraitBonusEffect(::RPG::GameCore::GridFightTraitBonusType subTraitTpe, ::System::UInt32 paramIndex)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GridFightTraitBonusType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETATTACHEDTRAITBONUSEFFECT_OFFSET))(this, subTraitTpe, paramIndex);
		}

		::Class_1_C9A481ADC2AC33EC* GetTraitEffectInfo(::RPG::GameCore::GridFightTraitEffectType effectType)
		{
			return ((::Class_1_C9A481ADC2AC33EC*(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETTRAITEFFECTINFO_OFFSET))(this, effectType);
		}
	};
}
