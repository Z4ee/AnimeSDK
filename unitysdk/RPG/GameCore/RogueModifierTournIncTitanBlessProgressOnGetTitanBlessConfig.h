#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERTOURNINCTITANBLESSPROGRESSONGETTITANBLESSCONFIG_METHOD_3_03681F91524F5A71_OFFSET UNITYSDK_OFFSET(0x18D47360)
#define RPG_GAMECORE_ROGUEMODIFIERTOURNINCTITANBLESSPROGRESSONGETTITANBLESSCONFIG_METHOD_3_C059723FD6A9F508_OFFSET UNITYSDK_OFFSET(0x18D47430)
#define RPG_GAMECORE_ROGUEMODIFIERTOURNINCTITANBLESSPROGRESSONGETTITANBLESSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D473E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierTournIncTitanBlessProgressOnGetTitanBlessConfig_TypeDefinitionIndex = 16883;

	class RogueModifierTournIncTitanBlessProgressOnGetTitanBlessConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTOURNINCTITANBLESSPROGRESSONGETTITANBLESSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_03681F91524F5A71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierTournIncTitanBlessProgressOnGetTitanBlessConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierTournIncTitanBlessProgressOnGetTitanBlessConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTOURNINCTITANBLESSPROGRESSONGETTITANBLESSCONFIG_METHOD_3_03681F91524F5A71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C059723FD6A9F508(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierTournIncTitanBlessProgressOnGetTitanBlessConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierTournIncTitanBlessProgressOnGetTitanBlessConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTOURNINCTITANBLESSPROGRESSONGETTITANBLESSCONFIG_METHOD_3_C059723FD6A9F508_OFFSET))(a1, a2);
		}
	};
}
