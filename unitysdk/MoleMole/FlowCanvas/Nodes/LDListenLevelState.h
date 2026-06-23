#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/LevelStateDefine_ELevelStateName.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE_BEGIN_OFFSET UNITYSDK_OFFSET(0x10D3D810)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D3D990)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x10D3DA40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10D3D500)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D3DAF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x10D3DB30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x10D3DBE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE__REGISTERPORTS_B__5_2_OFFSET UNITYSDK_OFFSET(0x10D3DC90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE__REGISTERPORTS_B__5_3_OFFSET UNITYSDK_OFFSET(0x10D3DD30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D3DDD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDListenLevelState_TypeDefinitionIndex = 81355;

	class LDListenLevelState : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::FlowInput* beginFlowInput; // 0xB0
		::FlowCanvas::FlowOutput* _onStateChangedOutput; // 0xB8
		::Struct_2_A47ACAABA9AAFE92 stateValue; // 0xC0
		::MoleMole::LevelStateDefine_ELevelStateName LevelStateName; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE_BEGIN_OFFSET))(this, f);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnStateChanged(::MoleMole::LevelStateDefine_ELevelStateName name, ::Struct_2_A47ACAABA9AAFE92 args)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::LevelStateDefine_ELevelStateName, ::Struct_2_A47ACAABA9AAFE92))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE_ONSTATECHANGED_OFFSET))(this, name, args);
		}

		::System::Boolean _RegisterPorts_b__5_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__5_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE__REGISTERPORTS_B__5_1_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__5_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE__REGISTERPORTS_B__5_2_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__5_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE__REGISTERPORTS_B__5_3_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENLEVELSTATE___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
