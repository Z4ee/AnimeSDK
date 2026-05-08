#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Macros { class MacroNodeWrapper___c__DisplayClass30_0; }
namespace ParadoxNotion { class DynamicParameterDefinition; }

#define FLOWCANVAS_MACROS_MACRONODEWRAPPER___C__DISPLAYCLASS30_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B323FE0)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER___C__DISPLAYCLASS30_3__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1B323FF0)

namespace FlowCanvas::Macros
{
	inline static constexpr unsigned int MacroNodeWrapper___c__DisplayClass30_3_TypeDefinitionIndex = 27155;

	class MacroNodeWrapper___c__DisplayClass30_3 : public ::System::Object
	{
	public:
		::ParadoxNotion::DynamicParameterDefinition* defOut; // 0x10
		::FlowCanvas::Macros::MacroNodeWrapper___c__DisplayClass30_0* CS___8__locals3; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER___C__DISPLAYCLASS30_3__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__1()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER___C__DISPLAYCLASS30_3__REGISTERPORTS_B__1_OFFSET))(this);
		}
	};
}
