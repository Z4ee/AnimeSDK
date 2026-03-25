#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetBattleBGMState; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Coroutine; }

#define CLASS_2_CDA4A166D54A5BBB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105C50A0)
#define CLASS_2_CDA4A166D54A5BBB_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x105C53A0)
#define CLASS_2_CDA4A166D54A5BBB_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x105C5540)
#define CLASS_2_CDA4A166D54A5BBB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105C50E0)
#define CLASS_2_CDA4A166D54A5BBB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x105C5600)
#define CLASS_2_CDA4A166D54A5BBB_TICK_OFFSET UNITYSDK_OFFSET(0x105C56E0)
#define CLASS_2_CDA4A166D54A5BBB__CTOR_OFFSET UNITYSDK_OFFSET(0x105C5090)

inline static constexpr unsigned int Class_2_CDA4A166D54A5BBB_TypeDefinitionIndex = 47209;

class Class_2_CDA4A166D54A5BBB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SetBattleBGMState* Field_2_0; // 0x20
	::System::String* Field_2_2; // 0x28
	::UnityEngine::Coroutine* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleBGMState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleBGMState*))((::PBYTE)hIl2Cpp + CLASS_2_CDA4A166D54A5BBB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA4A166D54A5BBB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA4A166D54A5BBB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA4A166D54A5BBB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CDA4A166D54A5BBB_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA4A166D54A5BBB_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDA4A166D54A5BBB_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}
};
