#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERTITANBLESSANAXAEXCONFIG_METHOD_3_107DE74940CF5B73_OFFSET UNITYSDK_OFFSET(0x18D47190)
#define RPG_GAMECORE_ROGUEMODIFIERTITANBLESSANAXAEXCONFIG_METHOD_3_69D3510544EE5CBA_OFFSET UNITYSDK_OFFSET(0x18D470C0)
#define RPG_GAMECORE_ROGUEMODIFIERTITANBLESSANAXAEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D47140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierTitanBlessAnaxaExConfig_TypeDefinitionIndex = 16869;

	class RogueModifierTitanBlessAnaxaExConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTITANBLESSANAXAEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_69D3510544EE5CBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierTitanBlessAnaxaExConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierTitanBlessAnaxaExConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTITANBLESSANAXAEXCONFIG_METHOD_3_69D3510544EE5CBA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_107DE74940CF5B73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierTitanBlessAnaxaExConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierTitanBlessAnaxaExConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTITANBLESSANAXAEXCONFIG_METHOD_3_107DE74940CF5B73_OFFSET))(a1, a2);
		}
	};
}
