#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetAlleyPackEnable3DControl; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8196BF4404471FBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14456D70)
#define CLASS_2_8196BF4404471FBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14456DB0)
#define CLASS_2_8196BF4404471FBE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14456E30)
#define CLASS_2_8196BF4404471FBE_TICK_OFFSET UNITYSDK_OFFSET(0x14456E80)
#define CLASS_2_8196BF4404471FBE__CTOR_OFFSET UNITYSDK_OFFSET(0x14456D60)

inline static constexpr unsigned int Class_2_8196BF4404471FBE_TypeDefinitionIndex = 54660;

class Class_2_8196BF4404471FBE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SetAlleyPackEnable3DControl* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAlleyPackEnable3DControl* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAlleyPackEnable3DControl*))((::PBYTE)hIl2Cpp + CLASS_2_8196BF4404471FBE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8196BF4404471FBE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8196BF4404471FBE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8196BF4404471FBE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8196BF4404471FBE_TICK_OFFSET))(this, a1);
	}
};
