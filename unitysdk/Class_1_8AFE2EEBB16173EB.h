#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightDivisionListViewExtra; }
namespace SuperScrollView { class LoopListViewItem2; }

#define CLASS_1_8AFE2EEBB16173EB_ENTER_OFFSET UNITYSDK_OFFSET(0xBE64D90)
#define CLASS_1_8AFE2EEBB16173EB_EXIT_OFFSET UNITYSDK_OFFSET(0xBE65050)
#define CLASS_1_8AFE2EEBB16173EB_METHOD_1_01EC44B8B4053372_OFFSET UNITYSDK_OFFSET(0xBE64EF0)
#define CLASS_1_8AFE2EEBB16173EB_TICK_OFFSET UNITYSDK_OFFSET(0xBE64F40)
#define CLASS_1_8AFE2EEBB16173EB__CTOR_OFFSET UNITYSDK_OFFSET(0xBE650D0)

inline static constexpr unsigned int Class_1_8AFE2EEBB16173EB_TypeDefinitionIndex = 64514;

class Class_1_8AFE2EEBB16173EB : public ::System::Object
{
public:
	::SuperScrollView::LoopListViewItem2* KHONKCGBGJE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE2EEBB16173EB__CTOR_OFFSET))(this);
	}

	::System::Void Enter(::RPG::Client::GridFightDivisionListViewExtra* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionListViewExtra*))((::PBYTE)hIl2Cpp + CLASS_1_8AFE2EEBB16173EB_ENTER_OFFSET))(this, a1);
	}

	::System::Void Tick(::RPG::Client::GridFightDivisionListViewExtra* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionListViewExtra*))((::PBYTE)hIl2Cpp + CLASS_1_8AFE2EEBB16173EB_TICK_OFFSET))(this, a1);
	}

	::System::Void Exit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFE2EEBB16173EB_EXIT_OFFSET))(this);
	}

	::System::Void Method_1_01EC44B8B4053372(::SuperScrollView::LoopListViewItem2* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8AFE2EEBB16173EB_METHOD_1_01EC44B8B4053372_OFFSET))(this, a1, a2);
	}
};
