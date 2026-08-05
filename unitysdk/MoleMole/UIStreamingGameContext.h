#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C856E655551E512E.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISTREAMINGGAMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15E91730)

namespace MoleMole
{
	inline static constexpr unsigned int UIStreamingGameContext_TypeDefinitionIndex = 73206;

	class UIStreamingGameContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_C856E655551E512E DefaultHUDSubState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTREAMINGGAMECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
