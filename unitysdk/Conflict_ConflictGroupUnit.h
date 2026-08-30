#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Conflict_GroupUnitType.h"
#include "unitysdk/RPG/Client/ConflictType.h"
#include "unitysdk/System/Object.h"

class Conflict_ConflictModel;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapDistrict; }
namespace RPG::Client { class MapNpc; }
namespace RPG::Client { class MapProp; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGroupMainMissionIssuePatch; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONFLICT_CONFLICTGROUPUNIT_ADD_1_OFFSET UNITYSDK_OFFSET(0xE014BE0)
#define CONFLICT_CONFLICTGROUPUNIT_ADD_2_OFFSET UNITYSDK_OFFSET(0xE015980)
#define CONFLICT_CONFLICTGROUPUNIT_ADD_OFFSET UNITYSDK_OFFSET(0xE013E70)
#define CONFLICT_CONFLICTGROUPUNIT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE018990)
#define CONFLICT_CONFLICTGROUPUNIT_GET_CONFLICTTYPE_OFFSET UNITYSDK_OFFSET(0xE019580)
#define CONFLICT_CONFLICTGROUPUNIT_GET_CONNECTSUBMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0xE0195E0)
#define CONFLICT_CONFLICTGROUPUNIT_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xE019520)
#define CONFLICT_CONFLICTGROUPUNIT_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xE019540)
#define CONFLICT_CONFLICTGROUPUNIT_GET_NPCID_OFFSET UNITYSDK_OFFSET(0xE019560)
#define CONFLICT_CONFLICTGROUPUNIT_GET_OWNERMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xE019500)
#define CONFLICT_CONFLICTGROUPUNIT_GET_PATCHMISSION_OFFSET UNITYSDK_OFFSET(0xE0195C0)
#define CONFLICT_CONFLICTGROUPUNIT_GET_PATCH_OFFSET UNITYSDK_OFFSET(0xE0195A0)
#define CONFLICT_CONFLICTGROUPUNIT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xE0194E0)
#define CONFLICT_CONFLICTGROUPUNIT_HIDE_OFFSET UNITYSDK_OFFSET(0xE00DA80)
#define CONFLICT_CONFLICTGROUPUNIT_REFRESHCONNECTMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xE017400)
#define CONFLICT_CONFLICTGROUPUNIT_REMOVE_1_OFFSET UNITYSDK_OFFSET(0xE014FE0)
#define CONFLICT_CONFLICTGROUPUNIT_REMOVE_2_OFFSET UNITYSDK_OFFSET(0xE015C40)
#define CONFLICT_CONFLICTGROUPUNIT_REMOVE_OFFSET UNITYSDK_OFFSET(0xE014330)
#define CONFLICT_CONFLICTGROUPUNIT_SET_CONFLICTTYPE_OFFSET UNITYSDK_OFFSET(0xE019590)
#define CONFLICT_CONFLICTGROUPUNIT_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xE019530)
#define CONFLICT_CONFLICTGROUPUNIT_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xE019550)
#define CONFLICT_CONFLICTGROUPUNIT_SET_NPCID_OFFSET UNITYSDK_OFFSET(0xE019570)
#define CONFLICT_CONFLICTGROUPUNIT_SET_OWNERMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xE019510)
#define CONFLICT_CONFLICTGROUPUNIT_SET_PATCHMISSION_OFFSET UNITYSDK_OFFSET(0xE0195D0)
#define CONFLICT_CONFLICTGROUPUNIT_SET_PATCH_OFFSET UNITYSDK_OFFSET(0xE0195B0)
#define CONFLICT_CONFLICTGROUPUNIT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xE0194F0)
#define CONFLICT_CONFLICTGROUPUNIT_SHOW_OFFSET UNITYSDK_OFFSET(0xE00DB80)
#define CONFLICT_CONFLICTGROUPUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0xE00BD00)
#define CONFLICT_CONFLICTGROUPUNIT__ISENTITYSHOW_OFFSET UNITYSDK_OFFSET(0xE019C20)
#define CONFLICT_CONFLICTGROUPUNIT__TRYHIDEENTITY_OFFSET UNITYSDK_OFFSET(0xE0195F0)
#define CONFLICT_CONFLICTGROUPUNIT__TRYSHOWENTITY_OFFSET UNITYSDK_OFFSET(0xE019930)

inline static constexpr unsigned int Conflict_ConflictGroupUnit_TypeDefinitionIndex = 47611;

class Conflict_ConflictGroupUnit : public ::System::Object
{
public:
	::RPG::GameCore::LevelGroupMainMissionIssuePatch* _Patch_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* GroupInitConflictIDs; // 0x18
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* _IncludingEntities; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* _ConnectSubMissionIDList_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* ConflictIDs; // 0x30
	::RPG::Client::ConflictType _conflictType_k__BackingField; // 0x38
	::System::UInt32 _NpcID_k__BackingField; // 0x3C
	::Conflict_GroupUnitType _type_k__BackingField; // 0x40
	::System::UInt32 _PatchMission_k__BackingField; // 0x44
	::System::Boolean show; // 0x48
	::System::UInt32 _OwnerMainMissionID_k__BackingField; // 0x4C
	::System::UInt32 _GroupID_k__BackingField; // 0x50
	::System::UInt32 _FloorID_k__BackingField; // 0x54

