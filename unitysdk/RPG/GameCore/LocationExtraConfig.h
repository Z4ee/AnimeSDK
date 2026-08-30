#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOCATIONEXTRACONFIG_METHOD_2_1574466515EC2D31_OFFSET UNITYSDK_OFFSET(0x1D20ECE0)
#define RPG_GAMECORE_LOCATIONEXTRACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D20EE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LocationExtraConfig_TypeDefinitionIndex = 22239;

	class LocationExtraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single LocalZOffsetFixed; // 0x10
		::System::Single CentralXOffset; // 0x14
		::System::Single YOffset; // 0x18
		::System::Single YawOffset; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONEXTRACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1574466515EC2D31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LocationExtraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LocationExtraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONEXTRACONFIG_METHOD_2_1574466515EC2D31_OFFSET))(a1, a2);
		}
	};
}
