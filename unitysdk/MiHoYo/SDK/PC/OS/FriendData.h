#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class XboxFriendExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_FRIENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A262330)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int FriendData_TypeDefinitionIndex = 8559;

	class FriendData : public ::System::Object
	{
	public:
		::System::String* userId; // 0x10
		::System::String* displayName; // 0x18
		::System::Int32 status; // 0x20
		::MiHoYo::SDK::PC::OS::XboxFriendExtension* xbox; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_FRIENDDATA__CTOR_OFFSET))(this);
		}
	};
}
