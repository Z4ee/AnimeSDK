#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowHandler; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERLOOPSCENENODE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x161DAF50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERLOOPSCENENODE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x161DAF90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERLOOPSCENENODE___C__REGISTERPORTS_B__7_1_OFFSET UNITYSDK_OFFSET(0x161DAFA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelZeroEnterLoopSceneNode___c_TypeDefinitionIndex = 63836;

	class LDLevelZeroEnterLoopSceneNode___c : public ::System::Object
	{
	public:
		static ::FlowCanvas::FlowHandler** StaticGet___9__7_1()
		{
			return (::FlowCanvas::FlowHandler**)Il2CppClass::FromTypeDefinitionIndex(LDLevelZeroEnterLoopSceneNode___c_TypeDefinitionIndex)->GetStaticField(0x37580);
		}
		static ::MoleMole::FlowCanvas::Nodes::LDLevelZeroEnterLoopSceneNode___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LDLevelZeroEnterLoopSceneNode___c**)Il2CppClass::FromTypeDefinitionIndex(LDLevelZeroEnterLoopSceneNode___c_TypeDefinitionIndex)->GetStaticField(0x37588);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERLOOPSCENENODE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERLOOPSCENENODE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__7_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERLOOPSCENENODE___C__REGISTERPORTS_B__7_1_OFFSET))(this, flow);
		}
	};
}
