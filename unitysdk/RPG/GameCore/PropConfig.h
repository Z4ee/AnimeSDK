#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropLodTemplateName.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdvEffectConfig; }
namespace RPG::GameCore { class AdvTriggerEffectList; }
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class PropSoundConfig; }
namespace RPG::GameCore { class PropStateConfig; }
namespace RPG::GameCore { class PropTagComponentCollection; }
namespace RPG::GameCore { class SingleAnimEventConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TriggerEffect; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PROPCONFIG_METHOD_2_894B217F2342BC66_OFFSET UNITYSDK_OFFSET(0x175169B0)
#define RPG_GAMECORE_PROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17517420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropConfig_TypeDefinitionIndex = 16150;

	class PropConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropStateConfig*>* States; // 0x10
		::Il2CppArray<::RPG::GameCore::TriggerEffect*>* ResidentEffects; // 0x18
		::RPG::GameCore::AdvTriggerEffectList* AdvResidentEffects; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDestruction; // 0x28
		::System::Boolean SyncEffectOnDestruction; // 0x30
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x38
		::System::Single TriggerHintRadius; // 0x40
		::System::String* HintEffectPath; // 0x48
		::System::String* HintEffectAttachPoint; // 0x50
		::System::Single HintEffectScale; // 0x58
		::Il2CppArray<::System::String*>* DisableAnimEventLayers; // 0x60
		::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* AnimatorStateEvents; // 0x68
		::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* AnimatorStateGroupEvents; // 0x70
		::RPG::GameCore::PropSoundConfig* SoundConfig; // 0x78
		::RPG::GameCore::PropLodTemplateName LodTemplate; // 0x80
		::System::Single TickLodMaxDistance; // 0x84
		::System::String* TickLodTemplateName; // 0x88
		::System::String* DefaultLevelGraphPath; // 0x90
		::System::Single BillboardIconMaxDistance; // 0x98
		::System::Single BubbleMaxDistance; // 0x9C
		::System::String* ConfigEntityPath; // 0xA0
		::Il2CppArray<::RPG::GameCore::EntityTag>* Tag; // 0xA8
		::Il2CppArray<::System::String*>* EntityClientEvents; // 0xB0
		::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* PropButtonConfigs; // 0xB8
		::RPG::GameCore::TriggerValidGuestConfig* TriggerValidGuest; // 0xC0
		::RPG::MVector3 CenterOffset; // 0xC8
		::RPG::GameCore::HoyoTagContainer* TagContainer; // 0xD8
		::RPG::GameCore::PropTagComponentCollection* TagComponents; // 0xE0
		::System::String* ReplaceMaterialKey; // 0xE8
		::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>* AdvEffectList; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_894B217F2342BC66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCONFIG_METHOD_2_894B217F2342BC66_OFFSET))(a1, a2);
		}
	};
}
