#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace MoleMole::FlatBuffers::Config { class ABMapConfigTemplate; }

#define MOLEMOLE_FLOWCANVAS_LDREADBANGBOOAUTOBATTLEDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x12BAC420)
#define MOLEMOLE_FLOWCANVAS_LDREADBANGBOOAUTOBATTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12BAC570)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LDReadBangbooAutoBattleData_TypeDefinitionIndex = 85320;

	class LDReadBangbooAutoBattleData : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::MoleMole::FlatBuffers::Config::ABMapConfigTemplate*, ::System::Int32, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADBANGBOOAUTOBATTLEDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::FlatBuffers::Config::ABMapConfigTemplate* Invoke(::System::Int32 Id, ::System::Boolean UseCurrentLevel)
		{
			return ((::MoleMole::FlatBuffers::Config::ABMapConfigTemplate*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDREADBANGBOOAUTOBATTLEDATA_INVOKE_OFFSET))(this, Id, UseCurrentLevel);
		}
	};
}
