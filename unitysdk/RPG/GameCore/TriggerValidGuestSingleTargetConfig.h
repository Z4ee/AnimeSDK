#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_TRIGGERVALIDGUESTSINGLETARGETCONFIG_METHOD_2_7D7B7BDDB81A5B6C_OFFSET UNITYSDK_OFFSET(0x1DC5FF30)
#define RPG_GAMECORE_TRIGGERVALIDGUESTSINGLETARGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC60100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerValidGuestSingleTargetConfig_TypeDefinitionIndex = 23892;

	class TriggerValidGuestSingleTargetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x10
		::RPG::GameCore::DynamicFloat* InstancecID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERVALIDGUESTSINGLETARGETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7D7B7BDDB81A5B6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerValidGuestSingleTargetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerValidGuestSingleTargetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERVALIDGUESTSINGLETARGETCONFIG_METHOD_2_7D7B7BDDB81A5B6C_OFFSET))(a1, a2);
		}
	};
}
