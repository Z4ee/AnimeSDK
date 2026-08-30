#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMICONUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC5F7B80)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int LiveRoomIconUiData_TypeDefinitionIndex = 75128;

	class LiveRoomIconUiData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 Id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMICONUIDATA__CTOR_OFFSET))(this);
		}
	};
}
