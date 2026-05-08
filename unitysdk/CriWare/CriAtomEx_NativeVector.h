#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEX_NATIVEVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x98A2C0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_NativeVector_TypeDefinitionIndex = 32713;

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
