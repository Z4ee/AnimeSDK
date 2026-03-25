#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseCameraConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMGRAVITYBOARDCAMERACONFIG_METHOD_4_272FFBA9ADFDEE97_OFFSET UNITYSDK_OFFSET(0x171DFA90)
#define RPG_GAMECORE_FIVEDIMGRAVITYBOARDCAMERACONFIG_METHOD_4_6CF9DBB0FF874F59_OFFSET UNITYSDK_OFFSET(0x171F4FC0)
#define RPG_GAMECORE_FIVEDIMGRAVITYBOARDCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171DFA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGravityBoardCameraConfig_TypeDefinitionIndex = 17095;

	class FiveDimGravityBoardCameraConfig : public ::RPG::GameCore::FiveDimBaseCameraConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYBOARDCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6CF9DBB0FF874F59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGravityBoardCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGravityBoardCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYBOARDCAMERACONFIG_METHOD_4_6CF9DBB0FF874F59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_272FFBA9ADFDEE97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGravityBoardCameraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGravityBoardCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYBOARDCAMERACONFIG_METHOD_4_272FFBA9ADFDEE97_OFFSET))(a1, a2);
		}
	};
}
