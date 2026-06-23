#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A6875CC70890641D.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISTREAMINGGAMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16172A60)

namespace MoleMole
{
	inline static constexpr unsigned int UIStreamingGameContext_TypeDefinitionIndex = 83738;

	class UIStreamingGameContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_A6875CC70890641D DefaultHUDSubState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTREAMINGGAMECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
