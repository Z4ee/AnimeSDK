#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class SwordTrainingCheckStoryLineFinished; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_74B6297ED3D224FF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B837C0)
#define CLASS_2_74B6297ED3D224FF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11B838A0)
#define CLASS_2_74B6297ED3D224FF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11B83AD0)
#define CLASS_2_74B6297ED3D224FF_TICK_OFFSET UNITYSDK_OFFSET(0x11B83B20)
#define CLASS_2_74B6297ED3D224FF__CTOR_OFFSET UNITYSDK_OFFSET(0x11B837B0)

inline static constexpr unsigned int Class_2_74B6297ED3D224FF_TypeDefinitionIndex = 58903;

class Class_2_74B6297ED3D224FF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_3_07C3C4D2990C49EE* DLJHJKLMADI; // 0x20
	::RPG::GameCore::SwordTrainingCheckStoryLineFinished* OFKGLJOAMLD; // 0x28

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
