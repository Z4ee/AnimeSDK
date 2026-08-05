#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace MoleMole::FlatBuffers::Config { class RABMapConfigTemplate; }

#define MOLEMOLE_FLOWCANVAS_LDREADRABDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x149D58C0)
#define MOLEMOLE_FLOWCANVAS_LDREADRABDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x149D5A10)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LDReadRABData_TypeDefinitionIndex = 89768;

	class LDReadRABData : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::MoleMole::FlatBuffers::Config::RABMapConfigTemplate*, ::System::Int32, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADRABDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::FlatBuffers::Config::RABMapConfigTemplate* Invoke(::System::Int32 Id, ::System::Boolean UseCurrentLevel)
		{
			return ((::MoleMole::FlatBuffers::Config::RABMapConfigTemplate*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADRABDATA_INVOKE_OFFSET))(this, Id, UseCurrentLevel);
		}
	};
}
