#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEX_NATIVEVECTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16221B0)
#define CRIWARE_CRIATOMEX_NATIVEVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD4E60)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_NativeVector_TypeDefinitionIndex = 36724;

	struct alignas(4) CriAtomEx_NativeVector
	{
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18

		::System::Void _ctor(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_NATIVEVECTOR__CTOR_OFFSET))(this, x, y, z);
		}

		/*
		::System::Void _ctor_1(::UnityEngine::Vector3 vector)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_NATIVEVECTOR__CTOR_1_OFFSET))(this, vector);
		}
		*/
	};
}
