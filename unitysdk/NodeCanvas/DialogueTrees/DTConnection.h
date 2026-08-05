#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Connection.h"

#define NODECANVAS_DIALOGUETREES_DTCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA9B2D0)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int DTConnection_TypeDefinitionIndex = 31148;

	class DTConnection : public ::NodeCanvas::Framework::Connection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTCONNECTION__CTOR_OFFSET))(this);
		}
	};
}
