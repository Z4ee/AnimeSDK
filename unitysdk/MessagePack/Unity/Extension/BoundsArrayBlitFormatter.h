#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Unity/Extension/ReverseEndianessHelperSimpleRepeat_1.h"
#include "unitysdk/MessagePack/Unity/Extension/UnsafeBlitFormatterBase_2.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define MESSAGEPACK_UNITY_EXTENSION_BOUNDSARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x15D20560)
#define MESSAGEPACK_UNITY_EXTENSION_BOUNDSARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D20570)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int BoundsArrayBlitFormatter_TypeDefinitionIndex = 9893;

	class BoundsArrayBlitFormatter : public ::MessagePack::Unity::Extension::UnsafeBlitFormatterBase_2<::UnityEngine::Bounds, ::MessagePack::Unity::Extension::ReverseEndianessHelperSimpleRepeat_1<::System::Single>>
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
