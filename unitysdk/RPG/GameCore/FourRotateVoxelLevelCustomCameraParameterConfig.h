#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELLEVELCUSTOMCAMERAPARAMETERCONFIG_METHOD_2_E18AF69F8AFC46C4_OFFSET UNITYSDK_OFFSET(0x1DCB7090)
#define RPG_GAMECORE_FOURROTATEVOXELLEVELCUSTOMCAMERAPARAMETERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB7200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelLevelCustomCameraParameterConfig_TypeDefinitionIndex = 16573;

	class FourRotateVoxelLevelCustomCameraParameterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsUseCustomCameraParameter; // 0x10
		::System::Single TargetOrthographicSize; // 0x14
		::System::UInt32 StartCurveTargetEntityID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELCUSTOMCAMERAPARAMETERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E18AF69F8AFC46C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelLevelCustomCameraParameterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelLevelCustomCameraParameterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELCUSTOMCAMERAPARAMETERCONFIG_METHOD_2_E18AF69F8AFC46C4_OFFSET))(a1, a2);
		}
	};
}
