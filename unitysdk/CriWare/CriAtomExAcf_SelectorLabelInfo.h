#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXACF_SELECTORLABELINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x3BB0AA0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcf_SelectorLabelInfo_TypeDefinitionIndex = 38741;

	struct alignas(8) CriAtomExAcf_SelectorLabelInfo
	{
		::System::String* selectorName; // 0x10
		::System::String* labelName; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_SELECTORLABELINFO__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
