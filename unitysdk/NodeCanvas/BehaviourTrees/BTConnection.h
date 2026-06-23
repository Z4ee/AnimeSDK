#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Connection.h"

#define NODECANVAS_BEHAVIOURTREES_BTCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC8700)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int BTConnection_TypeDefinitionIndex = 29666;

	class BTConnection : public ::NodeCanvas::Framework::Connection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTCONNECTION__CTOR_OFFSET))(this);
		}
	};
}
