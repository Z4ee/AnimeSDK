#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAcf_AcfAisacType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXACF_GLOBALAISACINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1624630)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcf_GlobalAisacInfo_TypeDefinitionIndex = 36776;

	struct alignas(8) CriAtomExAcf_GlobalAisacInfo
	{
		::System::String* name; // 0x10
		::System::UInt16 index; // 0x18
		::System::UInt16 numGraphs; // 0x1A
		::CriWare::CriAtomExAcf_AcfAisacType type; // 0x1C
		::System::Single randomRange; // 0x20
		::System::UInt16 controlId; // 0x24
		::System::UInt16 dummy; // 0x26

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GLOBALAISACINFO__CTOR_OFFSET))(this, data, startIndex);
		}
	};
}
