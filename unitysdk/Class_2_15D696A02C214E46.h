#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowUINodes; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_15D696A02C214E46_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1051DF30)
#define CLASS_2_15D696A02C214E46_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1051DF70)
#define CLASS_2_15D696A02C214E46_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1051E210)
#define CLASS_2_15D696A02C214E46_TICK_OFFSET UNITYSDK_OFFSET(0x1051E260)
#define CLASS_2_15D696A02C214E46__CTOR_OFFSET UNITYSDK_OFFSET(0x1051DF20)

inline static constexpr unsigned int Class_2_15D696A02C214E46_TypeDefinitionIndex = 47387;

class Class_2_15D696A02C214E46 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ShowUINodes* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowUINodes* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowUINodes*))((::PBYTE)hIl2Cpp + CLASS_2_15D696A02C214E46__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15D696A02C214E46_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15D696A02C214E46_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15D696A02C214E46_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_15D696A02C214E46_TICK_OFFSET))(this, a1);
	}
};
