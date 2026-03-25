#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightDivisionListViewExtra; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }

#define CLASS_1_2A431B1C73560F89_ENTER_OFFSET UNITYSDK_OFFSET(0x1157CE50)
#define CLASS_1_2A431B1C73560F89_EXIT_OFFSET UNITYSDK_OFFSET(0x1157D1F0)
#define CLASS_1_2A431B1C73560F89_METHOD_1_0ECD6EA86C8A1D2A_OFFSET UNITYSDK_OFFSET(0x1157D260)
#define CLASS_1_2A431B1C73560F89_TICK_OFFSET UNITYSDK_OFFSET(0x1157D010)
#define CLASS_1_2A431B1C73560F89__CTOR_OFFSET UNITYSDK_OFFSET(0x1157D300)

inline static constexpr unsigned int Class_1_2A431B1C73560F89_TypeDefinitionIndex = 52355;

class Class_1_2A431B1C73560F89 : public ::System::Object
{
public:
	::RPG::Client::GridFightDivisionListViewExtra* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A431B1C73560F89__CTOR_OFFSET))(this);
	}

	::System::Void Enter(::RPG::Client::GridFightDivisionListViewExtra* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionListViewExtra*))((::PBYTE)hIl2Cpp + CLASS_1_2A431B1C73560F89_ENTER_OFFSET))(this, a1);
	}

	::System::Void Tick(::RPG::Client::GridFightDivisionListViewExtra* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionListViewExtra*))((::PBYTE)hIl2Cpp + CLASS_1_2A431B1C73560F89_TICK_OFFSET))(this, a1);
	}

	::System::Void Exit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A431B1C73560F89_EXIT_OFFSET))(this);
	}

	::System::Void Method_1_0ECD6EA86C8A1D2A(::SuperScrollView::LoopListView2* a1, ::SuperScrollView::LoopListViewItem2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListView2*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + CLASS_1_2A431B1C73560F89_METHOD_1_0ECD6EA86C8A1D2A_OFFSET))(this, a1, a2);
	}
};
