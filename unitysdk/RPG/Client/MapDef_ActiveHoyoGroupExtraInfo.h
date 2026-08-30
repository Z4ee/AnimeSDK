#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_26D1ACAF5EE78B2F;
class Class_1_C9DFE5EE7107C629_22;

#define RPG_CLIENT_MAPDEF_ACTIVEHOYOGROUPEXTRAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B535540)

namespace RPG::Client
{
	inline static constexpr unsigned int MapDef_ActiveHoyoGroupExtraInfo_TypeDefinitionIndex = 62164;

	class MapDef_ActiveHoyoGroupExtraInfo : public ::System::Object
	{
	public:
		::Class_1_26D1ACAF5EE78B2F* InitServerGroupInfo; // 0x10
		::Class_1_C9DFE5EE7107C629_22* RefreshServerGroupInfo; // 0x18
		::System::UInt32 ActiveSubMissionID; // 0x20
		::System::Boolean IsInitActiveHoyoGroup; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF_ACTIVEHOYOGROUPEXTRAINFO__CTOR_OFFSET))(this);
		}
	};
}
