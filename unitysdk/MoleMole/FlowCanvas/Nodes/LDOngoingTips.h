#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_0_16E4307DCC419505_518;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x18A3CCF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x18A3CB60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS_WAITFORPLAYING_OFFSET UNITYSDK_OFFSET(0x18A3CC60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3CD50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x18A3CD90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x18A3D190)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x18A3D1D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDOngoingTips_TypeDefinitionIndex = 54676;

	class LDOngoingTips : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _finish; // 0xA8
		::FlowCanvas::FlowOutput* _out; // 0xB0
		::UnityEngine::Coroutine* _waitStartCoroutine; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* _groupID; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS_REGISTERPORTS_OFFSET))(this);
		}

		static ::System::Collections::IEnumerator* WaitForPlaying(::Class_0_16E4307DCC419505_518* inLevel, ::System::Int32 groupID, ::FlowCanvas::FlowOutput* finish)
		{
			return ((::System::Collections::IEnumerator*(*)(::Class_0_16E4307DCC419505_518*, ::System::Int32, ::FlowCanvas::FlowOutput*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS_WAITFORPLAYING_OFFSET))(inLevel, groupID, finish);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__REGISTERPORTS_B__4_1_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
