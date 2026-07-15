#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYAEONCONFIG_METHOD_6_29459193F386B4F9_OFFSET UNITYSDK_OFFSET(0x1C49E680)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYAEONCONFIG_METHOD_6_799B27028DB0EF3D_OFFSET UNITYSDK_OFFSET(0x1C49E6D0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYAEONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49E6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueBuffSelectByAeonConfig_TypeDefinitionIndex = 18892;

	class RogueActTriggerRogueBuffSelectByAeonConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYAEONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_29459193F386B4F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByAeonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByAeonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYAEONCONFIG_METHOD_6_29459193F386B4F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_799B27028DB0EF3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByAeonConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYAEONCONFIG_METHOD_6_799B27028DB0EF3D_OFFSET))(a1, a2);
		}
	};
}
