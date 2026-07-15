#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Unity/Extension/ReverseEndianessHelperSimpleRepeat_1.h"
#include "unitysdk/MessagePack/Unity/Extension/UnsafeBlitFormatterBase_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define MESSAGEPACK_UNITY_EXTENSION_QUATERNIONARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1D27FB30)
#define MESSAGEPACK_UNITY_EXTENSION_QUATERNIONARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D27FB40)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int QuaternionArrayBlitFormatter_TypeDefinitionIndex = 9868;

	class QuaternionArrayBlitFormatter : public ::MessagePack::Unity::Extension::UnsafeBlitFormatterBase_2<::UnityEngine::Quaternion, ::MessagePack::Unity::Extension::ReverseEndianessHelperSimpleRepeat_1<::System::Single>>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_QUATERNIONARRAYBLITFORMATTER__CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_QUATERNIONARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}
	};
}
