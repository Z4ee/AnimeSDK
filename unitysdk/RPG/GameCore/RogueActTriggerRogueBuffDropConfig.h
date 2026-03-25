#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFDROPCONFIG_METHOD_6_1EAF46493B45E89E_OFFSET UNITYSDK_OFFSET(0x175CA9F0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFDROPCONFIG_METHOD_6_67077581AF48011B_OFFSET UNITYSDK_OFFSET(0x175CA7D0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFDROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175CA910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueBuffDropConfig_TypeDefinitionIndex = 17943;

	class RogueActTriggerRogueBuffDropConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFDROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_67077581AF48011B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFDROPCONFIG_METHOD_6_67077581AF48011B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_1EAF46493B45E89E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffDropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFDROPCONFIG_METHOD_6_1EAF46493B45E89E_OFFSET))(a1, a2);
		}
	};
}
