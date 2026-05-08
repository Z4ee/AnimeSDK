#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AnchorPointForwardAxis.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCAMERACUTSCENE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x15414DC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCAMERACUTSCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x15415010)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCAMERACUTSCENE__REGISTERPORTS_B__13_0_OFFSET UNITYSDK_OFFSET(0x15415050)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCAMERACUTSCENE__REGISTERPORTS_B__13_1_OFFSET UNITYSDK_OFFSET(0x154157F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCAMERACUTSCENE__REGISTERPORTS_B__13_2_OFFSET UNITYSDK_OFFSET(0x15415830)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCAMERACUTSCENE__REGISTERPORTS_B__13_3_OFFSET UNITYSDK_OFFSET(0x15415870)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCAMERACUTSCENE__REGISTERPORTS_B__13_4_OFFSET UNITYSDK_OFFSET(0x154158B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCAMERACUTSCENE__REGISTERPORTS_B__13_5_OFFSET UNITYSDK_OFFSET(0x154158F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPlayCameraCutScene_TypeDefinitionIndex = 46091;

	class LDPlayCameraCutScene : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* _overrideWorldAnchorPoint; // 0xA8
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* _overrideWorldPosition; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* _cameraShotKey; // 0xB8
		::FlowCanvas::ValueInput_1<::Foundation::Unreal::FTransform3D>* _overridePlayOrigin; // 0xC0
		::FlowCanvas::FlowOutput* _onFinished; // 0xC8
		::FlowCanvas::FlowOutput* _onBlendOut; // 0xD0
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* _entity; // 0xD8
		::FlowCanvas::FlowOutput* _onBlendIn; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isGroupShotData; // 0xE8
		::FlowCanvas::FlowOutput* _onDestroy; // 0xF0
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* _overrideArchorPointAxis; // 0xF8
		::FlowCanvas::FlowOutput* _output; // 0x100
		::FlowCanvas::ValueInput_1<::System::Single>* _playRate; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCAMERACUTSCENE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCAMERACUTSCENE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__13_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCAMERACUTSCENE__REGISTERPORTS_B__13_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__13_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCAMERACUTSCENE__REGISTERPORTS_B__13_1_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__13_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCAMERACUTSCENE__REGISTERPORTS_B__13_2_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__13_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCAMERACUTSCENE__REGISTERPORTS_B__13_3_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__13_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCAMERACUTSCENE__REGISTERPORTS_B__13_4_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__13_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCAMERACUTSCENE__REGISTERPORTS_B__13_5_OFFSET))(this);
		}
	};
}
