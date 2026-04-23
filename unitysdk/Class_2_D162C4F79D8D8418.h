#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ChimeraDuelEnterTutorialBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D162C4F79D8D8418_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9392E80)
#define CLASS_2_D162C4F79D8D8418_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x93928C0)
#define CLASS_2_D162C4F79D8D8418_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9392E40)
#define CLASS_2_D162C4F79D8D8418_TICK_OFFSET UNITYSDK_OFFSET(0x9392DE0)
#define CLASS_2_D162C4F79D8D8418__CTOR_OFFSET UNITYSDK_OFFSET(0x93928B0)

inline static constexpr unsigned int Class_2_D162C4F79D8D8418_TypeDefinitionIndex = 53507;

class Class_2_D162C4F79D8D8418 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ChimeraDuelEnterTutorialBattle* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChimeraDuelEnterTutorialBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChimeraDuelEnterTutorialBattle*))((::PBYTE)hIl2Cpp + CLASS_2_D162C4F79D8D8418__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D162C4F79D8D8418_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D162C4F79D8D8418_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D162C4F79D8D8418_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D162C4F79D8D8418_DISPOSE_OFFSET))(this);
	}
};
