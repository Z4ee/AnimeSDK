#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VCAMERASHOTANIMMOVEMENTCONFIG_METHOD_2_2699366CB151397E_OFFSET UNITYSDK_OFFSET(0x19E3BFC0)
#define RPG_GAMECORE_VCAMERASHOTANIMMOVEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19E3F160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraShotAnimMovementConfig_TypeDefinitionIndex = 15591;

	class VCameraShotAnimMovementConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::System::Single AngleXY; // 0x14
		::System::Single DistanceXY; // 0x18
		::System::Single DistanceZ; // 0x1C
		::System::Single Damp; // 0x20
		::System::Single Duration; // 0x24
		::System::Single RecoveryDamp; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERASHOTANIMMOVEMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2699366CB151397E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraShotAnimMovementConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraShotAnimMovementConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERASHOTANIMMOVEMENTCONFIG_METHOD_2_2699366CB151397E_OFFSET))(a1, a2);
		}
	};
}
