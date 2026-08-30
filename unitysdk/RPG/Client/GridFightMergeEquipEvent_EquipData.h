#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTMERGEEQUIPEVENT_EQUIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC2E710)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMergeEquipEvent_EquipData_TypeDefinitionIndex = 65015;

	class GridFightMergeEquipEvent_EquipData : public ::System::Object
	{
	public:
		::System::UInt32 RoleUID; // 0x10
		::System::UInt32 EquipUID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMERGEEQUIPEVENT_EQUIPDATA__CTOR_OFFSET))(this);
		}
	};
}
