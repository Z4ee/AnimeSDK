#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipTrack; }
namespace RPG::Client { class IGridFightEquipTrackQuickParam; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x9810870)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_GET_REFEQUIPITEMDATA_OFFSET UNITYSDK_OFFSET(0x9810C10)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_GET_REFTRACK_OFFSET UNITYSDK_OFFSET(0x9810BF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_SET_REFEQUIPITEMDATA_OFFSET UNITYSDK_OFFSET(0x9810C20)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_SET_REFTRACK_OFFSET UNITYSDK_OFFSET(0x9810C00)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x980E6A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackQuickDressParam_TypeDefinitionIndex = 53066;

	class GridFightEquipTrackQuickDressParam : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipItemData* _RefEquipItemData_k__BackingField; // 0x10
		::RPG::Client::GridFightEquipTrack* _RefTrack_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::GridFightEquipTrack* track, ::RPG::Client::GridFightEquipItemData* equipItemData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM__CTOR_OFFSET))(this, track, equipItemData);
		}

		::System::Boolean Equals(::RPG::Client::IGridFightEquipTrackQuickParam* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGridFightEquipTrackQuickParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_EQUALS_OFFSET))(this, other);
		}

		::RPG::Client::GridFightEquipTrack* get_RefTrack()
		{
			return ((::RPG::Client::GridFightEquipTrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_GET_REFTRACK_OFFSET))(this);
		}

		::System::Void set_RefTrack(::RPG::Client::GridFightEquipTrack* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_SET_REFTRACK_OFFSET))(this, value);
		}

		::RPG::Client::GridFightEquipItemData* get_RefEquipItemData()
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_GET_REFEQUIPITEMDATA_OFFSET))(this);
		}

		::System::Void set_RefEquipItemData(::RPG::Client::GridFightEquipItemData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_SET_REFEQUIPITEMDATA_OFFSET))(this, value);
		}
	};
}
