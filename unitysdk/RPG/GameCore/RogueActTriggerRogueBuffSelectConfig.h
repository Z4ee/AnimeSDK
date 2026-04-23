#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTCONFIG_METHOD_6_313C38EAF7CF2252_OFFSET UNITYSDK_OFFSET(0x18CD6D60)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTCONFIG_METHOD_6_FC4016487845EEB7_OFFSET UNITYSDK_OFFSET(0x18CD6F80)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD6EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueBuffSelectConfig_TypeDefinitionIndex = 18586;

	class RogueActTriggerRogueBuffSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_313C38EAF7CF2252(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTCONFIG_METHOD_6_313C38EAF7CF2252_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FC4016487845EEB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTCONFIG_METHOD_6_FC4016487845EEB7_OFFSET))(a1, a2);
		}
	};
}
