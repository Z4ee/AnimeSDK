#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialFinish; }

#define CLASS_2_8308955066FE8E2D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12937180)
#define CLASS_2_8308955066FE8E2D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x129371C0)
#define CLASS_2_8308955066FE8E2D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12937240)
#define CLASS_2_8308955066FE8E2D_TICK_OFFSET UNITYSDK_OFFSET(0x12937290)
#define CLASS_2_8308955066FE8E2D__CTOR_OFFSET UNITYSDK_OFFSET(0x12937170)

inline static constexpr unsigned int Class_2_8308955066FE8E2D_TypeDefinitionIndex = 54229;

class Class_2_8308955066FE8E2D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::TutorialFinish* Field_2_0; // 0x20

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
