#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwordTrainingEnterGame; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2D798EA7797CE4F7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165E3DE0)
#define CLASS_2_2D798EA7797CE4F7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165E3E20)
#define CLASS_2_2D798EA7797CE4F7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x165E40F0)
#define CLASS_2_2D798EA7797CE4F7_TICK_OFFSET UNITYSDK_OFFSET(0x165E4140)
#define CLASS_2_2D798EA7797CE4F7__CTOR_OFFSET UNITYSDK_OFFSET(0x165E3DD0)

inline static constexpr unsigned int Class_2_2D798EA7797CE4F7_TypeDefinitionIndex = 58904;

class Class_2_2D798EA7797CE4F7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SwordTrainingEnterGame* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingEnterGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingEnterGame*))((::PBYTE)hIl2Cpp + CLASS_2_2D798EA7797CE4F7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D798EA7797CE4F7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D798EA7797CE4F7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D798EA7797CE4F7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2D798EA7797CE4F7_TICK_OFFSET))(this, a1);
	}
};
