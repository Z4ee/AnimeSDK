#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERTITANBLESSANAXAEXCONFIG_METHOD_3_107DE74940CF5B73_OFFSET UNITYSDK_OFFSET(0x1E5356C0)
#define RPG_GAMECORE_ROGUEMODIFIERTITANBLESSANAXAEXCONFIG_METHOD_3_C6EEE36EF75969AF_OFFSET UNITYSDK_OFFSET(0x1E535670)
#define RPG_GAMECORE_ROGUEMODIFIERTITANBLESSANAXAEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5356B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierTitanBlessAnaxaExConfig_TypeDefinitionIndex = 17549;

	class RogueModifierTitanBlessAnaxaExConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTITANBLESSANAXAEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C6EEE36EF75969AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierTitanBlessAnaxaExConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierTitanBlessAnaxaExConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTITANBLESSANAXAEXCONFIG_METHOD_3_C6EEE36EF75969AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_107DE74940CF5B73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierTitanBlessAnaxaExConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierTitanBlessAnaxaExConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTITANBLESSANAXAEXCONFIG_METHOD_3_107DE74940CF5B73_OFFSET))(a1, a2);
		}
	};
}
