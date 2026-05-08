#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_72D718364F0A8071.h"

class Class_2_1824EF69C8E376A3;

#define MOLEMOLE_UIROLESKILLLEVELUPPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13E220B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillLevelUpPopContext_TypeDefinitionIndex = 80309;

	class UIRoleSkillLevelUpPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_1824EF69C8E376A3* avatar; // 0x28
		::Struct_2_72D718364F0A8071 skill; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
