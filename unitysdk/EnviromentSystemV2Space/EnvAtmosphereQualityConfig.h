#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define ENVIROMENTSYSTEMV2SPACE_ENVATMOSPHEREQUALITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF1E1080)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvAtmosphereQualityConfig_TypeDefinitionIndex = 47443;

	class EnvAtmosphereQualityConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::System::Int32>* transmittanceLutWidth; // 0x18
		::Il2CppArray<::System::Int32>* transmittanceLutHeight; // 0x20
		::Il2CppArray<::System::Int32>* transmittanceSampleCount; // 0x28
		::Il2CppArray<::System::Int32>* skyViewLutWidth; // 0x30
		::Il2CppArray<::System::Int32>* skyViewLutHeight; // 0x38
		::Il2CppArray<::System::Single>* asFastSkySampleCountMin; // 0x40
		::Il2CppArray<::System::Single>* asFastSkySampleCountMax; // 0x48
		::Il2CppArray<::System::Int32>* apVolumeWidth; // 0x50
		::Il2CppArray<::System::Int32>* apVolumeHeight; // 0x58
		::Il2CppArray<::System::Int32>* apVolumeDepth; // 0x60
		::Il2CppArray<::System::Single>* cameraAerialPerspectiveSampleCountPerSlice; // 0x68
		::Il2CppArray<::System::Single>* skyAtmosphereDistanceToSampleCountMax; // 0x70
		::Il2CppArray<::System::Int32>* multiScatteredLuminanceLutSizeWidth; // 0x78
		::Il2CppArray<::System::Int32>* multiScatteredLuminanceLutSizeHeight; // 0x80
		::Il2CppArray<::System::Int32>* multiScatteringSampleCount; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVATMOSPHEREQUALITYCONFIG__CTOR_OFFSET))(this);
		}
	};
}
