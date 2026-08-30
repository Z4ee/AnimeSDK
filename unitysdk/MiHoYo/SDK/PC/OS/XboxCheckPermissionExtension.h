#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelPermissionEntry; }

#define MIHOYO_SDK_PC_OS_XBOXCHECKPERMISSIONEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE1150)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxCheckPermissionExtension_TypeDefinitionIndex = 8631;

	class XboxCheckPermissionExtension : public ::System::Object
	{
	public:
		::Il2CppArray<::MiHoYo::SDK::PC::OS::HoYoChannelPermissionEntry*>* permissions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXCHECKPERMISSIONEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
