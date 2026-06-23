#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICoopTeachPageController_Context; }
namespace MoleMole { class UICoopTeachTabWidgetController_Data; }

#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x166B6FE0)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER___C__DISPLAYCLASS12_0__INITINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x166B6FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopTeachPageController___c__DisplayClass12_0_TypeDefinitionIndex = 85640;

	class UICoopTeachPageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UICoopTeachPageController_Context* ctx; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitIndex_b__0(::MoleMole::UICoopTeachTabWidgetController_Data* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UICoopTeachTabWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER___C__DISPLAYCLASS12_0__INITINDEX_B__0_OFFSET))(this, x);
		}
	};
}
