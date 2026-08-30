#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Unity/Extension/ReverseEndianessHelperSimpleSingle.h"
#include "unitysdk/MessagePack/Unity/Extension/UnsafeBlitFormatterBase_2.h"

#define MESSAGEPACK_UNITY_EXTENSION_INTARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1EF70E10)
#define MESSAGEPACK_UNITY_EXTENSION_INTARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF70E20)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int IntArrayBlitFormatter_TypeDefinitionIndex = 10151;

	class IntArrayBlitFormatter : public ::MessagePack::Unity::Extension::UnsafeBlitFormatterBase_2<::System::Int32, ::MessagePack::Unity::Extension::ReverseEndianessHelperSimpleSingle>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_INTARRAYBLITFORMATTER__CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_INTARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}
	};
}
