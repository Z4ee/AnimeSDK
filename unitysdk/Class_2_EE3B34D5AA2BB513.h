#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowSpaceZooMainPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_EE3B34D5AA2BB513_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1887E910)
#define CLASS_2_EE3B34D5AA2BB513_METHOD_2_C54A7BF3A6DDE43A_OFFSET UNITYSDK_OFFSET(0x1887ED00)
#define CLASS_2_EE3B34D5AA2BB513_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1887EE90)
#define CLASS_2_EE3B34D5AA2BB513_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1887E9E0)
#define CLASS_2_EE3B34D5AA2BB513_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1887EC50)
#define CLASS_2_EE3B34D5AA2BB513_TICK_OFFSET UNITYSDK_OFFSET(0x1887ECA0)
#define CLASS_2_EE3B34D5AA2BB513__CTOR_OFFSET UNITYSDK_OFFSET(0x1887E880)
#define CLASS_2_EE3B34D5AA2BB513___ONUIOPEN_B__5_0_OFFSET UNITYSDK_OFFSET(0x1887EEE0)

inline static constexpr unsigned int Class_2_EE3B34D5AA2BB513_TypeDefinitionIndex = 58841;

class Class_2_EE3B34D5AA2BB513 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowSpaceZooMainPage* OFKGLJOAMLD; // 0x18
	::Class_3_07C3C4D2990C49EE* BKCCFPHPIHM; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSpaceZooMainPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSpaceZooMainPage*))((::PBYTE)hIl2Cpp + CLASS_2_EE3B34D5AA2BB513__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE3B34D5AA2BB513_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE3B34D5AA2BB513_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE3B34D5AA2BB513_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EE3B34D5AA2BB513_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C54A7BF3A6DDE43A(::RPG::Client::LuaUIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + CLASS_2_EE3B34D5AA2BB513_METHOD_2_C54A7BF3A6DDE43A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE3B34D5AA2BB513_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void __OnUIOpen_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE3B34D5AA2BB513___ONUIOPEN_B__5_0_OFFSET))(this);
	}
};
