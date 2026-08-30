#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXBLOCKLISTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA38DE0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxBlockListEntry_TypeDefinitionIndex = 8606;

	class XboxBlockListEntry : public ::System::Object
	{
	public:
		::System::String* userId; // 0x10
		::System::String* displayName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXBLOCKLISTENTRY__CTOR_OFFSET))(this);
		}
	};
}
