#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ShowEvolveBuildTreasureInBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CA025557802C22DD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B42EC0)
#define CLASS_2_CA025557802C22DD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11B43E30)
#define CLASS_2_CA025557802C22DD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11B42F60)
#define CLASS_2_CA025557802C22DD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11B43E80)
#define CLASS_2_CA025557802C22DD_TICK_OFFSET UNITYSDK_OFFSET(0x11B42F00)
#define CLASS_2_CA025557802C22DD__CTOR_OFFSET UNITYSDK_OFFSET(0x11B42EB0)

inline static constexpr unsigned int Class_2_CA025557802C22DD_TypeDefinitionIndex = 54065;

class Class_2_CA025557802C22DD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::Client::UIController* Field_2_2; // 0x20
	::RPG::GameCore::ShowEvolveBuildTreasureInBattle* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEvolveBuildTreasureInBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEvolveBuildTreasureInBattle*))((::PBYTE)hIl2Cpp + CLASS_2_CA025557802C22DD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA025557802C22DD_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA025557802C22DD_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA025557802C22DD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA025557802C22DD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA025557802C22DD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
