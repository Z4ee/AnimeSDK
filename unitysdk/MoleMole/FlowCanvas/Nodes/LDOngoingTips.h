#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_0_16E4307DCC419505_365;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x16CA1750)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16CA15B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS_WAITFORPLAYING_OFFSET UNITYSDK_OFFSET(0x16CA16C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA17B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x16CA17F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x16CA1C10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x16CA1C50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDOngoingTips_TypeDefinitionIndex = 83074;

	class LDOngoingTips : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* _groupID; // 0xA8
		::UnityEngine::Coroutine* _waitStartCoroutine; // 0xB0
		::FlowCanvas::FlowOutput* _out; // 0xB8
		::FlowCanvas::FlowOutput* _finish; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS_REGISTERPORTS_OFFSET))(this);
		}

		static ::System::Collections::IEnumerator* WaitForPlaying(::Class_0_16E4307DCC419505_365* inLevel, ::System::Int32 groupID, ::FlowCanvas::FlowOutput* finish)
		{
			return ((::System::Collections::IEnumerator*(*)(::Class_0_16E4307DCC419505_365*, ::System::Int32, ::FlowCanvas::FlowOutput*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS_WAITFORPLAYING_OFFSET))(inLevel, groupID, finish);
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
