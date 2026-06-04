#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYOPTIONCONFIG_METHOD_3_818D50A79351F116_OFFSET UNITYSDK_OFFSET(0x19B5FDC0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYOPTIONCONFIG_METHOD_3_9BCCAD884F76E04F_OFFSET UNITYSDK_OFFSET(0x19B56860)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYOPTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B56810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyQueryOptionConfig_TypeDefinitionIndex = 17067;

	class RogueModifierModifyQueryOptionConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYOPTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_818D50A79351F116(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyQueryOptionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyQueryOptionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYOPTIONCONFIG_METHOD_3_818D50A79351F116_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9BCCAD884F76E04F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyQueryOptionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyQueryOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYOPTIONCONFIG_METHOD_3_9BCCAD884F76E04F_OFFSET))(a1, a2);
		}
	};
}
