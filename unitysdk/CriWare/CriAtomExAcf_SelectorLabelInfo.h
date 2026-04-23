#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXACF_SELECTORLABELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1624740)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcf_SelectorLabelInfo_TypeDefinitionIndex = 36782;

	struct alignas(8) CriAtomExAcf_SelectorLabelInfo
	{
		::System::String* selectorName; // 0x10
		::System::String* labelName; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_SELECTORLABELINFO__CTOR_OFFSET))(this, data, startIndex);
		}
	};
}
