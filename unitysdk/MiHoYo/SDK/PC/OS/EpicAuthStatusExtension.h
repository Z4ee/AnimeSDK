#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PC_OS_EPICAUTHSTATUSEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF0FD30)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int EpicAuthStatusExtension_TypeDefinitionIndex = 8531;

	class EpicAuthStatusExtension : public ::System::Object
	{
	public:
		::System::Int32 prevStatus; // 0x10
		::System::Int32 currentStatus; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_EPICAUTHSTATUSEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
