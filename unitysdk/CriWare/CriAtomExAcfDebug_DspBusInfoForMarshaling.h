#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXACFDEBUG_DSPBUSINFOFORMARSHALING_CONVERT_OFFSET UNITYSDK_OFFSET(0x14F0E30)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcfDebug_DspBusInfoForMarshaling_TypeDefinitionIndex = 31204;

	struct alignas(8) CriAtomExAcfDebug_DspBusInfoForMarshaling
	{
		::System::IntPtr namePtr; // 0x10
		::System::Single volume; // 0x18
		::System::Single pan3dVolume; // 0x1C
		::System::Single pan3dAngle; // 0x20
		::System::Single pan3dDistance; // 0x24
		::System::Single pan3dSpread; // 0x28
		::Il2CppArray<::System::UInt16>* fxIndexes; // 0x30
		::Il2CppArray<::System::UInt16>* busLinkIndexes; // 0x38
		::System::UInt16 busNo; // 0x40
		::System::Byte numFxes; // 0x42
		::System::Byte numBusLinks; // 0x43

		/*
		::System::Void Convert(::CriWare::CriAtomExAcfDebug_DspBusInfo& x)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExAcfDebug_DspBusInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACFDEBUG_DSPBUSINFOFORMARSHALING_CONVERT_OFFSET))(this, x);
		}
		*/
	};
}
