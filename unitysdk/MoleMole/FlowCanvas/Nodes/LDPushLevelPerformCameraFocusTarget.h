#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_6.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUSHLEVELPERFORMCAMERAFOCUSTARGET_INVOKE_OFFSET UNITYSDK_OFFSET(0x170C8A30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUSHLEVELPERFORMCAMERAFOCUSTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x170C8BC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPushLevelPerformCameraFocusTarget_TypeDefinitionIndex = 53252;

	class LDPushLevelPerformCameraFocusTarget : public ::FlowCanvas::Nodes::CallableActionNode_6<::System::String*, ::MoleMole::Battle::Entity*, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUSHLEVELPERFORMCAMERAFOCUSTARGET__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* tag, ::MoleMole::Battle::Entity* focusEntity, ::System::String* focusEntityAttachPoint, ::UnityEngine::Vector3 focusWorldPos, ::System::Single dampingSpeed, ::System::Single viewRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUSHLEVELPERFORMCAMERAFOCUSTARGET_INVOKE_OFFSET))(this, tag, focusEntity, focusEntityAttachPoint, focusWorldPos, dampingSpeed, viewRatio);
		}
	};
}
