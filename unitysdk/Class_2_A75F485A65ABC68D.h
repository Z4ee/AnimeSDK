#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class NotifyOverrideFuncBtnParam; }
namespace RPG::GameCore { class SetFuncBtn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A75F485A65ABC68D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1927CFE0)
#define CLASS_2_A75F485A65ABC68D_METHOD_2_A84780F2F01CD33D_OFFSET UNITYSDK_OFFSET(0x1927D090)
#define CLASS_2_A75F485A65ABC68D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1927D030)
#define CLASS_2_A75F485A65ABC68D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1927D1B0)
#define CLASS_2_A75F485A65ABC68D_TICK_OFFSET UNITYSDK_OFFSET(0x1927CF80)
#define CLASS_2_A75F485A65ABC68D__CTOR_OFFSET UNITYSDK_OFFSET(0x1927CF70)

inline static constexpr unsigned int Class_2_A75F485A65ABC68D_TypeDefinitionIndex = 53494;

class Class_2_A75F485A65ABC68D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetFuncBtn* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::NotifyOverrideFuncBtnParam* IBCIAIIMPFM; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFuncBtn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFuncBtn*))((::PBYTE)hIl2Cpp + CLASS_2_A75F485A65ABC68D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A75F485A65ABC68D_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A75F485A65ABC68D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A75F485A65ABC68D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A75F485A65ABC68D_ONTASKRESET_OFFSET))(this);
	}

	::RPG::GameCore::NotifyOverrideFuncBtnParam* Method_2_A84780F2F01CD33D()
	{
		return ((::RPG::GameCore::NotifyOverrideFuncBtnParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A75F485A65ABC68D_METHOD_2_A84780F2F01CD33D_OFFSET))(this);
	}
};
