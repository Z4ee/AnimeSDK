#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERADDBUFFWITHMOSTPATHNUMANDACTIVATEPATHECHOCONFIG_METHOD_3_014EC9CDCB233420_OFFSET UNITYSDK_OFFSET(0x1CFBEE60)
#define RPG_GAMECORE_ROGUEMODIFIERADDBUFFWITHMOSTPATHNUMANDACTIVATEPATHECHOCONFIG_METHOD_3_321999F2AFB31EE4_OFFSET UNITYSDK_OFFSET(0x1CFBEE10)
#define RPG_GAMECORE_ROGUEMODIFIERADDBUFFWITHMOSTPATHNUMANDACTIVATEPATHECHOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBEE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAddBuffWithMostPathNumAndActivatePathEchoConfig_TypeDefinitionIndex = 17102;

	class RogueModifierAddBuffWithMostPathNumAndActivatePathEchoConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDBUFFWITHMOSTPATHNUMANDACTIVATEPATHECHOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_321999F2AFB31EE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddBuffWithMostPathNumAndActivatePathEchoConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddBuffWithMostPathNumAndActivatePathEchoConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDBUFFWITHMOSTPATHNUMANDACTIVATEPATHECHOCONFIG_METHOD_3_321999F2AFB31EE4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_014EC9CDCB233420(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddBuffWithMostPathNumAndActivatePathEchoConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddBuffWithMostPathNumAndActivatePathEchoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDBUFFWITHMOSTPATHNUMANDACTIVATEPATHECHOCONFIG_METHOD_3_014EC9CDCB233420_OFFSET))(a1, a2);
		}
	};
}
