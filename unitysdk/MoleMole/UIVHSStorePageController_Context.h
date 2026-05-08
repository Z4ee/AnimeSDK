#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIVHSStorePageController_Context_Mode.h"

class Class_1_F71F7FB55BBEB1D9;
namespace MoleMole { class UIVHSStoreLimitWidgetController_Context; }

#define MOLEMOLE_UIVHSSTOREPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11335A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStorePageController_Context_TypeDefinitionIndex = 63427;

	class UIVHSStorePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIVHSStoreLimitWidgetController_Context* miniGameContext; // 0x28
		::Class_1_F71F7FB55BBEB1D9* storeData; // 0x30
		::MoleMole::UIVHSStorePageController_Context_Mode mode; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
