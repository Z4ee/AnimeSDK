#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Unity/Extension/UnsafeBlitFormatterBase_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MESSAGEPACK_UNITY_EXTENSION_VECTOR2ARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1DFDC4C0)
#define MESSAGEPACK_UNITY_EXTENSION_VECTOR2ARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFDC4D0)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int Vector2ArrayBlitFormatter_TypeDefinitionIndex = 30001;

	class Vector2ArrayBlitFormatter : public ::MessagePack::Unity::Extension::UnsafeBlitFormatterBase_1<::UnityEngine::Vector2>
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
