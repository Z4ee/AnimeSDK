#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAGUIDECONFIG_METHOD_3_46FC3CA0259C1CDB_OFFSET UNITYSDK_OFFSET(0x18D43E40)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAGUIDECONFIG_METHOD_3_EA7A812E75C3E952_OFFSET UNITYSDK_OFFSET(0x18D43F10)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAGUIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D43EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaGuideConfig_TypeDefinitionIndex = 16955;

	class RogueModifierPersonaGuideConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAGUIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_46FC3CA0259C1CDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaGuideConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaGuideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAGUIDECONFIG_METHOD_3_46FC3CA0259C1CDB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EA7A812E75C3E952(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaGuideConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaGuideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAGUIDECONFIG_METHOD_3_EA7A812E75C3E952_OFFSET))(a1, a2);
		}
	};
}
