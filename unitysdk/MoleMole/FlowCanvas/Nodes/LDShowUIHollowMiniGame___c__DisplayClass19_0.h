#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDShowUIHollowMiniGame; }
namespace System { class Action; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME___C__DISPLAYCLASS19_0__CLOSEBIGTVMINIGAME_B__0_OFFSET UNITYSDK_OFFSET(0x15417740)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME___C__DISPLAYCLASS19_0__CLOSEBIGTVMINIGAME_B__1_OFFSET UNITYSDK_OFFSET(0x15417830)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15417730)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowUIHollowMiniGame___c__DisplayClass19_0_TypeDefinitionIndex = 70702;

	class LDShowUIHollowMiniGame___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDShowUIHollowMiniGame* __4__this; // 0x18
		::System::Boolean isSuccess; // 0x20
		::System::Boolean skipFadeOut; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseBigTvMiniGame_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME___C__DISPLAYCLASS19_0__CLOSEBIGTVMINIGAME_B__0_OFFSET))(this);
		}

		::System::Void _CloseBigTvMiniGame_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIHOLLOWMINIGAME___C__DISPLAYCLASS19_0__CLOSEBIGTVMINIGAME_B__1_OFFSET))(this);
		}
	};
}
