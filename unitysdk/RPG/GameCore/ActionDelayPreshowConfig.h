#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ACTIONDELAYPRESHOWCONFIG_METHOD_2_1D3A3D78509228B8_OFFSET UNITYSDK_OFFSET(0x1B9FE400)
#define RPG_GAMECORE_ACTIONDELAYPRESHOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9FE940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionDelayPreshowConfig_TypeDefinitionIndex = 17448;

	class ActionDelayPreshowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AddDelayValue; // 0x10
		::RPG::GameCore::DynamicFloat* AddDelayRatio; // 0x18
		::RPG::GameCore::DynamicFloat* SetDelayValue; // 0x20
		::RPG::GameCore::DynamicFloat* AddSpeedValue; // 0x28
		::RPG::GameCore::DynamicFloat* AddSpeedRatio; // 0x30
		::RPG::GameCore::DynamicFloat* SetSpeedValue; // 0x38
		::RPG::GameCore::DynamicFloat* AddExtraSpeedRatio1; // 0x40
		::RPG::GameCore::DynamicFloat* AddExtraSpeedRatio2; // 0x48
		::RPG::GameCore::DynamicFloat* AddExtraSpeedRatio3; // 0x50
		::RPG::GameCore::DynamicFloat* AddExtraSpeedRatio4; // 0x58
		::System::Boolean ImmediateAction; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONDELAYPRESHOWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1D3A3D78509228B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionDelayPreshowConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionDelayPreshowConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONDELAYPRESHOWCONFIG_METHOD_2_1D3A3D78509228B8_OFFSET))(a1, a2);
		}
	};
}
