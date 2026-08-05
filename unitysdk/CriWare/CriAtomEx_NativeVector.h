#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEX_NATIVEVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA9CFB0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_NativeVector_TypeDefinitionIndex = 34913;

	struct alignas(4) CriAtomEx_NativeVector
	{
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18

		/*
		::System::Void _ctor(::UnityEngine::Vector3 vector)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_NATIVEVECTOR__CTOR_OFFSET))(this, vector);
		}
		*/
	};
}
