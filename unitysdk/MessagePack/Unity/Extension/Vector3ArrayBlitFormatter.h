#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Unity/Extension/ReverseEndianessHelperSimpleRepeat_1.h"
#include "unitysdk/MessagePack/Unity/Extension/UnsafeBlitFormatterBase_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MESSAGEPACK_UNITY_EXTENSION_VECTOR3ARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1812D4D0)
#define MESSAGEPACK_UNITY_EXTENSION_VECTOR3ARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1812D4E0)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int Vector3ArrayBlitFormatter_TypeDefinitionIndex = 9851;

	class Vector3ArrayBlitFormatter : public ::MessagePack::Unity::Extension::UnsafeBlitFormatterBase_2<::UnityEngine::Vector3, ::MessagePack::Unity::Extension::ReverseEndianessHelperSimpleRepeat_1<::System::Single>>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_VECTOR3ARRAYBLITFORMATTER__CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_VECTOR3ARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}
	};
}
