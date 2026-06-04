#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_SECURITYTUNNEL_FILE_RANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA213470)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_File_Range_TypeDefinitionIndex = 43791;

	class SecurityTunnel_File_Range : public ::System::Object
	{
	public:
		::System::UInt64 Length; // 0x10
		::System::UInt64 Offset; // 0x18

		::System::Void _ctor(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_RANGE__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
