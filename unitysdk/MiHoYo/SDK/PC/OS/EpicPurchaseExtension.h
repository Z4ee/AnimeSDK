#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_EPICPURCHASEEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE5890)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int EpicPurchaseExtension_TypeDefinitionIndex = 8526;

	class EpicPurchaseExtension : public ::System::Object
	{
	public:
		::System::String* accountId; // 0x10
		::System::String* accessToken; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_EPICPURCHASEEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
