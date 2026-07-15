#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAcf_DspBusOutputType.h"
#include "unitysdk/CriWare/CriAtom_SpeakerMapping.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXACF_ACFDSPBUSINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3A16650)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcf_AcfDspBusInfo_TypeDefinitionIndex = 37870;

	struct alignas(8) CriAtomExAcf_AcfDspBusInfo
	{
		::System::IntPtr namePointer; // 0x10
		::System::Single volume; // 0x18
		::System::Single pan3dVolume; // 0x1C
		::System::Single pan3dAngle; // 0x20
		::System::Single pan3dDistance; // 0x24
		::System::Single pan3dSpread; // 0x28
		::System::Single pan3dWideness; // 0x2C
		::Il2CppArray<::System::UInt16>* fxIndexes; // 0x30
		::Il2CppArray<::System::UInt16>* busLinkIndexes; // 0x38
		::System::UInt16 busNo; // 0x40
		::System::Byte numFxes; // 0x42
		::System::Byte numBusLinks; // 0x43
		::CriWare::CriAtom_SpeakerMapping speakerMapping; // 0x44
		::CriWare::CriAtomExAcf_DspBusOutputType outputType; // 0x48
		::System::Byte outputOptions; // 0x4C

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_ACFDSPBUSINFO_GET_NAME_OFFSET))(this);
		}
	};
}
