#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXAUTHTOKENEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD57E0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxAuthTokenExtension_TypeDefinitionIndex = 20753;

	class XboxAuthTokenExtension : public ::System::Object
	{
	public:
		::System::String* signature; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXAUTHTOKENEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
