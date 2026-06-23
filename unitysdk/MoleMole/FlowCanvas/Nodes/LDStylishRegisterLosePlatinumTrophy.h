#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTYLISHREGISTERLOSEPLATINUMTROPHY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1710EEF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTYLISHREGISTERLOSEPLATINUMTROPHY__CTOR_OFFSET UNITYSDK_OFFSET(0x1710EF90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStylishRegisterLosePlatinumTrophy_TypeDefinitionIndex = 51130;

	class LDStylishRegisterLosePlatinumTrophy : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTYLISHREGISTERLOSEPLATINUMTROPHY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTYLISHREGISTERLOSEPLATINUMTROPHY_INVOKE_OFFSET))(this);
		}
	};
}
