#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class XboxUserProfileExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_USERPROFILEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE1080)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int UserProfileData_TypeDefinitionIndex = 8564;

	class UserProfileData : public ::System::Object
	{
	public:
		::System::String* userId; // 0x10
		::System::String* displayName; // 0x18
		::MiHoYo::SDK::PC::OS::XboxUserProfileExtension* xbox; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_USERPROFILEDATA__CTOR_OFFSET))(this);
		}
	};
}
