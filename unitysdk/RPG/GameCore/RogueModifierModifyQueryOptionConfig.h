#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYOPTIONCONFIG_METHOD_3_475A03A476CA344B_OFFSET UNITYSDK_OFFSET(0x1D3FA6E0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYOPTIONCONFIG_METHOD_3_9BCCAD884F76E04F_OFFSET UNITYSDK_OFFSET(0x1D3FA730)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYOPTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FA720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyQueryOptionConfig_TypeDefinitionIndex = 17745;

	class RogueModifierModifyQueryOptionConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYOPTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_475A03A476CA344B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyQueryOptionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyQueryOptionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYOPTIONCONFIG_METHOD_3_475A03A476CA344B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9BCCAD884F76E04F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyQueryOptionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyQueryOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYOPTIONCONFIG_METHOD_3_9BCCAD884F76E04F_OFFSET))(a1, a2);
		}
	};
}
