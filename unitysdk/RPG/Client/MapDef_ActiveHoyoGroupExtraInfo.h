#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EA3716A61EF929AB_1;
class Class_1_FA54B6DFA559D20B;

#define RPG_CLIENT_MAPDEF_ACTIVEHOYOGROUPEXTRAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9AED030)

namespace RPG::Client
{
	inline static constexpr unsigned int MapDef_ActiveHoyoGroupExtraInfo_TypeDefinitionIndex = 50414;

	class MapDef_ActiveHoyoGroupExtraInfo : public ::System::Object
	{
	public:
		::Class_1_EA3716A61EF929AB_1* RefreshServerGroupInfo; // 0x10
		::Class_1_FA54B6DFA559D20B* InitServerGroupInfo; // 0x18
		::System::UInt32 ActiveSubMissionID; // 0x20
		::System::Boolean IsInitActiveHoyoGroup; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF_ACTIVEHOYOGROUPEXTRAINFO__CTOR_OFFSET))(this);
		}
	};
}
