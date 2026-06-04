#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_B9D550DDE1F99637;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_3C11F61F78EDC58C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139C4C20)
#define CLASS_2_3C11F61F78EDC58C_METHOD_2_E67AC278AF14384B_OFFSET UNITYSDK_OFFSET(0x139C4D00)
#define CLASS_2_3C11F61F78EDC58C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x139C48E0)
#define CLASS_2_3C11F61F78EDC58C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x139C4BD0)
#define CLASS_2_3C11F61F78EDC58C_TICK_OFFSET UNITYSDK_OFFSET(0x139C4CA0)
#define CLASS_2_3C11F61F78EDC58C__CTOR_OFFSET UNITYSDK_OFFSET(0x139C4860)
#define CLASS_2_3C11F61F78EDC58C___ONSUBMITLIMAONEWSISSUE_B__5_0_OFFSET UNITYSDK_OFFSET(0x139C5070)
#define CLASS_2_3C11F61F78EDC58C___ONSUBMITLIMAONEWSISSUE_B__5_1_OFFSET UNITYSDK_OFFSET(0x139C5200)

inline static constexpr unsigned int Class_2_3C11F61F78EDC58C_TypeDefinitionIndex = 49492;

class Class_2_3C11F61F78EDC58C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::Class_3_B9D550DDE1F99637* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B9D550DDE1F99637* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B9D550DDE1F99637*))((::PBYTE)hIl2Cpp + CLASS_2_3C11F61F78EDC58C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C11F61F78EDC58C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C11F61F78EDC58C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C11F61F78EDC58C_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3C11F61F78EDC58C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_E67AC278AF14384B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3C11F61F78EDC58C_METHOD_2_E67AC278AF14384B_OFFSET))(this, a1);
	}

	::System::Void __OnSubmitLimaoNewsIssue_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C11F61F78EDC58C___ONSUBMITLIMAONEWSISSUE_B__5_0_OFFSET))(this);
	}

	::System::Void __OnSubmitLimaoNewsIssue_b__5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C11F61F78EDC58C___ONSUBMITLIMAONEWSISSUE_B__5_1_OFFSET))(this);
	}
};
