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

#define CONFLICT_CONFLICTGROUPUNIT_ADD_1_OFFSET UNITYSDK_OFFSET(0xA6F16D0)
#define CONFLICT_CONFLICTGROUPUNIT_ADD_2_OFFSET UNITYSDK_OFFSET(0xA6F2160)
#define CONFLICT_CONFLICTGROUPUNIT_ADD_OFFSET UNITYSDK_OFFSET(0xA6F0BE0)
#define CONFLICT_CONFLICTGROUPUNIT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6F4E00)
#define CONFLICT_CONFLICTGROUPUNIT_GET_CONFLICTTYPE_OFFSET UNITYSDK_OFFSET(0xA6F5AE0)
#define CONFLICT_CONFLICTGROUPUNIT_GET_CONNECTSUBMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0xA6F5B40)
#define CONFLICT_CONFLICTGROUPUNIT_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xA6F5A80)
#define CONFLICT_CONFLICTGROUPUNIT_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA6F5AA0)
#define CONFLICT_CONFLICTGROUPUNIT_GET_NPCID_OFFSET UNITYSDK_OFFSET(0xA6F5AC0)
#define CONFLICT_CONFLICTGROUPUNIT_GET_OWNERMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xA6F5A60)
#define CONFLICT_CONFLICTGROUPUNIT_GET_PATCHMISSION_OFFSET UNITYSDK_OFFSET(0xA6F5B20)
#define CONFLICT_CONFLICTGROUPUNIT_GET_PATCH_OFFSET UNITYSDK_OFFSET(0xA6F5B00)
#define CONFLICT_CONFLICTGROUPUNIT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA6F5A40)
#define CONFLICT_CONFLICTGROUPUNIT_HIDE_OFFSET UNITYSDK_OFFSET(0xA6EAF90)
#define CONFLICT_CONFLICTGROUPUNIT_REFRESHCONNECTMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xA6F37C0)
#define CONFLICT_CONFLICTGROUPUNIT_REMOVE_1_OFFSET UNITYSDK_OFFSET(0xA6F1A20)
#define CONFLICT_CONFLICTGROUPUNIT_REMOVE_2_OFFSET UNITYSDK_OFFSET(0xA6F2420)
#define CONFLICT_CONFLICTGROUPUNIT_REMOVE_OFFSET UNITYSDK_OFFSET(0xA6F0FD0)
#define CONFLICT_CONFLICTGROUPUNIT_SET_CONFLICTTYPE_OFFSET UNITYSDK_OFFSET(0xA6F5AF0)
#define CONFLICT_CONFLICTGROUPUNIT_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xA6F5A90)
#define CONFLICT_CONFLICTGROUPUNIT_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA6F5AB0)
#define CONFLICT_CONFLICTGROUPUNIT_SET_NPCID_OFFSET UNITYSDK_OFFSET(0xA6F5AD0)
#define CONFLICT_CONFLICTGROUPUNIT_SET_OWNERMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xA6F5A70)
#define CONFLICT_CONFLICTGROUPUNIT_SET_PATCHMISSION_OFFSET UNITYSDK_OFFSET(0xA6F5B30)
#define CONFLICT_CONFLICTGROUPUNIT_SET_PATCH_OFFSET UNITYSDK_OFFSET(0xA6F5B10)
#define CONFLICT_CONFLICTGROUPUNIT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xA6F5A50)
#define CONFLICT_CONFLICTGROUPUNIT_SHOW_OFFSET UNITYSDK_OFFSET(0xA6EB0B0)
#define CONFLICT_CONFLICTGROUPUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0xA6E8810)
#define CONFLICT_CONFLICTGROUPUNIT__ISENTITYSHOW_OFFSET UNITYSDK_OFFSET(0xA6F6120)
#define CONFLICT_CONFLICTGROUPUNIT__TRYHIDEENTITY_OFFSET UNITYSDK_OFFSET(0xA6F5B50)
#define CONFLICT_CONFLICTGROUPUNIT__TRYSHOWENTITY_OFFSET UNITYSDK_OFFSET(0xA6F5E60)

inline static constexpr unsigned int Conflict_ConflictGroupUnit_TypeDefinitionIndex = 38066;

class Conflict_ConflictGroupUnit : public ::System::Object
{
public:
	::RPG::GameCore::LevelGroupMainMissionIssuePatch* _Patch_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* GroupInitConflictIDs; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* ConflictIDs; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* _ConnectSubMissionIDList_k__BackingField; // 0x28
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* _IncludingEntities; // 0x30
	::RPG::Client::ConflictType _conflictType_k__BackingField; // 0x38
	::System::Boolean show; // 0x3C
	::Conflict_GroupUnitType _type_k__BackingField; // 0x40
	::System::UInt32 _OwnerMainMissionID_k__BackingField; // 0x44
	::System::UInt32 _GroupID_k__BackingField; // 0x48
	::System::UInt32 _FloorID_k__BackingField; // 0x4C
	::System::UInt32 _NpcID_k__BackingField; // 0x50
	::System::UInt32 _PatchMission_k__BackingField; // 0x54

