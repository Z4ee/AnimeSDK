#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_86AA8F306FA75018;

#define MOLEMOLE_UIMONSTERCARDDATACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19872E30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardDataContext_TypeDefinitionIndex = 47957;

	class UIMonsterCardDataContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_86AA8F306FA75018* MonsterCardSummary; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDDATACONTEXT__CTOR_OFFSET))(this);
		}
	};
}
