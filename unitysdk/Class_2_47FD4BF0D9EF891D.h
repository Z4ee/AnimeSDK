#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AddTimelineMenuItem; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_47FD4BF0D9EF891D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC458C50)
#define CLASS_2_47FD4BF0D9EF891D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC458C90)
#define CLASS_2_47FD4BF0D9EF891D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC458E20)
#define CLASS_2_47FD4BF0D9EF891D_TICK_OFFSET UNITYSDK_OFFSET(0xC458E70)
#define CLASS_2_47FD4BF0D9EF891D__CTOR_OFFSET UNITYSDK_OFFSET(0xC458C40)

inline static constexpr unsigned int Class_2_47FD4BF0D9EF891D_TypeDefinitionIndex = 54073;

class Class_2_47FD4BF0D9EF891D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::AddTimelineMenuItem* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddTimelineMenuItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddTimelineMenuItem*))((::PBYTE)hIl2Cpp + CLASS_2_47FD4BF0D9EF891D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47FD4BF0D9EF891D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47FD4BF0D9EF891D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47FD4BF0D9EF891D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47FD4BF0D9EF891D_TICK_OFFSET))(this, a1);
	}
};
