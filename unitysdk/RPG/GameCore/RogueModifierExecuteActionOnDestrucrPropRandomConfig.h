#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDESTRUCRPROPRANDOMCONFIG_METHOD_3_42586542FD522BA6_OFFSET UNITYSDK_OFFSET(0x1762FCD0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDESTRUCRPROPRANDOMCONFIG_METHOD_3_95C91190C04AF4CF_OFFSET UNITYSDK_OFFSET(0x1762FC00)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDESTRUCRPROPRANDOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1762FC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnDestrucrPropRandomConfig_TypeDefinitionIndex = 16487;

	class RogueModifierExecuteActionOnDestrucrPropRandomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDESTRUCRPROPRANDOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_95C91190C04AF4CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnDestrucrPropRandomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnDestrucrPropRandomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDESTRUCRPROPRANDOMCONFIG_METHOD_3_95C91190C04AF4CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_42586542FD522BA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnDestrucrPropRandomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnDestrucrPropRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONDESTRUCRPROPRANDOMCONFIG_METHOD_3_42586542FD522BA6_OFFSET))(a1, a2);
		}
	};
}
