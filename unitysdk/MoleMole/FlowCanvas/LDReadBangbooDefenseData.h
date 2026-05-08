#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace MoleMole::FlatBuffers::Config { class BangbooDefenseDataTemplate; }

#define MOLEMOLE_FLOWCANVAS_LDREADBANGBOODEFENSEDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x18A384B0)
#define MOLEMOLE_FLOWCANVAS_LDREADBANGBOODEFENSEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18A38600)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LDReadBangbooDefenseData_TypeDefinitionIndex = 77502;

	class LDReadBangbooDefenseData : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::MoleMole::FlatBuffers::Config::BangbooDefenseDataTemplate*, ::System::Int32, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADBANGBOODEFENSEDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::FlatBuffers::Config::BangbooDefenseDataTemplate* Invoke(::System::Int32 Id, ::System::Boolean UseCurrentLevel)
		{
			return ((::MoleMole::FlatBuffers::Config::BangbooDefenseDataTemplate*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADBANGBOODEFENSEDATA_INVOKE_OFFSET))(this, Id, UseCurrentLevel);
		}
	};
}
