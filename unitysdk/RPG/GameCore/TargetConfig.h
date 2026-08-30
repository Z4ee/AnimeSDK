#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityTargetType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETCONFIG_METHOD_2_2CCA2840C181AA33_OFFSET UNITYSDK_OFFSET(0x1D5A2DC0)
#define RPG_GAMECORE_TARGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A2F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetConfig_TypeDefinitionIndex = 15469;

	class TargetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AbilityTargetType TargetType; // 0x10
		::System::Boolean AllowUnselectableTarget; // 0x14
		::System::Int32 MinTargetCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2CCA2840C181AA33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETCONFIG_METHOD_2_2CCA2840C181AA33_OFFSET))(a1, a2);
		}
	};
}
