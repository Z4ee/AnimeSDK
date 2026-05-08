#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Macros { class MacroInputNode; }
namespace ParadoxNotion { class DynamicParameterDefinition; }

#define FLOWCANVAS_MACROS_MACROINPUTNODE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19845C40)
#define FLOWCANVAS_MACROS_MACROINPUTNODE___C__DISPLAYCLASS4_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x19845C50)

namespace FlowCanvas::Macros
{
	inline static constexpr unsigned int MacroInputNode___c__DisplayClass4_0_TypeDefinitionIndex = 27849;

	class MacroInputNode___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Macros::MacroInputNode* __4__this; // 0x10
		::ParadoxNotion::DynamicParameterDefinition* def; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACROINPUTNODE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACROINPUTNODE___C__DISPLAYCLASS4_0__REGISTERPORTS_B__0_OFFSET))(this);
		}
	};
}
