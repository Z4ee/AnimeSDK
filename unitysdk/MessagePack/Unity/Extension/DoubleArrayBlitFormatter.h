#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Unity/Extension/ReverseEndianessHelperSimpleSingle.h"
#include "unitysdk/MessagePack/Unity/Extension/UnsafeBlitFormatterBase_2.h"

#define MESSAGEPACK_UNITY_EXTENSION_DOUBLEARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1B6649A0)
#define MESSAGEPACK_UNITY_EXTENSION_DOUBLEARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6649B0)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int DoubleArrayBlitFormatter_TypeDefinitionIndex = 10153;

	class DoubleArrayBlitFormatter : public ::MessagePack::Unity::Extension::UnsafeBlitFormatterBase_2<::System::Double, ::MessagePack::Unity::Extension::ReverseEndianessHelperSimpleSingle>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_DOUBLEARRAYBLITFORMATTER__CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_DOUBLEARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}
	};
}
