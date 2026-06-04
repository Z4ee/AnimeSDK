#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCONVEYORBAKEDCONFIG_METHOD_2_3B2DFD6F904E65F9_OFFSET UNITYSDK_OFFSET(0x197366A0)
#define RPG_GAMECORE_FIVEDIMCONVEYORBAKEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197367B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimConveyorBakedConfig_TypeDefinitionIndex = 15831;

	class FiveDimConveyorBakedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ConveyorFlipInitSpeed; // 0x10
		::System::Single ConveyorFlipTotalDuration; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONVEYORBAKEDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3B2DFD6F904E65F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimConveyorBakedConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimConveyorBakedConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONVEYORBAKEDCONFIG_METHOD_2_3B2DFD6F904E65F9_OFFSET))(a1, a2);
		}
	};
}
