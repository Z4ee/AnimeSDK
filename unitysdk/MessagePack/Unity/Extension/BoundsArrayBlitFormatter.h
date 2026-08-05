#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Unity/Extension/UnsafeBlitFormatterBase_1.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define MESSAGEPACK_UNITY_EXTENSION_BOUNDSARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1EBBA1E0)
#define MESSAGEPACK_UNITY_EXTENSION_BOUNDSARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBBA1F0)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int BoundsArrayBlitFormatter_TypeDefinitionIndex = 31137;

	class BoundsArrayBlitFormatter : public ::MessagePack::Unity::Extension::UnsafeBlitFormatterBase_1<::UnityEngine::Bounds>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_BOUNDSARRAYBLITFORMATTER__CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_BOUNDSARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}
	};
}
