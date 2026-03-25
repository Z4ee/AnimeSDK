#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipTrack; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class IGridFightEquipTrackQuickParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0x9810040)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x9810990)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_GET_COSTITEMUIDS_OFFSET UNITYSDK_OFFSET(0x9810BB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_GET_CRAFTRECIPE_OFFSET UNITYSDK_OFFSET(0x9810B90)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x9810BD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_GET_REFTRACK_OFFSET UNITYSDK_OFFSET(0x9810B70)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_SET_COSTITEMUIDS_OFFSET UNITYSDK_OFFSET(0x9810BC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_SET_CRAFTRECIPE_OFFSET UNITYSDK_OFFSET(0x9810BA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_SET_MEMBER_OFFSET UNITYSDK_OFFSET(0x9810BE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_SET_REFTRACK_OFFSET UNITYSDK_OFFSET(0x9810B80)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9810B60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackQuickCraftParam_TypeDefinitionIndex = 53065;

	class GridFightEquipTrackQuickCraftParam : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGridMember* _Member_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _CostItemUIDs_k__BackingField; // 0x18
		::RPG::Client::GridFightEquipTrack* _RefTrack_k__BackingField; // 0x20
		::RPG::Client::GridFightEquipCraftRecipe* _CraftRecipe_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightEquipTrackQuickCraftParam* Create(::RPG::Client::GridFightEquipTrack* track, ::RPG::Client::GridFightEquipCraftRecipe* recipe, ::RPG::Client::GridFightGridMember* member, ::System::Collections::Generic::List_1<::System::UInt32>* costItemUIDs)
		{
			return ((::RPG::Client::GridFightEquipTrackQuickCraftParam*(*)(::RPG::Client::GridFightEquipTrack*, ::RPG::Client::GridFightEquipCraftRecipe*, ::RPG::Client::GridFightGridMember*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_CREATE_OFFSET))(track, recipe, member, costItemUIDs);
		}

		::System::Boolean Equals(::RPG::Client::IGridFightEquipTrackQuickParam* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGridFightEquipTrackQuickParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_EQUALS_OFFSET))(this, other);
		}

		::RPG::Client::GridFightEquipTrack* get_RefTrack()
		{
			return ((::RPG::Client::GridFightEquipTrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_GET_REFTRACK_OFFSET))(this);
		}

		::System::Void set_RefTrack(::RPG::Client::GridFightEquipTrack* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_SET_REFTRACK_OFFSET))(this, value);
		}

		::RPG::Client::GridFightEquipCraftRecipe* get_CraftRecipe()
		{
			return ((::RPG::Client::GridFightEquipCraftRecipe*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_GET_CRAFTRECIPE_OFFSET))(this);
		}

		::System::Void set_CraftRecipe(::RPG::Client::GridFightEquipCraftRecipe* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipCraftRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_SET_CRAFTRECIPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CostItemUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_GET_COSTITEMUIDS_OFFSET))(this);
		}

		::System::Void set_CostItemUIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_SET_COSTITEMUIDS_OFFSET))(this, value);
		}

		::RPG::Client::GridFightGridMember* get_Member()
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_GET_MEMBER_OFFSET))(this);
		}

		::System::Void set_Member(::RPG::Client::GridFightGridMember* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKCRAFTPARAM_SET_MEMBER_OFFSET))(this, value);
		}
	};
}
