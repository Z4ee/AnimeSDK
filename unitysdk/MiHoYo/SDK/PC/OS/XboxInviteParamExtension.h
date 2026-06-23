#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXINVITEPARAMEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA88A20)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxInviteParamExtension_TypeDefinitionIndex = 20420;

	class XboxInviteParamExtension : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* xuids; // 0x10
		::System::Boolean allowCrossPlatformJoin; // 0x18
		::System::String* connectionString; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXINVITEPARAMEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
