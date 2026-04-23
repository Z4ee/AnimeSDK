#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Unity/Extension/ReverseEndianessHelperSimpleSingle.h"
#include "unitysdk/MessagePack/Unity/Extension/UnsafeBlitFormatterBase_2.h"

#define MESSAGEPACK_UNITY_EXTENSION_FLOATARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1731DFE0)
#define MESSAGEPACK_UNITY_EXTENSION_FLOATARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1731DFF0)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int FloatArrayBlitFormatter_TypeDefinitionIndex = 10031;

	class FloatArrayBlitFormatter : public ::MessagePack::Unity::Extension::UnsafeBlitFormatterBase_2<::System::Single, ::MessagePack::Unity::Extension::ReverseEndianessHelperSimpleSingle>
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
