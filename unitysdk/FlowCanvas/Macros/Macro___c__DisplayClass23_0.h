#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion { class DynamicParameterDefinition; }

#define FLOWCANVAS_MACROS_MACRO___C__DISPLAYCLASS23_0__ADDOUTPUTDEFINITION_B__0_OFFSET UNITYSDK_OFFSET(0x1A293860)
#define FLOWCANVAS_MACROS_MACRO___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A293030)

namespace FlowCanvas::Macros
{
	inline static constexpr unsigned int Macro___c__DisplayClass23_0_TypeDefinitionIndex = 26771;

	class Macro___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::ParadoxNotion::DynamicParameterDefinition* def; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddOutputDefinition_b__0(::ParadoxNotion::DynamicParameterDefinition* d)
		{
			return ((::System::Boolean(*)(::PVOID, ::ParadoxNotion::DynamicParameterDefinition*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO___C__DISPLAYCLASS23_0__ADDOUTPUTDEFINITION_B__0_OFFSET))(this, d);
		}
	};
}
