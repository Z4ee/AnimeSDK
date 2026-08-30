#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipTrack; }
namespace RPG::Client { class IGridFightEquipTrackQuickParam; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_EQUALS_OFFSET UNITYSDK_OFFSET(0xD189E90)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_GET_REFEQUIPITEMDATA_OFFSET UNITYSDK_OFFSET(0xD18A210)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_GET_REFTRACK_OFFSET UNITYSDK_OFFSET(0xD18A1F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_SET_REFEQUIPITEMDATA_OFFSET UNITYSDK_OFFSET(0xD18A220)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_SET_REFTRACK_OFFSET UNITYSDK_OFFSET(0xD18A200)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xD186C30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackQuickDressParam_TypeDefinitionIndex = 65402;

	class GridFightEquipTrackQuickDressParam : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipItemData* _RefEquipItemData_k__BackingField; // 0x10
		::RPG::Client::GridFightEquipTrack* _RefTrack_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::GridFightEquipTrack* a1, ::RPG::Client::GridFightEquipItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::RPG::Client::IGridFightEquipTrackQuickParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGridFightEquipTrackQuickParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_EQUALS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipTrack* get_RefTrack()
		{
			return ((::RPG::Client::GridFightEquipTrack*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_GET_REFTRACK_OFFSET))(this);
		}

		::System::Void set_RefTrack(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_SET_REFTRACK_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* get_RefEquipItemData()
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_GET_REFEQUIPITEMDATA_OFFSET))(this);
		}

		::System::Void set_RefEquipItemData(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKQUICKDRESSPARAM_SET_REFEQUIPITEMDATA_OFFSET))(this, a1);
		}
	};
}
