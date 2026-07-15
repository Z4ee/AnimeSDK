#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FormationData; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskListTemplate; }
namespace RPG::GameCore { class TurnBasedAbilityConfig; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TURNBASEDABILITYCONFIGLIST_METHOD_2_75B90BAB1ED990B8_OFFSET UNITYSDK_OFFSET(0x1B063C10)
#define RPG_GAMECORE_TURNBASEDABILITYCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B063EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedAbilityConfigList_TypeDefinitionIndex = 17467;

	class TurnBasedAbilityConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TurnBasedAbilityConfig*>* AbilityList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TurnBasedModifierConfig*>* GlobalModifiers; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* GlobalTemplates; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>* GlobalTargetAlias; // 0x28
		::Il2CppArray<::RPG::GameCore::FormationData*>* GlobalFormation; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::VCameraConfig*>* GlobalCameraConfigs; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_75B90BAB1ED990B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnBasedAbilityConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnBasedAbilityConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDABILITYCONFIGLIST_METHOD_2_75B90BAB1ED990B8_OFFSET))(a1, a2);
		}
	};
}
