#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSWITCHPLATFORMCONFIG_METHOD_3_28688FF7CAFE7655_OFFSET UNITYSDK_OFFSET(0x18921DD0)
#define RPG_GAMECORE_FIVEDIMSWITCHPLATFORMCONFIG_METHOD_3_2DD881798A95F04D_OFFSET UNITYSDK_OFFSET(0x18921D60)
#define RPG_GAMECORE_FIVEDIMSWITCHPLATFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18921DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSwitchPlatformConfig_TypeDefinitionIndex = 17625;

	class FiveDimSwitchPlatformConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsSwitchPlatform; // 0x10
		::RPG::GameCore::FiveDimDynamicVar* BindLevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* ActiveValues; // 0x20
		::Il2CppArray<::System::Int16>* InactiveValues; // 0x28
		::System::Boolean DefaultActive; // 0x30
		::System::Boolean DisableColliderOnInactive; // 0x31
		::System::Boolean DisableRenderOnInactive; // 0x32
		::System::String* PlaceholderRIStateName; // 0x38
		::System::Boolean SendEventOnInit; // 0x40
		::RPG::GameCore::LittleGameEvent* InactiveEvent; // 0x48
		::RPG::GameCore::LittleGameEvent* ActiveEvent; // 0x50
		::RPG::GameCore::LittleGameEvent* DelayActiveEvent; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHPLATFORMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2DD881798A95F04D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSwitchPlatformConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSwitchPlatformConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHPLATFORMCONFIG_METHOD_3_2DD881798A95F04D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_28688FF7CAFE7655(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSwitchPlatformConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSwitchPlatformConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHPLATFORMCONFIG_METHOD_3_28688FF7CAFE7655_OFFSET))(a1, a2);
		}
	};
}
