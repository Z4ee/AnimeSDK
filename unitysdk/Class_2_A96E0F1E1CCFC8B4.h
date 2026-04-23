#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_1391ECF981A6D17E;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A96E0F1E1CCFC8B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E50140)
#define CLASS_2_A96E0F1E1CCFC8B4_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x9E502B0)
#define CLASS_2_A96E0F1E1CCFC8B4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9E4FDF0)
#define CLASS_2_A96E0F1E1CCFC8B4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9E500F0)
#define CLASS_2_A96E0F1E1CCFC8B4_TICK_OFFSET UNITYSDK_OFFSET(0x9E501B0)
#define CLASS_2_A96E0F1E1CCFC8B4__CTOR_OFFSET UNITYSDK_OFFSET(0x9E4FD60)

inline static constexpr unsigned int Class_2_A96E0F1E1CCFC8B4_TypeDefinitionIndex = 43905;

class Class_2_A96E0F1E1CCFC8B4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::LuaUIController* Field_2_1; // 0x18
	::Class_3_1391ECF981A6D17E* Field_2_2; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x28
	::System::Boolean Field_2_0; // 0x30

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
