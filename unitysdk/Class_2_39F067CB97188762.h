#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ShowEvolveBuildTreasureInBattleForTrial; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_39F067CB97188762_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15561B90)
#define CLASS_2_39F067CB97188762_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15562680)
#define CLASS_2_39F067CB97188762_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15561C30)
#define CLASS_2_39F067CB97188762_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155626D0)
#define CLASS_2_39F067CB97188762_TICK_OFFSET UNITYSDK_OFFSET(0x15561BD0)
#define CLASS_2_39F067CB97188762__CTOR_OFFSET UNITYSDK_OFFSET(0x15561B80)

inline static constexpr unsigned int Class_2_39F067CB97188762_TypeDefinitionIndex = 58794;

class Class_2_39F067CB97188762 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowEvolveBuildTreasureInBattleForTrial* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::Client::UIController* OGOFNHAGOPO; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEvolveBuildTreasureInBattleForTrial* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEvolveBuildTreasureInBattleForTrial*))((::PBYTE)hIl2Cpp + CLASS_2_39F067CB97188762__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39F067CB97188762_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_39F067CB97188762_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39F067CB97188762_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39F067CB97188762_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39F067CB97188762_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
