#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXACF_SELECTORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x3BB0A90)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcf_SelectorInfo_TypeDefinitionIndex = 38740;

	struct alignas(8) CriAtomExAcf_SelectorInfo
	{
		::System::String* name; // 0x10
		::System::UInt16 index; // 0x18
		::System::UInt16 numLabels; // 0x1A
		::System::UInt16 globalLabelIndex; // 0x1C

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_SELECTORINFO__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
