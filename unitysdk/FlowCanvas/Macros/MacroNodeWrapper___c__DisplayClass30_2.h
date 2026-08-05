#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Macros { class MacroNodeWrapper___c__DisplayClass30_1; }
namespace ParadoxNotion { class DynamicParameterDefinition; }

#define FLOWCANVAS_MACROS_MACRONODEWRAPPER___C__DISPLAYCLASS30_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA92710)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER___C__DISPLAYCLASS30_2__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1EA92720)

namespace FlowCanvas::Macros
{
	inline static constexpr unsigned int MacroNodeWrapper___c__DisplayClass30_2_TypeDefinitionIndex = 30869;

	class MacroNodeWrapper___c__DisplayClass30_2 : public ::System::Object
	{
	public:
		::FlowCanvas::Macros::MacroNodeWrapper___c__DisplayClass30_1* CS___8__locals2; // 0x10
		::ParadoxNotion::DynamicParameterDefinition* defIn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER___C__DISPLAYCLASS30_2__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER___C__DISPLAYCLASS30_2__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
