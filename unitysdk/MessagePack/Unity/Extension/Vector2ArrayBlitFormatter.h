#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Unity/Extension/ReverseEndianessHelperSimpleRepeat_1.h"
#include "unitysdk/MessagePack/Unity/Extension/UnsafeBlitFormatterBase_2.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MESSAGEPACK_UNITY_EXTENSION_VECTOR2ARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1731EB70)
#define MESSAGEPACK_UNITY_EXTENSION_VECTOR2ARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1731EB80)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int Vector2ArrayBlitFormatter_TypeDefinitionIndex = 10023;

	class Vector2ArrayBlitFormatter : public ::MessagePack::Unity::Extension::UnsafeBlitFormatterBase_2<::UnityEngine::Vector2, ::MessagePack::Unity::Extension::ReverseEndianessHelperSimpleRepeat_1<::System::Single>>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_VECTOR2ARRAYBLITFORMATTER__CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_VECTOR2ARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}
	};
}
