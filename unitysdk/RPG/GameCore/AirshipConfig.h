#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AIRSHIPCONFIG_METHOD_2_1E886CC3FDA3250B_OFFSET UNITYSDK_OFFSET(0x18690110)
#define RPG_GAMECORE_AIRSHIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18690450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AirshipConfig_TypeDefinitionIndex = 16025;

	class AirshipConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::Single CapsuleRadius; // 0x18
		::System::Single CapsuleHeight; // 0x1C
		::System::Single MaxSpeed; // 0x20
		::System::Single MaxAcceleration; // 0x24
		::System::Single MaxDeceleration; // 0x28
		::System::Single MaxBrakeSpeed; // 0x2C
		::RPG::MVector2 VerticalTiltRange; // 0x30
		::RPG::MVector2 HorizontalTiltRange; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIRSHIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1E886CC3FDA3250B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AirshipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AirshipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIRSHIPCONFIG_METHOD_2_1E886CC3FDA3250B_OFFSET))(a1, a2);
		}
	};
}
