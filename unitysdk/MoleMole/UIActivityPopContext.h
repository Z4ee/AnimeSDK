#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_4865323EE33E9248;

#define MOLEMOLE_UIACTIVITYPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17439F50)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityPopContext_TypeDefinitionIndex = 82968;

	class UIActivityPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_4865323EE33E9248* popData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
