#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/System/Object.h"

class Class_1_CCB3A003D9DADECF;
namespace RPG::Client { class ChenLingBattleSoldierConfig; }
namespace RPG::Client { class ChenLingBattleSoldierLevelConfig; }
namespace RPG::Client::ChenLingBattle { class Enchant; }
namespace RPG::Client::ChenLingBattle { class Soldier; }
namespace RPG::GameCore { class ChenLingBattlePresetArmyConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_67AC58C55B729E15_GET_ATKSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x16985480)
#define CLASS_1_67AC58C55B729E15_GET_ENHANCEMENTS_OFFSET UNITYSDK_OFFSET(0x169854E0)
#define CLASS_1_67AC58C55B729E15_GET_EXTRAADDSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x169854A0)
#define CLASS_1_67AC58C55B729E15_GET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0x16985350)
#define CLASS_1_67AC58C55B729E15_GET_ISPROMOTED_OFFSET UNITYSDK_OFFSET(0x169854C0)
#define CLASS_1_67AC58C55B729E15_GET_ISRANGEATTACK_OFFSET UNITYSDK_OFFSET(0x16985440)
#define CLASS_1_67AC58C55B729E15_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x16985260)
#define CLASS_1_67AC58C55B729E15_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x16985420)
#define CLASS_1_67AC58C55B729E15_GET_OVERRIDEMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x16985500)
#define CLASS_1_67AC58C55B729E15_GET_RECOMMENDEDGRIDINDEX_OFFSET UNITYSDK_OFFSET(0x16985540)
#define CLASS_1_67AC58C55B729E15_GET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x16985460)
#define CLASS_1_67AC58C55B729E15_GET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x16985240)
#define CLASS_1_67AC58C55B729E15_GET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x169852D0)
#define CLASS_1_67AC58C55B729E15_GET_UNITPROFILERLIST_OFFSET UNITYSDK_OFFSET(0x16985520)
#define CLASS_1_67AC58C55B729E15_METHOD_1_1C445AC4C0C0F33D_OFFSET UNITYSDK_OFFSET(0x16985560)
#define CLASS_1_67AC58C55B729E15_METHOD_1_26F482D984C59839_OFFSET UNITYSDK_OFFSET(0x169852F0)
#define CLASS_1_67AC58C55B729E15_METHOD_1_30B0B28FE646BC73_OFFSET UNITYSDK_OFFSET(0x16985370)
#define CLASS_1_67AC58C55B729E15_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16984450)
#define CLASS_1_67AC58C55B729E15_METHOD_1_3172614BDDB49322_OFFSET UNITYSDK_OFFSET(0x16984BD0)
#define CLASS_1_67AC58C55B729E15_METHOD_1_56EA3B31E78F4789_OFFSET UNITYSDK_OFFSET(0x16984E00)
#define CLASS_1_67AC58C55B729E15_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x169830E0)
#define CLASS_1_67AC58C55B729E15_METHOD_1_908CDE0211A15A5D_OFFSET UNITYSDK_OFFSET(0x169832F0)
#define CLASS_1_67AC58C55B729E15_METHOD_1_96EEEACF1AD6A95F_OFFSET UNITYSDK_OFFSET(0x16984920)
#define CLASS_1_67AC58C55B729E15_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x16985280)
#define CLASS_1_67AC58C55B729E15_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x16984400)
#define CLASS_1_67AC58C55B729E15_METHOD_1_B45F6B6D5A1C7E81_OFFSET UNITYSDK_OFFSET(0x16985140)
#define CLASS_1_67AC58C55B729E15_METHOD_1_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0x16984B40)
#define CLASS_1_67AC58C55B729E15_METHOD_1_E899E0851F0B5B3E_OFFSET UNITYSDK_OFFSET(0x16982D30)
#define CLASS_1_67AC58C55B729E15_METHOD_1_EDB6701F9DBE9544_OFFSET UNITYSDK_OFFSET(0x169851F0)
#define CLASS_1_67AC58C55B729E15_SET_ATKSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x16985490)
#define CLASS_1_67AC58C55B729E15_SET_ENHANCEMENTS_OFFSET UNITYSDK_OFFSET(0x169854F0)
#define CLASS_1_67AC58C55B729E15_SET_EXTRAADDSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x169854B0)
#define CLASS_1_67AC58C55B729E15_SET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0x16985360)
#define CLASS_1_67AC58C55B729E15_SET_ISPROMOTED_OFFSET UNITYSDK_OFFSET(0x169854D0)
#define CLASS_1_67AC58C55B729E15_SET_ISRANGEATTACK_OFFSET UNITYSDK_OFFSET(0x16985450)
#define CLASS_1_67AC58C55B729E15_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x16985270)
#define CLASS_1_67AC58C55B729E15_SET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x16985430)
#define CLASS_1_67AC58C55B729E15_SET_OVERRIDEMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x16985510)
#define CLASS_1_67AC58C55B729E15_SET_RECOMMENDEDGRIDINDEX_OFFSET UNITYSDK_OFFSET(0x16985550)
#define CLASS_1_67AC58C55B729E15_SET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x16985470)
#define CLASS_1_67AC58C55B729E15_SET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x16985250)
#define CLASS_1_67AC58C55B729E15_SET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x169852E0)
#define CLASS_1_67AC58C55B729E15_SET_UNITPROFILERLIST_OFFSET UNITYSDK_OFFSET(0x16985530)
#define CLASS_1_67AC58C55B729E15__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16984510)
#define CLASS_1_67AC58C55B729E15__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16984C30)
#define CLASS_1_67AC58C55B729E15__CTOR_OFFSET UNITYSDK_OFFSET(0x16982DF0)

