#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ShakeDistanceAttenuation; }

#define RPG_GAMECORE_VCAMERAOVERRIDESHAKEV2_METHOD_2_0305883414FD161C_OFFSET UNITYSDK_OFFSET(0x19E3C240)
#define RPG_GAMECORE_VCAMERAOVERRIDESHAKEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x19E3F000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraOverrideShakeV2_TypeDefinitionIndex = 15597;

	class VCameraOverrideShakeV2 : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ShakeScale; // 0x10
		::System::Single ShakeTime; // 0x14
		::System::Single LoopTime; // 0x18
		::RPG::MVector3 ShakeDir; // 0x1C
		::System::Single RangeAttenuationDelay; // 0x28
		::System::Single RangeAttenuationTarget; // 0x2C
		::System::Single RangeAttenuationDuration; // 0x30
		::RPG::GameCore::ShakeDistanceAttenuation* DistanceAttenuation; // 0x38
		::System::Boolean OnlyApplyInFreelook3rd; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAOVERRIDESHAKEV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0305883414FD161C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraOverrideShakeV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraOverrideShakeV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAOVERRIDESHAKEV2_METHOD_2_0305883414FD161C_OFFSET))(a1, a2);
		}
	};
}
