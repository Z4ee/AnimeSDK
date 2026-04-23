#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAcf_CharacterEncoding.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXACF_ACFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16244D0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcf_AcfInfo_TypeDefinitionIndex = 36780;

	struct alignas(8) CriAtomExAcf_AcfInfo
	{
		::System::String* name; // 0x10
		::System::UInt32 size; // 0x18
		::System::UInt32 version; // 0x1C
		::CriWare::CriAtomExAcf_CharacterEncoding characterEncoding; // 0x20
		::System::Int32 numDspSettings; // 0x24
		::System::Int32 numCategories; // 0x28
		::System::Int32 numCategoriesPerPlayback; // 0x2C
		::System::Int32 numReacts; // 0x30
		::System::Int32 numAisacControls; // 0x34
		::System::Int32 numGlobalAisacs; // 0x38
		::System::Int32 numGameVariables; // 0x3C
		::System::Int32 maxBusesOfDspBusSettings; // 0x40
		::System::Int32 numBuses; // 0x44
		::System::Int32 numVoiceLimitGroups; // 0x48
		::System::Int32 numOutputPorts; // 0x4C

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_ACFINFO__CTOR_OFFSET))(this, data, startIndex);
		}
	};
}
