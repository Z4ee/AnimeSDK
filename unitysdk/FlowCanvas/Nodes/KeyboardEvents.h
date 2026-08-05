#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace FlowCanvas { class FlowOutput; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define FLOWCANVAS_NODES_KEYBOARDEVENTS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E229B30)
#define FLOWCANVAS_NODES_KEYBOARDEVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E229C40)
#define FLOWCANVAS_NODES_KEYBOARDEVENTS_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E229CD0)
#define FLOWCANVAS_NODES_KEYBOARDEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E229CE0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int KeyboardEvents_TypeDefinitionIndex = 31277;

	class KeyboardEvents : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* up; // 0xA8
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::KeyCode>* keyCode; // 0xB0
		::FlowCanvas::FlowOutput* pressed; // 0xB8
		::FlowCanvas::FlowOutput* down; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_KEYBOARDEVENTS__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_KEYBOARDEVENTS_GET_NAME_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_KEYBOARDEVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_KEYBOARDEVENTS_UPDATE_OFFSET))(this);
		}
	};
}
