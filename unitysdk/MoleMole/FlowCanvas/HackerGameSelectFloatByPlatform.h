#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_6.h"

#define MOLEMOLE_FLOWCANVAS_HACKERGAMESELECTFLOATBYPLATFORM_INVOKE_OFFSET UNITYSDK_OFFSET(0x19BD9590)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMESELECTFLOATBYPLATFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD96F0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameSelectFloatByPlatform_TypeDefinitionIndex = 72526;

	class HackerGameSelectFloatByPlatform : public ::FlowCanvas::Nodes::CallableFunctionNode_6<::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESELECTFLOATBYPLATFORM__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::Single none, ::System::Single mobile, ::System::Single pc, ::System::Single console, ::System::Single mobileConsole)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESELECTFLOATBYPLATFORM_INVOKE_OFFSET))(this, none, mobile, pc, console, mobileConsole);
		}
	};
}
