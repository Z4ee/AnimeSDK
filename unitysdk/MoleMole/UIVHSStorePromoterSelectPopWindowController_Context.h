#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIVHSSTOREPROMOTERSELECTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xF62BC00)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStorePromoterSelectPopWindowController_Context_TypeDefinitionIndex = 50992;

	class UIVHSStorePromoterSelectPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean isReadonly; // 0x28
		::System::UInt32 initSelect; // 0x2C

		::System::Void _ctor(::System::UInt32 initSelect, ::System::Boolean isReadonly)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPROMOTERSELECTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this, initSelect, isReadonly);
		}
	};
}
