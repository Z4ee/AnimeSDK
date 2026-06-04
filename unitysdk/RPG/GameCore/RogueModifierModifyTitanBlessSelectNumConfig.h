#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTITANBLESSSELECTNUMCONFIG_METHOD_3_09E0C8FA55A894D0_OFFSET UNITYSDK_OFFSET(0x19B98E60)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTITANBLESSSELECTNUMCONFIG_METHOD_3_398F6A9ED839D529_OFFSET UNITYSDK_OFFSET(0x19B98F30)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTITANBLESSSELECTNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B98EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyTitanBlessSelectNumConfig_TypeDefinitionIndex = 16870;

	class RogueModifierModifyTitanBlessSelectNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTITANBLESSSELECTNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_09E0C8FA55A894D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyTitanBlessSelectNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyTitanBlessSelectNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTITANBLESSSELECTNUMCONFIG_METHOD_3_09E0C8FA55A894D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_398F6A9ED839D529(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyTitanBlessSelectNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyTitanBlessSelectNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTITANBLESSSELECTNUMCONFIG_METHOD_3_398F6A9ED839D529_OFFSET))(a1, a2);
		}
	};
}
