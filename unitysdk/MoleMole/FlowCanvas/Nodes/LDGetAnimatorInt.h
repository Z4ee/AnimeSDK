#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETANIMATORINT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x125AD4F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETANIMATORINT__CTOR_OFFSET UNITYSDK_OFFSET(0x125AD5F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETANIMATORINT__REGISTERPORTS_B__3_0_OFFSET UNITYSDK_OFFSET(0x125AD630)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetAnimatorInt_TypeDefinitionIndex = 60011;

	class LDGetAnimatorInt : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::Int32>* Output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* Key; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* SceneEntity; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETANIMATORINT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETANIMATORINT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__3_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETANIMATORINT__REGISTERPORTS_B__3_0_OFFSET))(this);
		}
	};
}
