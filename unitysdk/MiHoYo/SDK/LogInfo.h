#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_LOGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A997080)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LogInfo_TypeDefinitionIndex = 19639;

	class LogInfo : public ::System::Object
	{
	public:
		::System::String* log_time; // 0x10
		::System::String* region; // 0x18
		::System::Int32 action_id; // 0x20
		::System::String* action_name; // 0x28
		::System::String* c_body; // 0x30
		::System::String* platform_type; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LOGINFO__CTOR_OFFSET))(this);
		}
	};
}
