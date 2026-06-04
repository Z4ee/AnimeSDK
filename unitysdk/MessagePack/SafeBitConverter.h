#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define MESSAGEPACK_SAFEBITCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x18191CB0)
#define MESSAGEPACK_SAFEBITCONVERTER_TOUINT16_OFFSET UNITYSDK_OFFSET(0x18191CF0)
#define MESSAGEPACK_SAFEBITCONVERTER_TOUINT32_OFFSET UNITYSDK_OFFSET(0x18191D10)
#define MESSAGEPACK_SAFEBITCONVERTER_TOUINT64_OFFSET UNITYSDK_OFFSET(0x18191CD0)

namespace MessagePack
{
	inline static constexpr unsigned int SafeBitConverter_TypeDefinitionIndex = 7194;

	class SafeBitConverter : public ::System::Object
	{
	public:
		static ::System::Int64 ToInt64(::System::ReadOnlySpan_1<::System::Byte> a1)
		{
			return ((::System::Int64(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_SAFEBITCONVERTER_TOINT64_OFFSET))(a1);
		}

		static ::System::UInt64 ToUInt64(::System::ReadOnlySpan_1<::System::Byte> a1)
		{
			return ((::System::UInt64(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_SAFEBITCONVERTER_TOUINT64_OFFSET))(a1);
		}

		static ::System::UInt16 ToUInt16(::System::ReadOnlySpan_1<::System::Byte> a1)
		{
			return ((::System::UInt16(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_SAFEBITCONVERTER_TOUINT16_OFFSET))(a1);
		}

		static ::System::UInt32 ToUInt32(::System::ReadOnlySpan_1<::System::Byte> a1)
		{
			return ((::System::UInt32(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_SAFEBITCONVERTER_TOUINT32_OFFSET))(a1);
		}
	};
}
