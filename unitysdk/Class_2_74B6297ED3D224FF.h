#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class SwordTrainingCheckStoryLineFinished; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_74B6297ED3D224FF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118103C0)
#define CLASS_2_74B6297ED3D224FF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11810430)
#define CLASS_2_74B6297ED3D224FF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11810660)
#define CLASS_2_74B6297ED3D224FF_TICK_OFFSET UNITYSDK_OFFSET(0x118106B0)
#define CLASS_2_74B6297ED3D224FF__CTOR_OFFSET UNITYSDK_OFFSET(0x118103B0)

inline static constexpr unsigned int Class_2_74B6297ED3D224FF_TypeDefinitionIndex = 47433;

class Class_2_74B6297ED3D224FF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::SwordTrainingCheckStoryLineFinished* Field_2_0; // 0x28

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
