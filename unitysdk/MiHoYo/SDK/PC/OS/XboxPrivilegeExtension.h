#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PC_OS_XBOXPRIVILEGEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE1200)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxPrivilegeExtension_TypeDefinitionIndex = 8630;

	class XboxPrivilegeExtension : public ::System::Object
	{
	public:
		::System::Boolean hasPrivilege; // 0x10
		::System::Boolean resolved; // 0x11
		::System::Int32 privilege; // 0x14
		::System::Int32 denyReason; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXPRIVILEGEEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
