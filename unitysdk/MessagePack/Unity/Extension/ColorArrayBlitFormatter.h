#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Unity/Extension/UnsafeBlitFormatterBase_1.h"
#include "unitysdk/UnityEngine/Color.h"

#define MESSAGEPACK_UNITY_EXTENSION_COLORARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1D83F7C0)
#define MESSAGEPACK_UNITY_EXTENSION_COLORARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D83F7D0)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int ColorArrayBlitFormatter_TypeDefinitionIndex = 29711;

	class ColorArrayBlitFormatter : public ::MessagePack::Unity::Extension::UnsafeBlitFormatterBase_1<::UnityEngine::Color>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_COLORARRAYBLITFORMATTER__CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_COLORARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}
	};
}
