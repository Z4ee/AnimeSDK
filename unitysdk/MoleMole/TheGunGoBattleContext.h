#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_F88C6BB7AF47AD69;

#define MOLEMOLE_THEGUNGOBATTLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1190F520)

namespace MoleMole
{
	inline static constexpr unsigned int TheGunGoBattleContext_TypeDefinitionIndex = 87006;

	class TheGunGoBattleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_F88C6BB7AF47AD69* ItemData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_THEGUNGOBATTLECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