	::System::Void _ctor(::Conflict_GroupUnitType unitType, ::System::UInt32 groupID, ::System::UInt32 ownerMainMission, ::Il2CppArray<::System::UInt32>* groupInitConflictIDs, ::System::UInt32 floorID, ::System::Collections::Generic::List_1<::System::UInt32>* connectSubMissionIDList)
	{
		return ((::System::Void(*)(::PVOID, ::Conflict_GroupUnitType, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT__CTOR_OFFSET))(this, unitType, groupID, ownerMainMission, groupInitConflictIDs, floorID, connectSubMissionIDList);
	}

	::Conflict_GroupUnitType get_type()
	{
		return ((::Conflict_GroupUnitType(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_type(::Conflict_GroupUnitType value)
	{
		return ((::System::Void(*)(::PVOID, ::Conflict_GroupUnitType))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_TYPE_OFFSET))(this, value);
	}

	::System::UInt32 get_OwnerMainMissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_OWNERMAINMISSIONID_OFFSET))(this);
	}

	::System::Void set_OwnerMainMissionID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_OWNERMAINMISSIONID_OFFSET))(this, value);
	}

	::System::UInt32 get_FloorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_FLOORID_OFFSET))(this);
	}

	::System::Void set_FloorID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_FLOORID_OFFSET))(this, value);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_GROUPID_OFFSET))(this, value);
	}

	::System::UInt32 get_NpcID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_NPCID_OFFSET))(this);
	}

	::System::Void set_NpcID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_NPCID_OFFSET))(this, value);
	}

	::RPG::Client::ConflictType get_conflictType()
	{
		return ((::RPG::Client::ConflictType(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_CONFLICTTYPE_OFFSET))(this);
	}

	::System::Void set_conflictType(::RPG::Client::ConflictType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ConflictType))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_CONFLICTTYPE_OFFSET))(this, value);
	}

	::RPG::GameCore::LevelGroupMainMissionIssuePatch* get_Patch()
	{
		return ((::RPG::GameCore::LevelGroupMainMissionIssuePatch*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_PATCH_OFFSET))(this);
	}

	::System::Void set_Patch(::RPG::GameCore::LevelGroupMainMissionIssuePatch* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGroupMainMissionIssuePatch*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_PATCH_OFFSET))(this, value);
	}

	::System::UInt32 get_PatchMission()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_PATCHMISSION_OFFSET))(this);
	}

	::System::Void set_PatchMission(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SET_PATCHMISSION_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_ConnectSubMissionIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_GET_CONNECTSUBMISSIONIDLIST_OFFSET))(this);
	}

	::System::Void Add(::RPG::Client::MapNpc* npc)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_ADD_OFFSET))(this, npc);
	}

	::System::Void Add_1(::RPG::Client::MapProp* prop)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_ADD_1_OFFSET))(this, prop);
	}

	::System::Void Add_2(::RPG::Client::MapDistrict* district)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_ADD_2_OFFSET))(this, district);
	}

	::System::Void Remove(::RPG::Client::MapNpc* npc)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_REMOVE_OFFSET))(this, npc);
	}

	::System::Void Remove_1(::RPG::Client::MapProp* prop)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_REMOVE_1_OFFSET))(this, prop);
	}

	::System::Void Remove_2(::RPG::Client::MapDistrict* district)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_REMOVE_2_OFFSET))(this, district);
	}

	::System::Void Show()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_SHOW_OFFSET))(this);
	}

	::System::Void Hide(::RPG::Client::ConflictType type)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ConflictType))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_HIDE_OFFSET))(this, type);
	}

	::System::Void RefreshConnectMainMissionID(::RPG::Client::MapDef* mapdef, ::System::Collections::Generic::List_1<::Conflict_ConflictModel*>* sortedModels)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::System::Collections::Generic::List_1<::Conflict_ConflictModel*>*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_REFRESHCONNECTMAINMISSIONID_OFFSET))(this, mapdef, sortedModels);
	}

	static ::System::Void _TryHideEntity(::RPG::GameCore::GameEntity* entity)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT__TRYHIDEENTITY_OFFSET))(entity);
	}

	static ::System::Void _TryShowEntity(::RPG::GameCore::GameEntity* entity)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT__TRYSHOWENTITY_OFFSET))(entity);
	}

	static ::System::Boolean _IsEntityShow(::RPG::GameCore::GameEntity* entity)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT__ISENTITYSHOW_OFFSET))(entity);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CONFLICTGROUPUNIT_DISPOSE_OFFSET))(this);
	}
};
