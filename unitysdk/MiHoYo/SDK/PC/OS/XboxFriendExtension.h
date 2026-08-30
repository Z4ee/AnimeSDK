#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PC_OS_XBOXFRIENDEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA38E40)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxFriendExtension_TypeDefinitionIndex = 8605;

	class XboxFriendExtension : public ::System::Object
	{
	public:
		::System::Int32 presenceState; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXFRIENDEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
