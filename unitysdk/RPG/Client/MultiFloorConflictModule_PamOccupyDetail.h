#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MULTIFLOORCONFLICTMODULE_PAMOCCUPYDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x19627EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiFloorConflictModule_PamOccupyDetail_TypeDefinitionIndex = 66341;

	class MultiFloorConflictModule_PamOccupyDetail : public ::System::Object
	{
	public:
		::System::UInt32 MainMissionID; // 0x10
		::System::Boolean IsOccupy; // 0x14
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 FloorID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIFLOORCONFLICTMODULE_PAMOCCUPYDETAIL__CTOR_OFFSET))(this);
		}
	};
}
