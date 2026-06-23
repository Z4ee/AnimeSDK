#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCENEINFO_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16CA34D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCENEINFO_START_OFFSET UNITYSDK_OFFSET(0x16CA3680)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCENEINFO_UPDATEINFO_OFFSET UNITYSDK_OFFSET(0x16CA36C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCENEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA3700)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowSceneInfo_TypeDefinitionIndex = 62424;

	class LDShowSceneInfo : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* Message; // 0xA8
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* Forward; // 0xB0
		::MoleMole::GameplayTag InfoTag; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* PositionRelativePlayer; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Boolean>* ForwardToPlayer; // 0xD0
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* PositionOffset; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Int32>* FontSize; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCENEINFO__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCENEINFO_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCENEINFO_START_OFFSET))(this);
		}

		::System::Void UpdateInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCENEINFO_UPDATEINFO_OFFSET))(this);
		}
	};
}
