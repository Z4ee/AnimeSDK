#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDScenePerformNode.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDAVATARSCENEPERFORMNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x14279FC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDAVATARSCENEPERFORMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1427A190)
#define MOLEMOLE_FLOWCANVAS_NODES_LDAVATARSCENEPERFORMNODE__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x1427A1D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDAVATARSCENEPERFORMNODE___BASE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1427A630)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAvatarScenePerformNode_TypeDefinitionIndex = 39136;

	class LDAvatarScenePerformNode : public ::MoleMole::FlowCanvas::Nodes::LDScenePerformNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* cameraShotType; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDAVATARSCENEPERFORMNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDAVATARSCENEPERFORMNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDAVATARSCENEPERFORMNODE__REGISTERPORTS_B__1_0_OFFSET))(this, f);
		}

		::System::Void __base_RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDAVATARSCENEPERFORMNODE___BASE_REGISTERPORTS_OFFSET))(this);
		}
	};
}
