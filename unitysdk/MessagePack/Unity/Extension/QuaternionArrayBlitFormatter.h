#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Unity/Extension/UnsafeBlitFormatterBase_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define MESSAGEPACK_UNITY_EXTENSION_QUATERNIONARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1D6E4510)
#define MESSAGEPACK_UNITY_EXTENSION_QUATERNIONARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E4520)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int QuaternionArrayBlitFormatter_TypeDefinitionIndex = 30638;

	class QuaternionArrayBlitFormatter : public ::MessagePack::Unity::Extension::UnsafeBlitFormatterBase_1<::UnityEngine::Quaternion>
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
