#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_5_DCFF91E03A93C03C;
namespace MoleMole::FlowCanvas::Nodes { class HollowCreateEntityLikeBombermanBomb; }

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1923E530)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB___C__DISPLAYCLASS28_0__INTERNALCOROUTINE_B__0_OFFSET UNITYSDK_OFFSET(0x1923E540)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB___C__DISPLAYCLASS28_0__INTERNALCOROUTINE_G__CREATEENTITY_2_OFFSET UNITYSDK_OFFSET(0x1923ED80)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB___C__DISPLAYCLASS28_0__INTERNALCOROUTINE_G__CREATENEXTENTITY_1_OFFSET UNITYSDK_OFFSET(0x1923E590)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB___C__DISPLAYCLASS28_0__INTERNALCOROUTINE_G__ISALLBLOCK_3_OFFSET UNITYSDK_OFFSET(0x1923EF80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowCreateEntityLikeBombermanBomb___c__DisplayClass28_0_TypeDefinitionIndex = 86599;

	class HollowCreateEntityLikeBombermanBomb___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::HollowCreateEntityLikeBombermanBomb* __4__this; // 0x10
		::Class_5_DCFF91E03A93C03C* chessboard; // 0x18
		::FlowCanvas::Flow f; // 0x20
		::System::Int32 currentDistance; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _InternalCoroutine_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB___C__DISPLAYCLASS28_0__INTERNALCOROUTINE_B__0_OFFSET))(this);
		}

		::System::Void _InternalCoroutine_g__CreateNextEntity_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB___C__DISPLAYCLASS28_0__INTERNALCOROUTINE_G__CREATENEXTENTITY_1_OFFSET))(this);
		}

		::System::Void _InternalCoroutine_g__CreateEntity_2(::MoleMole::HollowChessboard::HollowCell index)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB___C__DISPLAYCLASS28_0__INTERNALCOROUTINE_G__CREATEENTITY_2_OFFSET))(this, index);
		}

		::System::Boolean _InternalCoroutine_g__IsAllBlock_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB___C__DISPLAYCLASS28_0__INTERNALCOROUTINE_G__ISALLBLOCK_3_OFFSET))(this);
		}
	};
}
