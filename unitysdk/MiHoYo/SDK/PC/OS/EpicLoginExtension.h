#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_EPICLOGINEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF0FD80)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int EpicLoginExtension_TypeDefinitionIndex = 8528;

	class EpicLoginExtension : public ::System::Object
	{
	public:
		::System::String* accountId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_EPICLOGINEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
