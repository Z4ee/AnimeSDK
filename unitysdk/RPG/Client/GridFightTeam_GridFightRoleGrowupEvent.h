#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTROLEGROWUPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5EA430)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_GridFightRoleGrowupEvent_TypeDefinitionIndex = 62234;

	class GridFightTeam_GridFightRoleGrowupEvent : public ::System::Object
	{
	public:
		::System::UInt32 PosIndex; // 0x10
		::System::UInt32 UID; // 0x14
		::System::UInt32 Level; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRIDFIGHTROLEGROWUPEVENT__CTOR_OFFSET))(this);
		}
	};
}
