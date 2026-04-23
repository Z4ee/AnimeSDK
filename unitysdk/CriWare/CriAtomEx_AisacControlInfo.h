#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEX_AISACCONTROLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1621970)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_AisacControlInfo_TypeDefinitionIndex = 36712;

	struct alignas(8) CriAtomEx_AisacControlInfo
	{
		::System::String* name; // 0x10
		::System::UInt32 id; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_AISACCONTROLINFO__CTOR_OFFSET))(this, data, startIndex);
		}
	};
}
