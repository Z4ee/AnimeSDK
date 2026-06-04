#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXACF_ACFDSPBUSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x2BD2E60)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcf_AcfDspBusInfo_TypeDefinitionIndex = 37071;

	struct alignas(8) CriAtomExAcf_AcfDspBusInfo
	{
		::System::String* name; // 0x10
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

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_ACFDSPBUSINFO__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
