#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimWaterReflectionItemType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMWATERREFLECTIONCONFIG_METHOD_3_24440A6ED4009A44_OFFSET UNITYSDK_OFFSET(0x18923DE0)
#define RPG_GAMECORE_FIVEDIMWATERREFLECTIONCONFIG_METHOD_3_F65931ED307B1E85_OFFSET UNITYSDK_OFFSET(0x18923E50)
#define RPG_GAMECORE_FIVEDIMWATERREFLECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18923E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimWaterReflectionConfig_TypeDefinitionIndex = 17670;

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

		static ::System::Void Method_3_24440A6ED4009A44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimWaterReflectionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimWaterReflectionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWATERREFLECTIONCONFIG_METHOD_3_24440A6ED4009A44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F65931ED307B1E85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimWaterReflectionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimWaterReflectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWATERREFLECTIONCONFIG_METHOD_3_F65931ED307B1E85_OFFSET))(a1, a2);
		}
	};
}
