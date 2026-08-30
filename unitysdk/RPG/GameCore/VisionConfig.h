#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/RPG/GameCore/VisionBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VISIONCONFIG_METHOD_3_02A3043353945C24_OFFSET UNITYSDK_OFFSET(0x1D69B8A0)
#define RPG_GAMECORE_VISIONCONFIG_METHOD_3_950440BE461B50B0_OFFSET UNITYSDK_OFFSET(0x1D69B580)
#define RPG_GAMECORE_VISIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69B540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VisionConfig_TypeDefinitionIndex = 17316;

	class VisionConfig : public ::RPG::GameCore::VisionBaseConfig
	{
	public:
		::System::Single DistanceRange; // 0x18
		::System::Single YawAngleRange; // 0x1C
		::System::Single PitchAngleLimitMin; // 0x20
		::System::Single PitchAngleLimitMax; // 0x24
		::System::Single AlertIntervalLeftValue; // 0x28
		::System::Single AlertIntervalRightValue; // 0x2C
		::System::String* RayStartPointName; // 0x30
		::System::String* RayEndPointName; // 0x38
		::Il2CppArray<::RPG::GameCore::EntityTag>* ExcludeEntityTags; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_02A3043353945C24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VisionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VisionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISIONCONFIG_METHOD_3_02A3043353945C24_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_950440BE461B50B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VisionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VISIONCONFIG_METHOD_3_950440BE461B50B0_OFFSET))(a1, a2);
		}
	};
}
