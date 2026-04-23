#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityConfig.h"
#include "unitysdk/RPG/GameCore/AdventureAbilityManualTriggerType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureModifierConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVENTUREABILITYCONFIG_METHOD_3_AB9A0F8E7BA0F801_OFFSET UNITYSDK_OFFSET(0x1866C3D0)
#define RPG_GAMECORE_ADVENTUREABILITYCONFIG_METHOD_3_F49CF7FAD7D69102_OFFSET UNITYSDK_OFFSET(0x1866C390)
#define RPG_GAMECORE_ADVENTUREABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1866C3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAbilityConfig_TypeDefinitionIndex = 16534;

	class AdventureAbilityConfig : public ::RPG::GameCore::AbilityConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureModifierConfig*>* Modifiers; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAbort; // 0x60
		::RPG::GameCore::AdventureAbilityManualTriggerType ManualTriggerType; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F49CF7FAD7D69102(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAbilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCONFIG_METHOD_3_F49CF7FAD7D69102_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AB9A0F8E7BA0F801(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAbilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCONFIG_METHOD_3_AB9A0F8E7BA0F801_OFFSET))(a1, a2);
		}
	};
}
