#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dConfig.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEX_CUEPOS3DINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1622180)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_CuePos3dInfo_TypeDefinitionIndex = 36716;

	struct alignas(8) CriAtomEx_CuePos3dInfo
	{
		::System::Single coneInsideAngle; // 0x10
		::System::Single coneOutsideAngle; // 0x14
		::System::Single minAttenuationDistance; // 0x18
		::System::Single maxAttenuationDistance; // 0x1C
		::System::Single sourceRadius; // 0x20
		::System::Single interiorDistance; // 0x24
		::System::Single dopplerFactor; // 0x28
		::CriWare::CriAtomEx_Randomize3dConfig randomPos; // 0x30
		::System::UInt32 distanceAisacControl; // 0x40
		::System::UInt32 listenerBaseAngleAisacControl; // 0x44
		::System::UInt32 sourceBaseAngleAisacControl; // 0x48
		::System::UInt32 listenerBaseElevationAisacControl; // 0x4C
		::System::UInt32 sourceBaseElevationAisacControl; // 0x50

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CUEPOS3DINFO__CTOR_OFFSET))(this, data, startIndex);
		}
	};
}
