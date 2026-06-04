#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class SwordTrainingCheckStoryLineFinished; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_74B6297ED3D224FF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1060AC80)
#define CLASS_2_74B6297ED3D224FF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1060ACF0)
#define CLASS_2_74B6297ED3D224FF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1060AF20)
#define CLASS_2_74B6297ED3D224FF_TICK_OFFSET UNITYSDK_OFFSET(0x1060AF70)
#define CLASS_2_74B6297ED3D224FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1060AC70)

inline static constexpr unsigned int Class_2_74B6297ED3D224FF_TypeDefinitionIndex = 54894;

class Class_2_74B6297ED3D224FF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SwordTrainingCheckStoryLineFinished* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingCheckStoryLineFinished* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingCheckStoryLineFinished*))((::PBYTE)hIl2Cpp + CLASS_2_74B6297ED3D224FF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74B6297ED3D224FF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74B6297ED3D224FF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74B6297ED3D224FF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_74B6297ED3D224FF_TICK_OFFSET))(this, a1);
	}
};
