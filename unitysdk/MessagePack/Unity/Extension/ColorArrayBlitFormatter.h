#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Unity/Extension/ReverseEndianessHelperSimpleRepeat_1.h"
#include "unitysdk/MessagePack/Unity/Extension/UnsafeBlitFormatterBase_2.h"
#include "unitysdk/UnityEngine/Color.h"

#define MESSAGEPACK_UNITY_EXTENSION_COLORARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1D27FA70)
#define MESSAGEPACK_UNITY_EXTENSION_COLORARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D27FA80)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int ColorArrayBlitFormatter_TypeDefinitionIndex = 9869;

	class ColorArrayBlitFormatter : public ::MessagePack::Unity::Extension::UnsafeBlitFormatterBase_2<::UnityEngine::Color, ::MessagePack::Unity::Extension::ReverseEndianessHelperSimpleRepeat_1<::System::Single>>
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
