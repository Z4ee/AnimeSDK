#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXACF_ACFDSPSETTINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x2DFE540)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcf_AcfDspSettingInfo_TypeDefinitionIndex = 38727;

	struct alignas(8) CriAtomExAcf_AcfDspSettingInfo
	{
		::System::String* name; // 0x10
		::Il2CppArray<::System::UInt16>* busIndexes; // 0x18
		::Il2CppArray<::System::UInt16>* extendBusIndexes; // 0x20
		::System::UInt16 snapshotStartIndex; // 0x28
		::System::Byte numBuses; // 0x2A
		::System::Byte numExtendBuses; // 0x2B
		::System::UInt16 numSnapshots; // 0x2C
		::System::UInt16 snapshotWorkSize; // 0x2E
		::System::UInt16 numMixerAisacs; // 0x30
		::System::UInt16 mixerAisacStartIndex; // 0x32

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_ACFDSPSETTINGINFO__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
