#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/UniverseData_SubNavMapCreateState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap { class ISubNavMap; }
namespace RPG::GameCore { class LevelFloorBakedSubmapInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_SAMEFLOORSUBNAVMAPBUILDNODE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0xD97A1B0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_SAMEFLOORSUBNAVMAPBUILDNODE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD97A140)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_SAMEFLOORSUBNAVMAPBUILDNODE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xD97A190)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_SAMEFLOORSUBNAVMAPBUILDNODE_GET_PARENT_OFFSET UNITYSDK_OFFSET(0xD97A150)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_SAMEFLOORSUBNAVMAPBUILDNODE_GET_STATE_OFFSET UNITYSDK_OFFSET(0xD97A170)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_SAMEFLOORSUBNAVMAPBUILDNODE_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xD97A1A0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_SAMEFLOORSUBNAVMAPBUILDNODE_SET_PARENT_OFFSET UNITYSDK_OFFSET(0xD97A160)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_SAMEFLOORSUBNAVMAPBUILDNODE_SET_STATE_OFFSET UNITYSDK_OFFSET(0xD97A180)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA_SAMEFLOORSUBNAVMAPBUILDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xD97A100)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int UniverseData_SameFloorSubNavMapBuildNode_TypeDefinitionIndex = 74511;

	class UniverseData_SameFloorSubNavMapBuildNode : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelFloorBakedSubmapInfo* _Config_k__BackingField; // 0x10
		::RPG::Client::NavMap::UniverseData_SameFloorSubNavMapBuildNode* _Parent_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::NavMap::ISubNavMap*>* _Children_k__BackingField; // 0x20
		::RPG::Client::NavMap::ISubNavMap* _Instance_k__BackingField; // 0x28
		::RPG::Client::NavMap::UniverseData_SubNavMapCreateState _State_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::GameCore::LevelFloorBakedSubmapInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelFloorBakedSubmapInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_SAMEFLOORSUBNAVMAPBUILDNODE__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelFloorBakedSubmapInfo* get_Config()
		{
			return ((::RPG::GameCore::LevelFloorBakedSubmapInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_SAMEFLOORSUBNAVMAPBUILDNODE_GET_CONFIG_OFFSET))(this);
		}

		::RPG::Client::NavMap::UniverseData_SameFloorSubNavMapBuildNode* get_Parent()
		{
			return ((::RPG::Client::NavMap::UniverseData_SameFloorSubNavMapBuildNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_SAMEFLOORSUBNAVMAPBUILDNODE_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_Parent(::RPG::Client::NavMap::UniverseData_SameFloorSubNavMapBuildNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::UniverseData_SameFloorSubNavMapBuildNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_SAMEFLOORSUBNAVMAPBUILDNODE_SET_PARENT_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::UniverseData_SubNavMapCreateState get_State()
		{
			return ((::RPG::Client::NavMap::UniverseData_SubNavMapCreateState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_SAMEFLOORSUBNAVMAPBUILDNODE_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::NavMap::UniverseData_SubNavMapCreateState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::UniverseData_SubNavMapCreateState))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_SAMEFLOORSUBNAVMAPBUILDNODE_SET_STATE_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::ISubNavMap* get_Instance()
		{
			return ((::RPG::Client::NavMap::ISubNavMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_SAMEFLOORSUBNAVMAPBUILDNODE_GET_INSTANCE_OFFSET))(this);
		}

		::System::Void set_Instance(::RPG::Client::NavMap::ISubNavMap* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ISubNavMap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_SAMEFLOORSUBNAVMAPBUILDNODE_SET_INSTANCE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::NavMap::ISubNavMap*>* get_Children()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::ISubNavMap*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA_SAMEFLOORSUBNAVMAPBUILDNODE_GET_CHILDREN_OFFSET))(this);
		}
	};
}
