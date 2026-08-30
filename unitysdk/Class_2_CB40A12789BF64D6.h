#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowFuncBtnEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CB40A12789BF64D6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D3A4C0)
#define CLASS_2_CB40A12789BF64D6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D3A500)
#define CLASS_2_CB40A12789BF64D6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17D3A580)
#define CLASS_2_CB40A12789BF64D6_TICK_OFFSET UNITYSDK_OFFSET(0x17D3A5D0)
#define CLASS_2_CB40A12789BF64D6__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3A4B0)

inline static constexpr unsigned int Class_2_CB40A12789BF64D6_TypeDefinitionIndex = 53525;

class Class_2_CB40A12789BF64D6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowFuncBtnEffect* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFuncBtnEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFuncBtnEffect*))((::PBYTE)hIl2Cpp + CLASS_2_CB40A12789BF64D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB40A12789BF64D6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB40A12789BF64D6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB40A12789BF64D6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB40A12789BF64D6_TICK_OFFSET))(this, a1);
	}
};
