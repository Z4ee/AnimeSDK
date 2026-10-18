#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ExitTransitionLoadingUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1465C138F223F908_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1568A530)
#define CLASS_2_1465C138F223F908_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x1568A830)
#define CLASS_2_1465C138F223F908_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1568A570)
#define CLASS_2_1465C138F223F908_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1568A780)
#define CLASS_2_1465C138F223F908_TICK_OFFSET UNITYSDK_OFFSET(0x1568A7D0)
#define CLASS_2_1465C138F223F908__CTOR_OFFSET UNITYSDK_OFFSET(0x1568A520)

inline static constexpr unsigned int Class_2_1465C138F223F908_TypeDefinitionIndex = 58122;

class Class_2_1465C138F223F908 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20
	::RPG::GameCore::ExitTransitionLoadingUI* OFKGLJOAMLD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ExitTransitionLoadingUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ExitTransitionLoadingUI*))((::PBYTE)hIl2Cpp + CLASS_2_1465C138F223F908__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1465C138F223F908_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1465C138F223F908_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1465C138F223F908_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1465C138F223F908_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1465C138F223F908_METHOD_2_06A2B758FCB8A24E_OFFSET))(this);
	}
};
