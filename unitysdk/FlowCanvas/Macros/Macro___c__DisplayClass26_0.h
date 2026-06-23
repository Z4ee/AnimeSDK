#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion { class DynamicParameterDefinition; }
namespace System { class String; }

#define FLOWCANVAS_MACROS_MACRO___C__DISPLAYCLASS26_0__CALLFLOWINPUT_B__0_OFFSET UNITYSDK_OFFSET(0x1D1D7BD0)
#define FLOWCANVAS_MACROS_MACRO___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D7BC0)

namespace FlowCanvas::Macros
{
	inline static constexpr unsigned int Macro___c__DisplayClass26_0_TypeDefinitionIndex = 29777;

	class Macro___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CallFlowInput_b__0(::ParadoxNotion::DynamicParameterDefinition* d)
		{
			return ((::System::Boolean(*)(::PVOID, ::ParadoxNotion::DynamicParameterDefinition*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO___C__DISPLAYCLASS26_0__CALLFLOWINPUT_B__0_OFFSET))(this, d);
		}
	};
}
