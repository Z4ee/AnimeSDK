#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UIMonopolyShowFinishedQuiz; }

#define CLASS_2_209CE4DE9EA8131B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE8BC70)
#define CLASS_2_209CE4DE9EA8131B_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xBE8BCD0)
#define CLASS_2_209CE4DE9EA8131B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE8B930)
#define CLASS_2_209CE4DE9EA8131B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE8BC10)
#define CLASS_2_209CE4DE9EA8131B_TICK_OFFSET UNITYSDK_OFFSET(0xBE8BBB0)
#define CLASS_2_209CE4DE9EA8131B__CTOR_OFFSET UNITYSDK_OFFSET(0xBE8B920)

inline static constexpr unsigned int Class_2_209CE4DE9EA8131B_TypeDefinitionIndex = 58982;

class Class_2_209CE4DE9EA8131B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::UIMonopolyShowFinishedQuiz* OFKGLJOAMLD; // 0x18
	::RPG::Client::LuaUIController* CPIIOIPAAKK; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UIMonopolyShowFinishedQuiz* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UIMonopolyShowFinishedQuiz*))((::PBYTE)hIl2Cpp + CLASS_2_209CE4DE9EA8131B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_209CE4DE9EA8131B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_209CE4DE9EA8131B_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_209CE4DE9EA8131B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_209CE4DE9EA8131B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_209CE4DE9EA8131B_METHOD_2_0868EF727040C390_OFFSET))(this);
	}
};
