#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GravitySwitchLineJumpEnergyMode.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimDynamicVar; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMGRAVITYSWITCHLINECONFIG_METHOD_3_7EFDC5F0DFEC8AD9_OFFSET UNITYSDK_OFFSET(0x1BA993F0)
#define RPG_GAMECORE_FIVEDIMGRAVITYSWITCHLINECONFIG_METHOD_3_87B1823A601ED3F6_OFFSET UNITYSDK_OFFSET(0x1BA99430)
#define RPG_GAMECORE_FIVEDIMGRAVITYSWITCHLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA99420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGravitySwitchLineConfig_TypeDefinitionIndex = 17860;

	class FiveDimGravitySwitchLineConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsGravitySwitchLine; // 0x10
		::RPG::GameCore::FiveDimDynamicVar* BindLevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* ActiveValues; // 0x20
		::Il2CppArray<::System::Int16>* InactiveValues; // 0x28
		::System::Single Length; // 0x30
		::RPG::GameCore::GravitySwitchLineJumpEnergyMode ModifyJumpEnergy; // 0x34
		::System::Single AddJumpCoolDown; // 0x38
		::System::Boolean EnableOverrideMaxFallSpeed; // 0x3C
		::System::Single OverrideMaxFallSpeed; // 0x40
		::System::Single TriggerHeight; // 0x44
		::System::Single TriggerOffset; // 0x48
		::System::String* LineTraceEffectPath; // 0x50
		::System::String* DeactiveLineTraceEffectPath; // 0x58
		::System::String* PassGravityLineEffectPath; // 0x60
		::System::String* PassGravityLineEffectPathNotFollowRotation; // 0x68
		::System::Single EffectLengthScaleFactor; // 0x70
		::System::Boolean SendEventOnInit; // 0x74
		::RPG::GameCore::LittleGameEvent* InactiveEvent; // 0x78
		::RPG::GameCore::LittleGameEvent* ActiveEvent; // 0x80
		::RPG::GameCore::LittleGameEvent* PlayerThroughEvent; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYSWITCHLINECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7EFDC5F0DFEC8AD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGravitySwitchLineConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGravitySwitchLineConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYSWITCHLINECONFIG_METHOD_3_7EFDC5F0DFEC8AD9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_87B1823A601ED3F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGravitySwitchLineConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGravitySwitchLineConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRAVITYSWITCHLINECONFIG_METHOD_3_87B1823A601ED3F6_OFFSET))(a1, a2);
		}
	};
}
