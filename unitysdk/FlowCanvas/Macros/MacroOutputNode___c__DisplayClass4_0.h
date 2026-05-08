#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Macros { class MacroOutputNode; }
namespace ParadoxNotion { class DynamicParameterDefinition; }

#define FLOWCANVAS_MACROS_MACROOUTPUTNODE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAB360)
#define FLOWCANVAS_MACROS_MACROOUTPUTNODE___C__DISPLAYCLASS4_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1ADAB370)

namespace FlowCanvas::Macros
{
	inline static constexpr unsigned int MacroOutputNode___c__DisplayClass4_0_TypeDefinitionIndex = 27263;

	class MacroOutputNode___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::ParadoxNotion::DynamicParameterDefinition* def; // 0x10
		::FlowCanvas::Macros::MacroOutputNode* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACROOUTPUTNODE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACROOUTPUTNODE___C__DISPLAYCLASS4_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
