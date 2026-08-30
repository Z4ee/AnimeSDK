#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialFinish; }

#define CLASS_2_8308955066FE8E2D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x198C85D0)
#define CLASS_2_8308955066FE8E2D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x198C8610)
#define CLASS_2_8308955066FE8E2D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x198C8690)
#define CLASS_2_8308955066FE8E2D_TICK_OFFSET UNITYSDK_OFFSET(0x198C86E0)
#define CLASS_2_8308955066FE8E2D__CTOR_OFFSET UNITYSDK_OFFSET(0x198C85C0)

inline static constexpr unsigned int Class_2_8308955066FE8E2D_TypeDefinitionIndex = 58970;

class Class_2_8308955066FE8E2D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TutorialFinish* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialFinish*))((::PBYTE)hIl2Cpp + CLASS_2_8308955066FE8E2D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8308955066FE8E2D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8308955066FE8E2D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8308955066FE8E2D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8308955066FE8E2D_TICK_OFFSET))(this, a1);
	}
};
