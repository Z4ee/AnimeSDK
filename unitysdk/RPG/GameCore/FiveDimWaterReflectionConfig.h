#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimWaterReflectionItemType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMWATERREFLECTIONCONFIG_METHOD_3_2465DD4A2F20163C_OFFSET UNITYSDK_OFFSET(0x17211B90)
#define RPG_GAMECORE_FIVEDIMWATERREFLECTIONCONFIG_METHOD_3_EFC3604F7A5CE73B_OFFSET UNITYSDK_OFFSET(0x17211B20)
#define RPG_GAMECORE_FIVEDIMWATERREFLECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17211B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimWaterReflectionConfig_TypeDefinitionIndex = 17071;

	class FiveDimWaterReflectionConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsWaterReflection; // 0x10
		::RPG::GameCore::FiveDimWaterReflectionItemType ItemType; // 0x14
		::System::UInt32 SourceEntityID; // 0x18
		::System::UInt32 TargetEntityID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWATERREFLECTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EFC3604F7A5CE73B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimWaterReflectionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimWaterReflectionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWATERREFLECTIONCONFIG_METHOD_3_EFC3604F7A5CE73B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2465DD4A2F20163C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimWaterReflectionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimWaterReflectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWATERREFLECTIONCONFIG_METHOD_3_2465DD4A2F20163C_OFFSET))(a1, a2);
		}
	};
}