	::System::Void _ctor(::Conflict_GroupUnitType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Il2CppArray<::System::UInt32>* a4, ::System::UInt32 a5, ::System::Collections::Generic::List_1<::System::UInt32>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Conflict_GroupUnitType, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Conflict_GroupUnitType get_type()
	{
		return ((::Conflict_GroupUnitType(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_type(::Conflict_GroupUnitType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Conflict_GroupUnitType))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_TYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_OwnerMainMissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_OWNERMAINMISSIONID_OFFSET))(this);
	}

	::System::Void set_OwnerMainMissionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_OWNERMAINMISSIONID_OFFSET))(this, a1);
	}

	::System::UInt32 get_FloorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_FLOORID_OFFSET))(this);
	}

	::System::Void set_FloorID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_FLOORID_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_GROUPID_OFFSET))(this, a1);
	}

	::System::UInt32 get_NpcID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_NPCID_OFFSET))(this);
	}

	::System::Void set_NpcID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_NPCID_OFFSET))(this, a1);
	}

	::RPG::Client::ConflictType get_conflictType()
	{
		return ((::RPG::Client::ConflictType(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_CONFLICTTYPE_OFFSET))(this);
	}

	::System::Void set_conflictType(::RPG::Client::ConflictType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ConflictType))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_CONFLICTTYPE_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelGroupMainMissionIssuePatch* get_Patch()
	{
		return ((::RPG::GameCore::LevelGroupMainMissionIssuePatch*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_PATCH_OFFSET))(this);
	}

	::System::Void set_Patch(::RPG::GameCore::LevelGroupMainMissionIssuePatch* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGroupMainMissionIssuePatch*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_PATCH_OFFSET))(this, a1);
	}

	::System::UInt32 get_PatchMission()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_PATCHMISSION_OFFSET))(this);
	}

	::System::Void set_PatchMission(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_PATCHMISSION_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_ConnectSubMissionIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_CONNECTSUBMISSIONIDLIST_OFFSET))(this);
	}

	::System::Void Add(::RPG::Client::MapNpc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_ADD_OFFSET))(this, a1);
	}

	::System::Void Add_1(::RPG::Client::MapProp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_ADD_1_OFFSET))(this, a1);
	}

	::System::Void Add_2(::RPG::Client::MapDistrict* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_ADD_2_OFFSET))(this, a1);
	}

	::System::Void Remove(::RPG::Client::MapNpc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_REMOVE_OFFSET))(this, a1);
	}

	::System::Void Remove_1(::RPG::Client::MapProp* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_REMOVE_1_OFFSET))(this, a1);
	}

	::System::Void Remove_2(::RPG::Client::MapDistrict* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_REMOVE_2_OFFSET))(this, a1);
	}

	::System::Void Show()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SHOW_OFFSET))(this);
	}

	::System::Void Hide(::RPG::Client::ConflictType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ConflictType))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_HIDE_OFFSET))(this, a1);
	}

	::System::Void RefreshConnectMainMissionID(::RPG::Client::MapDef* a1, ::System::Collections::Generic::List_1<::Conflict_ConflictModel*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::System::Collections::Generic::List_1<::Conflict_ConflictModel*>*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_REFRESHCONNECTMAINMISSIONID_OFFSET))(this, a1, a2);
	}

	static ::System::Void _TryHideEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT__TRYHIDEENTITY_OFFSET))(a1);
	}

	static ::System::Void _TryShowEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT__TRYSHOWENTITY_OFFSET))(a1);
	}

	static ::System::Boolean _IsEntityShow(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT__ISENTITYSHOW_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_DISPOSE_OFFSET))(this);
	}
};
