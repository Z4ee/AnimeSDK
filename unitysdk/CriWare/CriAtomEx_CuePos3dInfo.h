#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dConfig.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEX_CUEPOS3DINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x2DFCD70)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_CuePos3dInfo_TypeDefinitionIndex = 38673;

	struct alignas(8) CriAtomEx_CuePos3dInfo
	{
		::System::Single coneInsideAngle; // 0x10
		::System::Single coneOutsideAngle; // 0x14
		::System::Single coneOutsideVolume; // 0x18
		::System::Single minAttenuationDistance; // 0x1C
		::System::Single maxAttenuationDistance; // 0x20
		::System::Single sourceRadius; // 0x24
		::System::Single interiorDistance; // 0x28
		::System::Single dopplerFactor; // 0x2C
		::CriWare::CriAtomEx_Randomize3dConfig randomPos; // 0x30
		::System::UInt32 distanceAisacControl; // 0x40
		::System::UInt32 listenerBaseAngleAisacControl; // 0x44
		::System::UInt32 sourceBaseAngleAisacControl; // 0x48
		::System::UInt32 listenerBaseElevationAisacControl; // 0x4C
		::System::UInt32 sourceBaseElevationAisacControl; // 0x50

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CUEPOS3DINFO__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
