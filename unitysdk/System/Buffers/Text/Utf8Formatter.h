#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/StandardFormat.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/NumberBuffer.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDECIMALE_OFFSET UNITYSDK_OFFSET(0x18519710)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDECIMALF_OFFSET UNITYSDK_OFFSET(0x18519080)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDECIMALG_OFFSET UNITYSDK_OFFSET(0x185186D0)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x18517B40)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18519F80)

namespace System::Buffers::Text
{
	inline static constexpr unsigned int Utf8Formatter_TypeDefinitionIndex = 4998;

	class Utf8Formatter : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_DayAbbreviationsLowercase()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Utf8Formatter_TypeDefinitionIndex)->GetStaticField(0x1F0);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_MonthAbbreviations()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Utf8Formatter_TypeDefinitionIndex)->GetStaticField(0x1F8);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_DayAbbreviations()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Utf8Formatter_TypeDefinitionIndex)->GetStaticField(0x200);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_MonthAbbreviationsLowercase()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Utf8Formatter_TypeDefinitionIndex)->GetStaticField(0x208);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER__CCTOR_OFFSET))();
		}

		static ::System::Boolean TryFormat(::System::Decimal value, ::System::Span_1<::System::Byte> destination, ::System::Int32& bytesWritten, ::System::Buffers::StandardFormat format)
		{
			return ((::System::Boolean(*)(::System::Decimal, ::System::Span_1<::System::Byte>, ::System::Int32&, ::System::Buffers::StandardFormat))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET))(value, destination, bytesWritten, format);
		}

		static ::System::Boolean TryFormatDecimalE(::System::NumberBuffer& number, ::System::Span_1<::System::Byte> destination, ::System::Int32& bytesWritten, ::System::Byte precision, ::System::Byte exponentSymbol)
		{
			return ((::System::Boolean(*)(::System::NumberBuffer&, ::System::Span_1<::System::Byte>, ::System::Int32&, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDECIMALE_OFFSET))(number, destination, bytesWritten, precision, exponentSymbol);
		}

		static ::System::Boolean TryFormatDecimalF(::System::NumberBuffer& number, ::System::Span_1<::System::Byte> destination, ::System::Int32& bytesWritten, ::System::Byte precision)
		{
			return ((::System::Boolean(*)(::System::NumberBuffer&, ::System::Span_1<::System::Byte>, ::System::Int32&, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDECIMALF_OFFSET))(number, destination, bytesWritten, precision);
		}

		static ::System::Boolean TryFormatDecimalG(::System::NumberBuffer& number, ::System::Span_1<::System::Byte> destination, ::System::Int32& bytesWritten)
		{
			return ((::System::Boolean(*)(::System::NumberBuffer&, ::System::Span_1<::System::Byte>, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDECIMALG_OFFSET))(number, destination, bytesWritten);
		}
	};
}
