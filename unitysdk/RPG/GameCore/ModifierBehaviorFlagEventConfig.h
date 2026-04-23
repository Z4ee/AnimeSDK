#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlagEventType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIG_METHOD_2_5A1C4E27B918630F_OFFSET UNITYSDK_OFFSET(0x18B32BA0)
#define RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18B32CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierBehaviorFlagEventConfig_TypeDefinitionIndex = 16201;

	class ModifierBehaviorFlagEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CallbackConfig; // 0x10
		::RPG::GameCore::ModifierBehaviorFlagEventType EventType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5A1C4E27B918630F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierBehaviorFlagEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierBehaviorFlagEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORFLAGEVENTCONFIG_METHOD_2_5A1C4E27B918630F_OFFSET))(a1, a2);
		}
	};
}
