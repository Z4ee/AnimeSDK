#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIGENERALNOUNDETAILDIALOGPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19FC4680)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNounDetailDialogPopContext_TypeDefinitionIndex = 63249;

	class UIGeneralNounDetailDialogPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Il2CppArray<::System::String*>* TermText; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNOUNDETAILDIALOGPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
