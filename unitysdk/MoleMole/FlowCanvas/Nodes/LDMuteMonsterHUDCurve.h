#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUTEMONSTERHUDCURVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x182D8220)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUTEMONSTERHUDCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x182D8340)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMuteMonsterHUDCurve_TypeDefinitionIndex = 67245;

	class LDMuteMonsterHUDCurve : public ::FlowCanvas::Nodes::CallableActionNode_2<::MoleMole::EntityHandle, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUTEMONSTERHUDCURVE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::EntityHandle entity, ::System::Boolean IsMute)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUTEMONSTERHUDCURVE_INVOKE_OFFSET))(this, entity, IsMute);
		}
	};
}
