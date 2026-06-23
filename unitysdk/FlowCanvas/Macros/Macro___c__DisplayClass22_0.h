#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion { class DynamicParameterDefinition; }

#define FLOWCANVAS_MACROS_MACRO___C__DISPLAYCLASS22_0__ADDINPUTDEFINITION_B__0_OFFSET UNITYSDK_OFFSET(0x1D7FD4A0)
#define FLOWCANVAS_MACROS_MACRO___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FD490)

namespace FlowCanvas::Macros
{
	inline static constexpr unsigned int Macro___c__DisplayClass22_0_TypeDefinitionIndex = 29778;

	class Macro___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::ParadoxNotion::DynamicParameterDefinition* def; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddInputDefinition_b__0(::ParadoxNotion::DynamicParameterDefinition* d)
		{
			return ((::System::Boolean(*)(::PVOID, ::ParadoxNotion::DynamicParameterDefinition*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO___C__DISPLAYCLASS22_0__ADDINPUTDEFINITION_B__0_OFFSET))(this, d);
		}
	};
}
