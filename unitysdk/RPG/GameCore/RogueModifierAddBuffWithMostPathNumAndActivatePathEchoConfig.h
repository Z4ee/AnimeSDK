#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERADDBUFFWITHMOSTPATHNUMANDACTIVATEPATHECHOCONFIG_METHOD_3_014EC9CDCB233420_OFFSET UNITYSDK_OFFSET(0x1D3F6AA0)
#define RPG_GAMECORE_ROGUEMODIFIERADDBUFFWITHMOSTPATHNUMANDACTIVATEPATHECHOCONFIG_METHOD_3_321999F2AFB31EE4_OFFSET UNITYSDK_OFFSET(0x1D3F6A50)
#define RPG_GAMECORE_ROGUEMODIFIERADDBUFFWITHMOSTPATHNUMANDACTIVATEPATHECHOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F6A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAddBuffWithMostPathNumAndActivatePathEchoConfig_TypeDefinitionIndex = 17616;

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
