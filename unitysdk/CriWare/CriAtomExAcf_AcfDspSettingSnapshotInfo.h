#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXACF_ACFDSPSETTINGSNAPSHOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x14EFF90)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcf_AcfDspSettingSnapshotInfo_TypeDefinitionIndex = 31050;

	struct alignas(8) CriAtomExAcf_AcfDspSettingSnapshotInfo
	{
		::System::String* name; // 0x10
		::System::Byte numBuses; // 0x18
		::System::Byte numExtendBuses; // 0x19
		::Il2CppArray<::System::Byte>* reserved; // 0x20
		::Il2CppArray<::System::UInt16>* busIndexes; // 0x28
		::Il2CppArray<::System::UInt16>* extendBusIndexes; // 0x30

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_ACFDSPSETTINGSNAPSHOTINFO__CTOR_OFFSET))(this, data, startIndex);
		}
	};
}
