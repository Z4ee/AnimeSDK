#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelMainPageController; }
namespace MoleMole::FlowCanvas::Nodes { class LDShowUIMiniGame; }
namespace System { class Action; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIMINIGAME___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18212800)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIMINIGAME___C__DISPLAYCLASS9_0__SHOWMAINCITYGAME_B__0_OFFSET UNITYSDK_OFFSET(0x18212810)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowUIMiniGame___c__DisplayClass9_0_TypeDefinitionIndex = 79791;

	class LDShowUIMiniGame___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDShowUIMiniGame* __4__this; // 0x10
		::MoleMole::UIInLevelMainPageController* inLevel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIMINIGAME___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowMainCityGame_b__0(::System::Boolean success, ::System::Int32 rank, ::System::Action* onFadeOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWUIMINIGAME___C__DISPLAYCLASS9_0__SHOWMAINCITYGAME_B__0_OFFSET))(this, success, rank, onFadeOut);
		}
	};
}
