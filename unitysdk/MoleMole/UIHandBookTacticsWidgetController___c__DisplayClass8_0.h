#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHandBookTacticsWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x189835D0)
#define MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x189835E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookTacticsWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 78760;

	class UIHandBookTacticsWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::String*> kv; // 0x10
		::MoleMole::UIHandBookTacticsWidgetController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
