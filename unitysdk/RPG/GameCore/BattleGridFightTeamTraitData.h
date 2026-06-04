#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitSourceMask.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_5;
class Class_1_57207EAD4239ED6B;
class Class_1_C0163F1F521957F0;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xCD2F750)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETATTACHEDTRAITBONUSEFFECT_OFFSET UNITYSDK_OFFSET(0xCD2FD40)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETATTACHEDTRAITBONUSID_OFFSET UNITYSDK_OFFSET(0xCD2FCE0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETBATTLECOUNTER_OFFSET UNITYSDK_OFFSET(0xCD2FC00)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETROLEIDLISTBYSOURCE_OFFSET UNITYSDK_OFFSET(0xCD2F2F0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETTRAITEFFECTINFO_OFFSET UNITYSDK_OFFSET(0xCD2F630)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_ELATIONEQUIPLIST_OFFSET UNITYSDK_OFFSET(0xCD2F160)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_ELATIONPROPERTYMAP_OFFSET UNITYSDK_OFFSET(0xCD2F180)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_MEMBERCOUNTEXCEPTDUMMY_OFFSET UNITYSDK_OFFSET(0xCD2F1A0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xCD2F110)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_RAWTRAITBONUSCROSSBATTLECOUNTER_OFFSET UNITYSDK_OFFSET(0xCD2F570)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_HASROLE_OFFSET UNITYSDK_OFFSET(0xCD2F4B0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_SETUPELATIONEQUIPLIST_OFFSET UNITYSDK_OFFSET(0xCD2FE20)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_SET_ELATIONEQUIPLIST_OFFSET UNITYSDK_OFFSET(0xCD2F170)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_SET_ELATIONPROPERTYMAP_OFFSET UNITYSDK_OFFSET(0xCD2F190)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD2FB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleGridFightTeamTraitData_TypeDefinitionIndex = 52548;

	class BattleGridFightTeamTraitData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_C0163F1F521957F0*>* TraitEffectList; // 0x10
		::Class_1_57207EAD4239ED6B* _ElationPropertyMap_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* _ElationEquipList_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_5*>* MemberList; // 0x28
		::System::UInt32 SubTraitId; // 0x30
		::System::UInt32 WhiteBoxActiveCount; // 0x34
		::RPG::GameCore::FixPoint TraitBonusCrossBattleCounter; // 0x38
		::System::UInt32 ActiveLayer; // 0x40
		::System::UInt32 TeamTraitID; // 0x44
		::System::UInt32 LayerLimit; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* get_ElationEquipList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_ELATIONEQUIPLIST_OFFSET))(this);
		}

		::System::Void set_ElationEquipList(::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_SET_ELATIONEQUIPLIST_OFFSET))(this, a1);
		}

		::Class_1_57207EAD4239ED6B* get_ElationPropertyMap()
		{
			return ((::Class_1_57207EAD4239ED6B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_ELATIONPROPERTYMAP_OFFSET))(this);
		}

		::System::Void set_ElationPropertyMap(::Class_1_57207EAD4239ED6B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_57207EAD4239ED6B*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_SET_ELATIONPROPERTYMAP_OFFSET))(this, a1);
		}

		::System::Int32 get_MemberCountExceptDummy()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_MEMBERCOUNTEXCEPTDUMMY_OFFSET))(this);
		}

		::RPG::PoolList_1<::System::UInt32>* GetRoleIdListBySource(::RPG::GameCore::GridFightTraitSourceMask a1)
		{
			return ((::RPG::PoolList_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightTraitSourceMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETROLEIDLISTBYSOURCE_OFFSET))(this, a1);
		}

		::System::Boolean HasRole(::System::UInt32 a1, ::RPG::GameCore::GridFightTraitSourceMask a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GridFightTraitSourceMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_HASROLE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint get_RawTraitBonusCrossBattleCounter()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_RAWTRAITBONUSCROSSBATTLECOUNTER_OFFSET))(this);
		}

		::RPG::GameCore::BattleGridFightTeamTraitData* DeepClone()
		{
			return ((::RPG::GameCore::BattleGridFightTeamTraitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_DEEPCLONE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetBattleCounter(::RPG::GameCore::GridFightTraitEffectType a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETBATTLECOUNTER_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetAttachedTraitBonusID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETATTACHEDTRAITBONUSID_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetAttachedTraitBonusEffect(::RPG::GameCore::GridFightTraitBonusType a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GridFightTraitBonusType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETATTACHEDTRAITBONUSEFFECT_OFFSET))(this, a1, a2);
		}

		::Class_1_C0163F1F521957F0* GetTraitEffectInfo(::RPG::GameCore::GridFightTraitEffectType a1)
		{
			return ((::Class_1_C0163F1F521957F0*(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETTRAITEFFECTINFO_OFFSET))(this, a1);
		}

		::System::Void SetupElationEquipList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_SETUPELATIONEQUIPLIST_OFFSET))(this);
		}
	};
}
