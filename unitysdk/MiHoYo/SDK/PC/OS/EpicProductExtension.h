#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PC_OS_EPICPRODUCTEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE5880)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int EpicProductExtension_TypeDefinitionIndex = 8529;

	class EpicProductExtension : public ::System::Object
	{
	public:
		::System::Int32 decimalPoint; // 0x10
		::System::Int64 currentPrice64; // 0x18
		::System::Int64 originalPrice64; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_EPICPRODUCTEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
