#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D9968D936B3A50DA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISTREAMINGGAMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x137890E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStreamingGameContext_TypeDefinitionIndex = 40709;

	class UIStreamingGameContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_D9968D936B3A50DA DefaultHUDSubState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTREAMINGGAMECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
