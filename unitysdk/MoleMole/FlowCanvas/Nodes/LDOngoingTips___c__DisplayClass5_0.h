#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170C87B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS___C__DISPLAYCLASS5_0__WAITFORPLAYING_B__0_OFFSET UNITYSDK_OFFSET(0x170C87C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDOngoingTips___c__DisplayClass5_0_TypeDefinitionIndex = 54678;

	class LDOngoingTips___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowOutput* finish; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _WaitForPlaying_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDONGOINGTIPS___C__DISPLAYCLASS5_0__WAITFORPLAYING_B__0_OFFSET))(this);
		}
	};
}
