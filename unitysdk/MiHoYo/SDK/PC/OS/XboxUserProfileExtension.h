#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXUSERPROFILEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE12B0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxUserProfileExtension_TypeDefinitionIndex = 8608;

	class XboxUserProfileExtension : public ::System::Object
	{
	public:
		::System::String* gamertag; // 0x10
		::System::String* gamerscore; // 0x18
		::System::String* appDisplayName; // 0x20
		::System::String* appDisplayPictureResizeUri; // 0x28
		::System::String* gameDisplayName; // 0x30
		::System::String* gameDisplayPictureResizeUri; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXUSERPROFILEEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
