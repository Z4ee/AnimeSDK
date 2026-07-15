#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUETITANBLESSSELECTCONFIG_METHOD_6_0B9473FD19B5B977_OFFSET UNITYSDK_OFFSET(0x1C49EE60)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUETITANBLESSSELECTCONFIG_METHOD_6_EC7D9ABDAED02DDB_OFFSET UNITYSDK_OFFSET(0x1C49EEB0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUETITANBLESSSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49EEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueTitanBlessSelectConfig_TypeDefinitionIndex = 18942;

	class RogueActTriggerRogueTitanBlessSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUETITANBLESSSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_0B9473FD19B5B977(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueTitanBlessSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueTitanBlessSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUETITANBLESSSELECTCONFIG_METHOD_6_0B9473FD19B5B977_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_EC7D9ABDAED02DDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueTitanBlessSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueTitanBlessSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUETITANBLESSSELECTCONFIG_METHOD_6_EC7D9ABDAED02DDB_OFFSET))(a1, a2);
		}
	};
}
