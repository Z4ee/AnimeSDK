#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Unity/Extension/UnsafeBlitFormatterBase_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MESSAGEPACK_UNITY_EXTENSION_VECTOR4ARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1EB75400)
#define MESSAGEPACK_UNITY_EXTENSION_VECTOR4ARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB75410)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int Vector4ArrayBlitFormatter_TypeDefinitionIndex = 29786;

	class Vector4ArrayBlitFormatter : public ::MessagePack::Unity::Extension::UnsafeBlitFormatterBase_1<::UnityEngine::Vector4>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_VECTOR4ARRAYBLITFORMATTER__CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_VECTOR4ARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}
	};
}
