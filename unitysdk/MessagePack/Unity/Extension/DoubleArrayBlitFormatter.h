#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Unity/Extension/UnsafeBlitFormatterBase_1.h"

#define MESSAGEPACK_UNITY_EXTENSION_DOUBLEARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1EB91CE0)
#define MESSAGEPACK_UNITY_EXTENSION_DOUBLEARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB91CF0)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int DoubleArrayBlitFormatter_TypeDefinitionIndex = 31485;

	class DoubleArrayBlitFormatter : public ::MessagePack::Unity::Extension::UnsafeBlitFormatterBase_1<::System::Double>
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
