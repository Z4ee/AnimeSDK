#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFORMATIONCONFIG_METHOD_2_9AB0DC92CB42EF27_OFFSET UNITYSDK_OFFSET(0x1D5B0230)
#define RPG_GAMECORE_TARGETFORMATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B03B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFormationConfig_TypeDefinitionIndex = 22244;

	class TargetFormationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Distance; // 0x10
		::System::Single Angle; // 0x14
		::System::Single Yaw; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFORMATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9AB0DC92CB42EF27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFormationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFormationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFORMATIONCONFIG_METHOD_2_9AB0DC92CB42EF27_OFFSET))(a1, a2);
		}
	};
}
