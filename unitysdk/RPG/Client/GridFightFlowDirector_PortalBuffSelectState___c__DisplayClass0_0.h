#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9819400)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE___C__DISPLAYCLASS0_0__ONENTER_B__1_OFFSET UNITYSDK_OFFSET(0x9819410)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_PortalBuffSelectState___c__DisplayClass0_0_TypeDefinitionIndex = 52489;

	class GridFightFlowDirector_PortalBuffSelectState___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::LuaUIController* portalBuffSelect; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnEnter_b__1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PORTALBUFFSELECTSTATE___C__DISPLAYCLASS0_0__ONENTER_B__1_OFFSET))(this);
		}
	};
}
