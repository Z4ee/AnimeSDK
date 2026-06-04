#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMGROUNDBAKEDCONFIG_METHOD_2_E97267A5FA709480_OFFSET UNITYSDK_OFFSET(0x197434F0)
#define RPG_GAMECORE_FIVEDIMGROUNDBAKEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19743690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGroundBakedConfig_TypeDefinitionIndex = 15826;

	class FiveDimGroundBakedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MaxSpeed; // 0x10
		::System::Single Acc; // 0x14
		::System::Single BrakeAcc; // 0x18
		::System::Single MaxBrakeAcc; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGROUNDBAKEDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E97267A5FA709480(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGroundBakedConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGroundBakedConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGROUNDBAKEDCONFIG_METHOD_2_E97267A5FA709480_OFFSET))(a1, a2);
		}
	};
}
