#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitSourceMask.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_4;
class Class_1_50D7577ADBD39E1A;
class Class_1_C0163F1F521957F0;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xB5CA440)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETATTACHEDTRAITBONUSEFFECT_OFFSET UNITYSDK_OFFSET(0xB5CA990)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETATTACHEDTRAITBONUSID_OFFSET UNITYSDK_OFFSET(0xB5CA930)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETBATTLECOUNTER_OFFSET UNITYSDK_OFFSET(0xB5CA850)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETROLEIDLISTBYSOURCE_OFFSET UNITYSDK_OFFSET(0xB5CA000)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETTRAITEFFECTINFO_OFFSET UNITYSDK_OFFSET(0xB5CA320)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_ELATIONEQUIPLIST_OFFSET UNITYSDK_OFFSET(0xB5C9E90)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_ELATIONPROPERTYMAP_OFFSET UNITYSDK_OFFSET(0xB5C9EB0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_MEMBERCOUNTEXCEPTDUMMY_OFFSET UNITYSDK_OFFSET(0xB5C9ED0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xB5C9E40)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_RAWTRAITBONUSCROSSBATTLECOUNTER_OFFSET UNITYSDK_OFFSET(0xB5CA280)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_HASROLE_OFFSET UNITYSDK_OFFSET(0xB5CA1B0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_SETUPELATIONEQUIPLIST_OFFSET UNITYSDK_OFFSET(0xB5CAA70)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_SET_ELATIONEQUIPLIST_OFFSET UNITYSDK_OFFSET(0xB5C9EA0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_SET_ELATIONPROPERTYMAP_OFFSET UNITYSDK_OFFSET(0xB5C9EC0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB5CA7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleGridFightTeamTraitData_TypeDefinitionIndex = 51874;

	class BattleGridFightTeamTraitData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* _ElationEquipList_k__BackingField; // 0x10
		::Class_1_50D7577ADBD39E1A* _ElationPropertyMap_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::Class_1_C0163F1F521957F0*>* TraitEffectList; // 0x20
		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_4*>* MemberList; // 0x28
		::System::UInt32 WhiteBoxActiveCount; // 0x30
		::System::UInt32 SubTraitId; // 0x34
		::System::UInt32 LayerLimit; // 0x38
		::System::UInt32 TeamTraitID; // 0x3C
		::System::UInt32 ActiveLayer; // 0x40
		::RPG::GameCore::FixPoint TraitBonusCrossBattleCounter; // 0x48

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

		::System::Void set_ElationEquipList(::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_SET_ELATIONEQUIPLIST_OFFSET))(this, value);
		}

		::Class_1_50D7577ADBD39E1A* get_ElationPropertyMap()
		{
			return ((::Class_1_50D7577ADBD39E1A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GET_ELATIONPROPERTYMAP_OFFSET))(this);
		}

		::System::Void set_ElationPropertyMap(::Class_1_50D7577ADBD39E1A* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_50D7577ADBD39E1A*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_SET_ELATIONPROPERTYMAP_OFFSET))(this, value);
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

		::Class_1_C0163F1F521957F0* GetTraitEffectInfo(::RPG::GameCore::GridFightTraitEffectType effectType)
		{
			return ((::Class_1_C0163F1F521957F0*(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_GETTRAITEFFECTINFO_OFFSET))(this, effectType);
		}

		::System::Void SetupElationEquipList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTTEAMTRAITDATA_SETUPELATIONEQUIPLIST_OFFSET))(this);
		}
	};
}
