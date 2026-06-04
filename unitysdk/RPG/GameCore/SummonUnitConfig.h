#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_1C30CE192ABE4C54;
class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SummonUnitAIConfig; }
namespace RPG::GameCore { class SummonUnitBeAttackConfig; }
namespace RPG::GameCore { class SummonUnitBlockBasedEffect; }
namespace RPG::GameCore { class SummonUnitCharacterAnimConfig; }
namespace RPG::GameCore { class SummonUnitGatherConfig; }
namespace RPG::GameCore { class SummonUnitMiscConfig; }
namespace RPG::GameCore { class SummonUnitMoveConfig; }
namespace RPG::GameCore { class SummonUnitSkillConfig; }
namespace RPG::GameCore { class SummonUnitTriggerConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TriggerEffect; }
namespace System { class String; }

#define RPG_GAMECORE_SUMMONUNITCONFIG_METHOD_2_9435D17CA7EA4F5D_OFFSET UNITYSDK_OFFSET(0x19CD4410)
#define RPG_GAMECORE_SUMMONUNITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD4EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitConfig_TypeDefinitionIndex = 16729;

	class SummonUnitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* GroupConfigName; // 0x10
		::System::String* ConfigEntityPath; // 0x18
		::System::String* TickLodTemplateName; // 0x20
		::Il2CppArray<::RPG::GameCore::TriggerEffect*>* ResidentEffects; // 0x28
		::RPG::GameCore::SummonUnitBlockBasedEffect* ResidentBlockBasedEffect; // 0x30
		::System::String* ShoesType; // 0x38
		::System::Boolean ShowShadow; // 0x40
		::System::Boolean ColliderIsTrigger; // 0x41
		::System::Boolean AcceptMoneyTrigger; // 0x42
		::System::String* AttachPoint; // 0x48
		::RPG::MVector3 LocalPosition; // 0x50
		::RPG::MVector3 LocalRotation; // 0x5C
		::RPG::GameCore::DynamicFloat* Duration; // 0x68
		::System::Single FadeoutTime; // 0x70
		::System::String* FadeoutAnim; // 0x78
		::System::Single ExtraDitherRadius; // 0x80
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCreate; // 0x88
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDestroy; // 0x90
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeReplaced; // 0x98
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHide; // 0xA0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnShow; // 0xA8
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnGroundInvalid; // 0xB0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnResetPos; // 0xB8
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSummonerGroundMove; // 0xC0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAcceptMoney; // 0xC8
		::RPG::GameCore::SummonUnitCharacterAnimConfig* AnimConfig; // 0xD0
		::RPG::GameCore::SummonUnitTriggerConfig* TriggerConfig; // 0xD8
		::RPG::GameCore::SummonUnitMoveConfig* MoveConfig; // 0xE0
		::RPG::GameCore::SummonUnitAIConfig* AIConfig; // 0xE8
		::RPG::GameCore::SummonUnitSkillConfig* SkillConfig; // 0xF0
		::RPG::GameCore::SummonUnitBeAttackConfig* BeAttackConfig; // 0xF8
		::RPG::GameCore::SummonUnitGatherConfig* GatherConfig; // 0x100
		::RPG::GameCore::SummonUnitMiscConfig* MiscConfig; // 0x108
		::Class_1_1C30CE192ABE4C54* DynamicValues; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9435D17CA7EA4F5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonUnitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonUnitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITCONFIG_METHOD_2_9435D17CA7EA4F5D_OFFSET))(a1, a2);
		}
	};
}