inline static constexpr unsigned int Class_1_67AC58C55B729E15_TypeDefinitionIndex = 58700;

class Class_1_67AC58C55B729E15 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* _SkillIDList_k__BackingField; // 0x10
	::System::String* _OverrideMaterialPath_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::Class_1_CCB3A003D9DADECF*>* _UnitProfilerList_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* _ExtraAddSkillIDList_k__BackingField; // 0x28
	::Il2CppArray<::System::UInt32>* _AtkSkillIDList_k__BackingField; // 0x30
	::System::String* _ModelPath_k__BackingField; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _Enhancements_k__BackingField; // 0x40
	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType _TeamType_k__BackingField; // 0x48
	::System::Int32 _RecommendedGridIndex_k__BackingField; // 0x4C
	::System::UInt32 _Level_k__BackingField; // 0x50
	::System::Boolean _IsRangeAttack_k__BackingField; // 0x54
	::System::Boolean _IsPromoted_k__BackingField; // 0x55
	::System::UInt32 _SoldierID_k__BackingField; // 0x58
	::System::UInt32 Field_1_13; // 0x5C
	::RPG::GameCore::ChenLingBattleInitPosition _InitPosition_k__BackingField; // 0x60

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Enchant*>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Enchant*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _ctor_1(::RPG::Client::ChenLingBattle::Soldier* a1, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::Soldier*, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15__CTOR_2_OFFSET))(this, a1, a2);
	}

	static ::Class_1_67AC58C55B729E15* Method_1_E899E0851F0B5B3E(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a4)
	{
		return ((::Class_1_67AC58C55B729E15*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_E899E0851F0B5B3E_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_67AC58C55B729E15* Method_1_908CDE0211A15A5D(::RPG::GameCore::ChenLingBattlePresetArmyConfig* a1, ::System::Boolean a2)
	{
		return ((::Class_1_67AC58C55B729E15*(*)(::RPG::GameCore::ChenLingBattlePresetArmyConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_908CDE0211A15A5D_OFFSET))(a1, a2);
	}

	::System::Void Method_1_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_D77F7476BCD66744_OFFSET))(this, a1);
	}

	::System::Void Method_1_3172614BDDB49322(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_3172614BDDB49322_OFFSET))(this, a1);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_1_96EEEACF1AD6A95F(::RPG::Client::ChenLingBattle::Soldier* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::Soldier*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_96EEEACF1AD6A95F_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_56EA3B31E78F4789(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_56EA3B31E78F4789_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDB6701F9DBE9544(::RPG::GameCore::ChenLingBattleInitPosition a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingBattleInitPosition))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_EDB6701F9DBE9544_OFFSET))(this, a1);
	}

	::System::UInt32 get_SoldierID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_SOLDIERID_OFFSET))(this);
	}

	::System::Void set_SoldierID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_SOLDIERID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType get_TeamType()
	{
		return ((::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_TEAMTYPE_OFFSET))(this);
	}

	::System::Void set_TeamType(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_TEAMTYPE_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChenLingBattleInitPosition Method_1_26F482D984C59839()
	{
		return ((::RPG::GameCore::ChenLingBattleInitPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_26F482D984C59839_OFFSET))(this);
	}

	::RPG::GameCore::ChenLingBattleInitPosition get_InitPosition()
	{
		return ((::RPG::GameCore::ChenLingBattleInitPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_INITPOSITION_OFFSET))(this);
	}

	::System::Void set_InitPosition(::RPG::GameCore::ChenLingBattleInitPosition a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingBattleInitPosition))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_INITPOSITION_OFFSET))(this, a1);
	}

	::RPG::Client::ChenLingBattleSoldierConfig* Method_1_B45F6B6D5A1C7E81()
	{
		return ((::RPG::Client::ChenLingBattleSoldierConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_B45F6B6D5A1C7E81_OFFSET))(this);
	}

	::RPG::Client::ChenLingBattleSoldierLevelConfig* Method_1_30B0B28FE646BC73()
	{
		return ((::RPG::Client::ChenLingBattleSoldierLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_30B0B28FE646BC73_OFFSET))(this);
	}

	::System::String* get_ModelPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_MODELPATH_OFFSET))(this);
	}

	::System::Void set_ModelPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_MODELPATH_OFFSET))(this, a1);
	}

	::System::Boolean get_IsRangeAttack()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_ISRANGEATTACK_OFFSET))(this);
	}

	::System::Void set_IsRangeAttack(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_ISRANGEATTACK_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_SkillIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_SKILLIDLIST_OFFSET))(this);
	}

	::System::Void set_SkillIDList(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_SKILLIDLIST_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_AtkSkillIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_ATKSKILLIDLIST_OFFSET))(this);
	}

	::System::Void set_AtkSkillIDList(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_ATKSKILLIDLIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_ExtraAddSkillIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_EXTRAADDSKILLIDLIST_OFFSET))(this);
	}

	::System::Void set_ExtraAddSkillIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_EXTRAADDSKILLIDLIST_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPromoted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_ISPROMOTED_OFFSET))(this);
	}

	::System::Void set_IsPromoted(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_ISPROMOTED_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_Enhancements()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_ENHANCEMENTS_OFFSET))(this);
	}

	::System::Void set_Enhancements(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_ENHANCEMENTS_OFFSET))(this, a1);
	}

	::System::String* get_OverrideMaterialPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_OVERRIDEMATERIALPATH_OFFSET))(this);
	}

	::System::Void set_OverrideMaterialPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_OVERRIDEMATERIALPATH_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_CCB3A003D9DADECF*>* get_UnitProfilerList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_CCB3A003D9DADECF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_UNITPROFILERLIST_OFFSET))(this);
	}

	::System::Void set_UnitProfilerList(::System::Collections::Generic::List_1<::Class_1_CCB3A003D9DADECF*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_CCB3A003D9DADECF*>*))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_UNITPROFILERLIST_OFFSET))(this, a1);
	}

	::System::Int32 get_RecommendedGridIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_GET_RECOMMENDEDGRIDINDEX_OFFSET))(this);
	}

	::System::Void set_RecommendedGridIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_SET_RECOMMENDEDGRIDINDEX_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_1C445AC4C0C0F33D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67AC58C55B729E15_METHOD_1_1C445AC4C0C0F33D_OFFSET))(this);
	}
};
