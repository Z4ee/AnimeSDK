#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_E055DAB088B97B64;

#define MOLEMOLE_UIROLEEFFECTDIALOGPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D43B20)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEffectDialogPopContext_TypeDefinitionIndex = 58593;

	class UIRoleEffectDialogPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_E055DAB088B97B64* info; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEFFECTDIALOGPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
