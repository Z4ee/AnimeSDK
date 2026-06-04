#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightDivisionListViewExtra; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }

#define CLASS_1_ECD7A5F2FD4A5436_ENTER_OFFSET UNITYSDK_OFFSET(0x13C4E080)
#define CLASS_1_ECD7A5F2FD4A5436_EXIT_OFFSET UNITYSDK_OFFSET(0x13C4E430)
#define CLASS_1_ECD7A5F2FD4A5436_METHOD_1_C0A62171A15D6331_OFFSET UNITYSDK_OFFSET(0x13C4E4A0)
#define CLASS_1_ECD7A5F2FD4A5436_TICK_OFFSET UNITYSDK_OFFSET(0x13C4E250)
#define CLASS_1_ECD7A5F2FD4A5436__CTOR_OFFSET UNITYSDK_OFFSET(0x13C4E540)

inline static constexpr unsigned int Class_1_ECD7A5F2FD4A5436_TypeDefinitionIndex = 60243;

class Class_1_ECD7A5F2FD4A5436 : public ::System::Object
{
public:
	::RPG::Client::GridFightDivisionListViewExtra* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECD7A5F2FD4A5436__CTOR_OFFSET))(this);
	}

	::System::Void Enter(::RPG::Client::GridFightDivisionListViewExtra* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionListViewExtra*))((::PBYTE)hIl2Cpp + CLASS_1_ECD7A5F2FD4A5436_ENTER_OFFSET))(this, a1);
	}

	::System::Void Tick(::RPG::Client::GridFightDivisionListViewExtra* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionListViewExtra*))((::PBYTE)hIl2Cpp + CLASS_1_ECD7A5F2FD4A5436_TICK_OFFSET))(this, a1);
	}

	::System::Void Exit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ECD7A5F2FD4A5436_EXIT_OFFSET))(this);
	}

	::System::Void Method_1_C0A62171A15D6331(::SuperScrollView::LoopListView2* a1, ::SuperScrollView::LoopListViewItem2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListView2*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + CLASS_1_ECD7A5F2FD4A5436_METHOD_1_C0A62171A15D6331_OFFSET))(this, a1, a2);
	}
};
