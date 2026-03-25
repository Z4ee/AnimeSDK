#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISINCHARMACTION_METHOD_4_2D21B70280E6EC08_OFFSET UNITYSDK_OFFSET(0x1702F460)
#define RPG_GAMECORE_BYISINCHARMACTION_METHOD_4_943EE193EF2CCDF2_OFFSET UNITYSDK_OFFSET(0x1702F390)
#define RPG_GAMECORE_BYISINCHARMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1702F410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInCharmAction_TypeDefinitionIndex = 21727;

	class ByIsInCharmAction : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARMACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_943EE193EF2CCDF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInCharmAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInCharmAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARMACTION_METHOD_4_943EE193EF2CCDF2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2D21B70280E6EC08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInCharmAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInCharmAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCHARMACTION_METHOD_4_2D21B70280E6EC08_OFFSET))(a1, a2);
		}
	};
}
