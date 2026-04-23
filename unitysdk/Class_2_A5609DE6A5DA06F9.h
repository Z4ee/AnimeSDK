#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RemoveAnimationClip; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A5609DE6A5DA06F9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F92B90)
#define CLASS_2_A5609DE6A5DA06F9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8F92BD0)
#define CLASS_2_A5609DE6A5DA06F9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8F92D50)
#define CLASS_2_A5609DE6A5DA06F9_TICK_OFFSET UNITYSDK_OFFSET(0x8F92DA0)
#define CLASS_2_A5609DE6A5DA06F9__CTOR_OFFSET UNITYSDK_OFFSET(0x8F92B80)

inline static constexpr unsigned int Class_2_A5609DE6A5DA06F9_TypeDefinitionIndex = 50985;

class Class_2_A5609DE6A5DA06F9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RemoveAnimationClip* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveAnimationClip* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveAnimationClip*))((::PBYTE)hIl2Cpp + CLASS_2_A5609DE6A5DA06F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5609DE6A5DA06F9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5609DE6A5DA06F9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A5609DE6A5DA06F9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A5609DE6A5DA06F9_TICK_OFFSET))(this, a1);
	}
};
