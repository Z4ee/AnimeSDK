#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcfDebug_DspBusInfo_TypeDefinitionIndex = 38023;

	struct alignas(8) CriAtomExAcfDebug_DspBusInfo
	{
		::System::String* name; // 0x10
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
	};
}
