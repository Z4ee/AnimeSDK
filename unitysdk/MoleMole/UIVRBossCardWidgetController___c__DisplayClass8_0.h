#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_10.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11583F40)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSCROLLITEMUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x11583F50)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossCardWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 64804;

	class UIVRBossCardWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Int32 materialItemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnScrollItemUpdate_b__1(::Struct_2_3659D99D9E0DCBB9_10 preview)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_3659D99D9E0DCBB9_10))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSCROLLITEMUPDATE_B__1_OFFSET))(this, preview);
		}
	};
}
