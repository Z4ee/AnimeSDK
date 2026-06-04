#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/StandardFormat.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/NumberBuffer.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDECIMALE_OFFSET UNITYSDK_OFFSET(0x1ADC9280)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDECIMALF_OFFSET UNITYSDK_OFFSET(0x1ADC8C00)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDECIMALG_OFFSET UNITYSDK_OFFSET(0x1ADC8250)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x1ADC76D0)
#define SYSTEM_BUFFERS_TEXT_UTF8FORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADC9AF0)

namespace System::Buffers::Text
{
	inline static constexpr unsigned int Utf8Formatter_TypeDefinitionIndex = 4980;

	class Utf8Formatter : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_DayAbbreviationsLowercase()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Utf8Formatter_TypeDefinitionIndex)->GetStaticField(0x1E0);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_MonthAbbreviations()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Utf8Formatter_TypeDefinitionIndex)->GetStaticField(0x1E8);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_MonthAbbreviationsLowercase()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Utf8Formatter_TypeDefinitionIndex)->GetStaticField(0x1F0);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_DayAbbreviations()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Utf8Formatter_TypeDefinitionIndex)->GetStaticField(0x1F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER__CCTOR_OFFSET))();
		}

		static ::System::Boolean TryFormat(::System::Decimal a1, ::System::Span_1<::System::Byte> a2, ::System::Int32& a3, ::System::Buffers::StandardFormat a4)
		{
			return ((::System::Boolean(*)(::System::Decimal, ::System::Span_1<::System::Byte>, ::System::Int32&, ::System::Buffers::StandardFormat))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMAT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryFormatDecimalE(::System::NumberBuffer& a1, ::System::Span_1<::System::Byte> a2, ::System::Int32& a3, ::System::Byte a4, ::System::Byte a5)
		{
			return ((::System::Boolean(*)(::System::NumberBuffer&, ::System::Span_1<::System::Byte>, ::System::Int32&, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDECIMALE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TryFormatDecimalF(::System::NumberBuffer& a1, ::System::Span_1<::System::Byte> a2, ::System::Int32& a3, ::System::Byte a4)
		{
			return ((::System::Boolean(*)(::System::NumberBuffer&, ::System::Span_1<::System::Byte>, ::System::Int32&, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDECIMALF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryFormatDecimalG(::System::NumberBuffer& a1, ::System::Span_1<::System::Byte> a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::NumberBuffer&, ::System::Span_1<::System::Byte>, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_TEXT_UTF8FORMATTER_TRYFORMATDECIMALG_OFFSET))(a1, a2, a3);
		}
	};
}
