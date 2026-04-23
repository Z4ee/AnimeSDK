#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/ValueType.h"

#define MESSAGEPACK_INTERNAL_GUIDBITS_GETBYTETOHEXSTRINGHIGH_OFFSET UNITYSDK_OFFSET(0x1735B110)
#define MESSAGEPACK_INTERNAL_GUIDBITS_GETBYTETOHEXSTRINGLOW_OFFSET UNITYSDK_OFFSET(0x1735B1C0)
#define MESSAGEPACK_INTERNAL_GUIDBITS_PARSE_OFFSET UNITYSDK_OFFSET(0x1735B3D0)
#define MESSAGEPACK_INTERNAL_GUIDBITS_SWITCHPARSE_OFFSET UNITYSDK_OFFSET(0x1735B530)
#define MESSAGEPACK_INTERNAL_GUIDBITS_WRITE_OFFSET UNITYSDK_OFFSET(0x2298E60)
#define MESSAGEPACK_INTERNAL_GUIDBITS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2298E30)
#define MESSAGEPACK_INTERNAL_GUIDBITS__CTOR_OFFSET UNITYSDK_OFFSET(0x2298E20)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int GuidBits_TypeDefinitionIndex = 9345;

	struct alignas(1) GuidBits
	{
		::System::Guid Value; // 0x10
		::System::Byte Byte0; // 0x10
		::System::Byte Byte1; // 0x11
		::System::Byte Byte2; // 0x12
		::System::Byte Byte3; // 0x13
		::System::Byte Byte4; // 0x14
		::System::Byte Byte5; // 0x15
		::System::Byte Byte6; // 0x16
		::System::Byte Byte7; // 0x17
		::System::Byte Byte8; // 0x18
		::System::Byte Byte9; // 0x19
		::System::Byte Byte10; // 0x1A
		::System::Byte Byte11; // 0x1B
		::System::Byte Byte12; // 0x1C
		::System::Byte Byte13; // 0x1D
		::System::Byte Byte14; // 0x1E
		::System::Byte Byte15; // 0x1F

		::System::Void _ctor(::System::Guid& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_GUIDBITS__CTOR_OFFSET))(this, value);
		}

		/*
		::System::Void _ctor_1(::System::ReadOnlySpan_1<::System::Byte> utf8string)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_GUIDBITS__CTOR_1_OFFSET))(this, utf8string);
		}
		*/

		/*
		static ::System::ReadOnlySpan_1<::System::Byte> GetByteToHexStringHigh()
		{
			return ((::System::ReadOnlySpan_1<::System::Byte>(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_GUIDBITS_GETBYTETOHEXSTRINGHIGH_OFFSET))();
		}
		*/

		/*
		static ::System::ReadOnlySpan_1<::System::Byte> GetByteToHexStringLow()
		{
			return ((::System::ReadOnlySpan_1<::System::Byte>(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_GUIDBITS_GETBYTETOHEXSTRINGLOW_OFFSET))();
		}
		*/

		/*
		static ::System::Byte Parse(::System::ReadOnlySpan_1<::System::Byte> bytes, ::System::Int32 highOffset)
		{
			return ((::System::Byte(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_GUIDBITS_PARSE_OFFSET))(bytes, highOffset);
		}
		*/

		static ::System::Byte SwitchParse(::System::Byte b)
		{
			return ((::System::Byte(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_GUIDBITS_SWITCHPARSE_OFFSET))(b);
		}

		/*
		::System::Void Write(::System::Span_1<::System::Byte> buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_GUIDBITS_WRITE_OFFSET))(this, buffer);
		}
		*/
	};
}
