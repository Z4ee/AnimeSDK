#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXINVITERECEIVEDEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA38E60)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxInviteReceivedExtension_TypeDefinitionIndex = 8626;

	class XboxInviteReceivedExtension : public ::System::Object
	{
	public:
		::System::String* connectionString; // 0x10
		::System::String* url; // 0x18
		::System::String* sender; // 0x20
		::System::String* invitedUser; // 0x28
		::System::String* joinerXuid; // 0x30
		::System::String* joineeXuid; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXINVITERECEIVEDEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
