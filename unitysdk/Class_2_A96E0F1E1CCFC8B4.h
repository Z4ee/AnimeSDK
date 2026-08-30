#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_1391ECF981A6D17E;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A96E0F1E1CCFC8B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134C3780)
#define CLASS_2_A96E0F1E1CCFC8B4_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x134C3950)
#define CLASS_2_A96E0F1E1CCFC8B4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x134C3450)
#define CLASS_2_A96E0F1E1CCFC8B4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x134C3730)
#define CLASS_2_A96E0F1E1CCFC8B4_TICK_OFFSET UNITYSDK_OFFSET(0x134C3850)
#define CLASS_2_A96E0F1E1CCFC8B4__CTOR_OFFSET UNITYSDK_OFFSET(0x134C33C0)

inline static constexpr unsigned int Class_2_A96E0F1E1CCFC8B4_TypeDefinitionIndex = 47561;

class Class_2_A96E0F1E1CCFC8B4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_1391ECF981A6D17E* OFKGLJOAMLD; // 0x18
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20
	::Class_3_07C3C4D2990C49EE* CKMKMCAOLOG; // 0x28
	::System::Boolean CNJONCPOHJL; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1391ECF981A6D17E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1391ECF981A6D17E*))((::PBYTE)hIl2Cpp + CLASS_2_A96E0F1E1CCFC8B4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A96E0F1E1CCFC8B4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A96E0F1E1CCFC8B4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A96E0F1E1CCFC8B4_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A96E0F1E1CCFC8B4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A96E0F1E1CCFC8B4_METHOD_2_1290EA767C459179_OFFSET))(this);
	}
};
