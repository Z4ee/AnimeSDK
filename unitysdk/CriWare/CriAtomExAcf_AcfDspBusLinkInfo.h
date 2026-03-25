#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAcf_AcfDspBusLinkType.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXACF_ACFDSPBUSLINKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x14EE7B0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcf_AcfDspBusLinkInfo_TypeDefinitionIndex = 31053;

	struct alignas(4) CriAtomExAcf_AcfDspBusLinkInfo
	{
		::CriWare::CriAtomExAcf_AcfDspBusLinkType type; // 0x10
		::System::Single sendLevel; // 0x14
		::System::UInt16 busNo; // 0x18
		::System::UInt16 busId; // 0x1A

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_ACFDSPBUSLINKINFO__CTOR_OFFSET))(this, data, startIndex);
		}
	};
}
