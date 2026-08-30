#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ModifierBehaviorFlagEventConfig; }

#define RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIGLIST_METHOD_2_59F2B271254F8004_OFFSET UNITYSDK_OFFSET(0x1D2AA810)
#define RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2AA8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierBehaviorFlagEventConfigList_TypeDefinitionIndex = 16915;

	class ModifierBehaviorFlagEventConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlagEventConfig*>* ModifierBehaviorFlagEventConfigs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_59F2B271254F8004(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierBehaviorFlagEventConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierBehaviorFlagEventConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIGLIST_METHOD_2_59F2B271254F8004_OFFSET))(a1, a2);
		}
	};
}
