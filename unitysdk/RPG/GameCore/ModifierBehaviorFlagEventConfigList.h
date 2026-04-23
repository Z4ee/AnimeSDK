#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ModifierBehaviorFlagEventConfig; }

#define RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIGLIST_METHOD_2_4B2DEE27AE345D81_OFFSET UNITYSDK_OFFSET(0x18B32CE0)
#define RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18B32DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierBehaviorFlagEventConfigList_TypeDefinitionIndex = 16200;

	class ModifierBehaviorFlagEventConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlagEventConfig*>* ModifierBehaviorFlagEventConfigs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4B2DEE27AE345D81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierBehaviorFlagEventConfigList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierBehaviorFlagEventConfigList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIGLIST_METHOD_2_4B2DEE27AE345D81_OFFSET))(a1, a2);
		}
	};
}
