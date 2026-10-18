#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ShowEvolveBuildTreasureInBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CA025557802C22DD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4A1E50)
#define CLASS_2_CA025557802C22DD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC4A2E60)
#define CLASS_2_CA025557802C22DD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4A1EF0)
#define CLASS_2_CA025557802C22DD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC4A2EB0)
#define CLASS_2_CA025557802C22DD_TICK_OFFSET UNITYSDK_OFFSET(0xC4A1E90)
#define CLASS_2_CA025557802C22DD__CTOR_OFFSET UNITYSDK_OFFSET(0xC4A1E40)

inline static constexpr unsigned int Class_2_CA025557802C22DD_TypeDefinitionIndex = 58645;

class Class_2_CA025557802C22DD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::UIController* OGOFNHAGOPO; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::ShowEvolveBuildTreasureInBattle* OFKGLJOAMLD; // 0x28

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
