#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EA3716A61EF929AB;
class Class_1_F64CEA2EBA77404D;

#define RPG_CLIENT_MAPDEF_ACTIVEHOYOGROUPEXTRAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBEC8240)

namespace RPG::Client
{
	inline static constexpr unsigned int MapDef_ActiveHoyoGroupExtraInfo_TypeDefinitionIndex = 58063;

	class MapDef_ActiveHoyoGroupExtraInfo : public ::System::Object
	{
	public:
		::Class_1_EA3716A61EF929AB* RefreshServerGroupInfo; // 0x10
		::Class_1_F64CEA2EBA77404D* InitServerGroupInfo; // 0x18
		::System::UInt32 ActiveSubMissionID; // 0x20
		::System::Boolean IsInitActiveHoyoGroup; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF_ACTIVEHOYOGROUPEXTRAINFO__CTOR_OFFSET))(this);
		}
	};
}
