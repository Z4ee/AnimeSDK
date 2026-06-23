#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_LDREADRABLEVELID_INVOKE_OFFSET UNITYSDK_OFFSET(0x18B19980)
#define MOLEMOLE_FLOWCANVAS_LDREADRABLEVELID__CTOR_OFFSET UNITYSDK_OFFSET(0x18B19AB0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LDReadRABLevelId_TypeDefinitionIndex = 78823;

	class LDReadRABLevelId : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADRABLEVELID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADRABLEVELID_INVOKE_OFFSET))(this);
		}
	};
}
