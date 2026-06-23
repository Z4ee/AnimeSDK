#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class XboxBlockListEntry; }

#define MIHOYO_SDK_PC_OS_XBOXBLOCKLISTEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE591C0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxBlockListExtension_TypeDefinitionIndex = 20413;

	class XboxBlockListExtension : public ::System::Object
	{
	public:
		::Il2CppArray<::MiHoYo::SDK::PC::OS::XboxBlockListEntry*>* blockList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXBLOCKLISTEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
