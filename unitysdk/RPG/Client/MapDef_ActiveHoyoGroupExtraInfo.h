#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_26D1ACAF5EE78B2F;
class Class_1_EA3716A61EF929AB_3;

#define RPG_CLIENT_MAPDEF_ACTIVEHOYOGROUPEXTRAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD534FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapDef_ActiveHoyoGroupExtraInfo_TypeDefinitionIndex = 62080;

	class MapDef_ActiveHoyoGroupExtraInfo : public ::System::Object
	{
	public:
		::Class_1_26D1ACAF5EE78B2F* InitServerGroupInfo; // 0x10
		::Class_1_EA3716A61EF929AB_3* RefreshServerGroupInfo; // 0x18
		::System::Boolean IsInitActiveHoyoGroup; // 0x20
		::System::UInt32 ActiveSubMissionID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF_ACTIVEHOYOGROUPEXTRAINFO__CTOR_OFFSET))(this);
		}
	};
}
