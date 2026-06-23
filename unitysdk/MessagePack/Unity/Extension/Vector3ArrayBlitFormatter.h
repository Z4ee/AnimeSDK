#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Unity/Extension/UnsafeBlitFormatterBase_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MESSAGEPACK_UNITY_EXTENSION_VECTOR3ARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1D1E30D0)
#define MESSAGEPACK_UNITY_EXTENSION_VECTOR3ARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E30E0)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int Vector3ArrayBlitFormatter_TypeDefinitionIndex = 29462;

	class Vector3ArrayBlitFormatter : public ::MessagePack::Unity::Extension::UnsafeBlitFormatterBase_1<::UnityEngine::Vector3>
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
