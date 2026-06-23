#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Macros { class Macro; }
namespace FlowCanvas::Macros { class MacroNodeWrapper; }

#define FLOWCANVAS_MACROS_MACRONODEWRAPPER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DC8D0)

namespace FlowCanvas::Macros
{
	inline static constexpr unsigned int MacroNodeWrapper___c__DisplayClass30_0_TypeDefinitionIndex = 29639;

	class MacroNodeWrapper___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Macros::MacroNodeWrapper* __4__this; // 0x10
		::FlowCanvas::Macros::Macro* target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}
	};
}
