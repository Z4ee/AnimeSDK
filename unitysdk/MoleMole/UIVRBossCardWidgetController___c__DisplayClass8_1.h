#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_7.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__DISPLAYCLASS8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15ECA240)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__DISPLAYCLASS8_1__ONSCROLLITEMUPDATE_B__2_OFFSET UNITYSDK_OFFSET(0x15ECA250)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossCardWidgetController___c__DisplayClass8_1_TypeDefinitionIndex = 81440;

	class UIVRBossCardWidgetController___c__DisplayClass8_1 : public ::System::Object
	{
	public:
		::System::Int32 materialItemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__DISPLAYCLASS8_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnScrollItemUpdate_b__2(::Struct_2_3659D99D9E0DCBB9_7 preview)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_3659D99D9E0DCBB9_7))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__DISPLAYCLASS8_1__ONSCROLLITEMUPDATE_B__2_OFFSET))(this, preview);
		}
	};
}
