#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameTriggerConfig; }

#define RPG_GAMECORE_FIVEDIMONEWAYENTRYCONFIG_METHOD_2_1871AA394CE67DFE_OFFSET UNITYSDK_OFFSET(0x1D85C590)
#define RPG_GAMECORE_FIVEDIMONEWAYENTRYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D86FA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimOneWayEntryConfig_TypeDefinitionIndex = 18322;

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

		static ::System::Void Method_2_1871AA394CE67DFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimOneWayEntryConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimOneWayEntryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMONEWAYENTRYCONFIG_METHOD_2_1871AA394CE67DFE_OFFSET))(a1, a2);
		}
	};
}
