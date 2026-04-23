#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEX_AISACINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1621A90)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_AisacInfo_TypeDefinitionIndex = 36721;

	struct alignas(8) CriAtomEx_AisacInfo
	{
		::System::String* name; // 0x10
		::System::Boolean defaultControlFlag; // 0x18
		::System::Single defaultControlValue; // 0x1C
		::System::UInt32 controlId; // 0x20
		::System::String* controlName; // 0x28

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_AISACINFO__CTOR_OFFSET))(this, data, startIndex);
		}
	};
}
