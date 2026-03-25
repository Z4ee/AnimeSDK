#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GOTOMAPPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x97BFF10)

namespace RPG::Client
{
	inline static constexpr unsigned int GotoMapParam_TypeDefinitionIndex = 53311;

	class GotoMapParam : public ::System::Object
	{
	public:
		::System::UInt32 SubMissionID; // 0x10
		::System::UInt32 MappingInfoID; // 0x14
		::System::UInt32 EntranceID; // 0x18
		::System::UInt32 LittleGameEntityID; // 0x1C
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 InstanceID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GOTOMAPPARAM__CTOR_OFFSET))(this);
		}
	};
}
