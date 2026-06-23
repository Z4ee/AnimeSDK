#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXSOCIALUPDATEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B531BC0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxSocialUpdateExtension_TypeDefinitionIndex = 20415;

	class XboxSocialUpdateExtension : public ::System::Object
	{
	public:
		::System::String* eventType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXSOCIALUPDATEEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
