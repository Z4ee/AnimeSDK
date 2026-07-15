#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GridFightShowGuideTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C574C73F1F6A253A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1605A740)
#define CLASS_2_C574C73F1F6A253A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1605A530)
#define CLASS_2_C574C73F1F6A253A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1605A780)
#define CLASS_2_C574C73F1F6A253A_TICK_OFFSET UNITYSDK_OFFSET(0x1605A6E0)
#define CLASS_2_C574C73F1F6A253A__CTOR_OFFSET UNITYSDK_OFFSET(0x1605A520)
#define CLASS_2_C574C73F1F6A253A__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x1605A7D0)

inline static constexpr unsigned int Class_2_C574C73F1F6A253A_TypeDefinitionIndex = 51121;

class Class_2_C574C73F1F6A253A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GridFightShowGuideTalk* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightShowGuideTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightShowGuideTalk*))((::PBYTE)hIl2Cpp + CLASS_2_C574C73F1F6A253A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C574C73F1F6A253A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C574C73F1F6A253A_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C574C73F1F6A253A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C574C73F1F6A253A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C574C73F1F6A253A__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
