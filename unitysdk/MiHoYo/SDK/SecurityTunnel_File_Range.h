#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_SECURITYTUNNEL_FILE_RANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x8DC65A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_File_Range_TypeDefinitionIndex = 42988;

	class SecurityTunnel_File_Range : public ::System::Object
	{
	public:
		::System::UInt64 Offset; // 0x10
		::System::UInt64 Length; // 0x18

		::System::Void _ctor(::System::UInt64 offset, ::System::UInt64 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_RANGE__CTOR_OFFSET))(this, offset, length);
		}
	};
}
