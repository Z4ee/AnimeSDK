#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ShowEvolveBuildProgressInBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_EDC0D728F1F55641_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16CA8BE0)
#define CLASS_2_EDC0D728F1F55641_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16CA9040)
#define CLASS_2_EDC0D728F1F55641_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16CA8C80)
#define CLASS_2_EDC0D728F1F55641_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16CA8FF0)
#define CLASS_2_EDC0D728F1F55641_TICK_OFFSET UNITYSDK_OFFSET(0x16CA8C20)
#define CLASS_2_EDC0D728F1F55641__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA8BD0)

inline static constexpr unsigned int Class_2_EDC0D728F1F55641_TypeDefinitionIndex = 56017;

class Class_2_EDC0D728F1F55641 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowEvolveBuildProgressInBattle* Field_2_0; // 0x18
	::RPG::Client::UIController* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEvolveBuildProgressInBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEvolveBuildProgressInBattle*))((::PBYTE)hIl2Cpp + CLASS_2_EDC0D728F1F55641__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDC0D728F1F55641_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EDC0D728F1F55641_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDC0D728F1F55641_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDC0D728F1F55641_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDC0D728F1F55641_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
