#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameTriggerConfig; }

#define RPG_GAMECORE_FIVEDIMONEWAYENTRYCONFIG_METHOD_2_44ECCF7724343AB8_OFFSET UNITYSDK_OFFSET(0x18911520)
#define RPG_GAMECORE_FIVEDIMONEWAYENTRYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18911680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimOneWayEntryConfig_TypeDefinitionIndex = 17603;

	class FiveDimOneWayEntryConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameTriggerConfig* TriggerConfig; // 0x10
		::RPG::MVector3 TargetPosition; // 0x18
		::RPG::MVector3 TargetRotation; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMONEWAYENTRYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_44ECCF7724343AB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimOneWayEntryConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimOneWayEntryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMONEWAYENTRYCONFIG_METHOD_2_44ECCF7724343AB8_OFFSET))(a1, a2);
		}
	};
}
