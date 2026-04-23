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
namespace RPG::GameCore { class CharacterAnimEventConfig; }
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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_PROPCONFIG_METHOD_2_2988C517CD328A1E_OFFSET UNITYSDK_OFFSET(0x18C66CC0)
#define RPG_GAMECORE_PROPCONFIG_METHOD_2_894B217F2342BC66_OFFSET UNITYSDK_OFFSET(0x18C65D10)
#define RPG_GAMECORE_PROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18C667E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropConfig_TypeDefinitionIndex = 16681;

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
		::System::Boolean TryUseSimpleAnimEvents; // 0x68
		::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* AnimatorStateEvents; // 0x70
		::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* AnimatorStateGroupEvents; // 0x78
		::RPG::GameCore::PropSoundConfig* SoundConfig; // 0x80
		::RPG::GameCore::PropLodTemplateName LodTemplate; // 0x88
		::System::Single TickLodMaxDistance; // 0x8C
		::System::String* TickLodTemplateName; // 0x90
		::System::String* DefaultLevelGraphPath; // 0x98
		::System::Single BillboardIconMaxDistance; // 0xA0
		::System::Single BubbleMaxDistance; // 0xA4
		::System::String* ConfigEntityPath; // 0xA8
		::Il2CppArray<::RPG::GameCore::EntityTag>* Tag; // 0xB0
		::Il2CppArray<::System::String*>* EntityClientEvents; // 0xB8
		::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* PropButtonConfigs; // 0xC0
		::RPG::GameCore::TriggerValidGuestConfig* TriggerValidGuest; // 0xC8
		::RPG::MVector3 CenterOffset; // 0xD0
		::RPG::GameCore::HoyoTagContainer* TagContainer; // 0xE0
		::RPG::GameCore::PropTagComponentCollection* TagComponents; // 0xE8
		::System::String* ReplaceMaterialKey; // 0xF0
		::Il2CppArray<::RPG::GameCore::AdvEffectConfig*>* AdvEffectList; // 0xF8
		::System::Collections::Generic::List_1<::RPG::GameCore::CharacterAnimEventConfig*>* CharacterAnimEventConfigList; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_894B217F2342BC66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCONFIG_METHOD_2_894B217F2342BC66_OFFSET))(a1, a2);
		}

		::System::Boolean Method_2_2988C517CD328A1E()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCONFIG_METHOD_2_2988C517CD328A1E_OFFSET))(this);
		}
	};
}
