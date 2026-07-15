#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEX_NATIVEVECTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3A15A90)
#define CRIWARE_CRIATOMEX_NATIVEVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x39C72C0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_NativeVector_TypeDefinitionIndex = 37823;

	struct alignas(4) CriAtomEx_NativeVector
	{
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_NATIVEVECTOR__CTOR_OFFSET))(this, a1, a2, a3);
		}

		/*
		::System::Void _ctor_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_NATIVEVECTOR__CTOR_1_OFFSET))(this, a1);
		}
		*/
	};
}
