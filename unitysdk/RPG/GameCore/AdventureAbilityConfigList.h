#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureAbilityConfig; }
namespace RPG::GameCore { class AdventureModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVENTUREABILITYCONFIGLIST_METHOD_2_E5D859DA6DE00C50_OFFSET UNITYSDK_OFFSET(0x16F4A240)
#define RPG_GAMECORE_ADVENTUREABILITYCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4A390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAbilityConfigList_TypeDefinitionIndex = 16006;

	class AdventureAbilityConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureAbilityConfig*>* AbilityList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureModifierConfig*>* GlobalModifiers; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E5D859DA6DE00C50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAbilityConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAbilityConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREABILITYCONFIGLIST_METHOD_2_E5D859DA6DE00C50_OFFSET))(a1, a2);
		}
	};
}
