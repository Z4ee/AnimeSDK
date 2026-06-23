#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Unity/Extension/UnsafeBlitFormatterBase_1.h"

#define MESSAGEPACK_UNITY_EXTENSION_FLOATARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1D3912F0)
#define MESSAGEPACK_UNITY_EXTENSION_FLOATARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D391300)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int FloatArrayBlitFormatter_TypeDefinitionIndex = 30134;

	class FloatArrayBlitFormatter : public ::MessagePack::Unity::Extension::UnsafeBlitFormatterBase_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_FLOATARRAYBLITFORMATTER__CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_FLOATARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}
	};
}
