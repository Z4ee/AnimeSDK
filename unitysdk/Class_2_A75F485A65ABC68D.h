#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class NotifyOverrideFuncBtnParam; }
namespace RPG::GameCore { class SetFuncBtn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A75F485A65ABC68D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177B89F0)
#define CLASS_2_A75F485A65ABC68D_METHOD_2_A84780F2F01CD33D_OFFSET UNITYSDK_OFFSET(0x177B8AA0)
#define CLASS_2_A75F485A65ABC68D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x177B8A40)
#define CLASS_2_A75F485A65ABC68D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x177B8BC0)
#define CLASS_2_A75F485A65ABC68D_TICK_OFFSET UNITYSDK_OFFSET(0x177B8990)
#define CLASS_2_A75F485A65ABC68D__CTOR_OFFSET UNITYSDK_OFFSET(0x177B8980)

inline static constexpr unsigned int Class_2_A75F485A65ABC68D_TypeDefinitionIndex = 50812;

class Class_2_A75F485A65ABC68D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::NotifyOverrideFuncBtnParam* Field_2_1; // 0x20
	::RPG::GameCore::SetFuncBtn* Field_2_2; // 0x28

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
