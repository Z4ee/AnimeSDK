#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_F95242C0939727AB;

#define MOLEMOLE_UIROLEEFFECTDIALOGPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x156A6930)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEffectDialogPopContext_TypeDefinitionIndex = 74887;

	class UIRoleEffectDialogPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_F95242C0939727AB* info; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEFFECTDIALOGPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
