#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class PredicateTaskListWithFail; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CCC4F71606C9CDC6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD32E70)
#define CLASS_2_CCC4F71606C9CDC6_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xAD33110)
#define CLASS_2_CCC4F71606C9CDC6_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0xAD33080)
#define CLASS_2_CCC4F71606C9CDC6_ONSKIP_OFFSET UNITYSDK_OFFSET(0xAD33120)
#define CLASS_2_CCC4F71606C9CDC6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAD32F00)
#define CLASS_2_CCC4F71606C9CDC6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAD33180)
#define CLASS_2_CCC4F71606C9CDC6_TICK_OFFSET UNITYSDK_OFFSET(0xAD331D0)
#define CLASS_2_CCC4F71606C9CDC6__CTOR_OFFSET UNITYSDK_OFFSET(0xAD32D50)

inline static constexpr unsigned int Class_2_CCC4F71606C9CDC6_TypeDefinitionIndex = 51620;

class Class_2_CCC4F71606C9CDC6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::RPG::GameCore::PredicateTaskListWithFail* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30
	::Class_1_5F51D4049EA87B7B* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PredicateTaskListWithFail* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PredicateTaskListWithFail*))((::PBYTE)hIl2Cpp + CLASS_2_CCC4F71606C9CDC6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC4F71606C9CDC6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC4F71606C9CDC6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC4F71606C9CDC6_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC4F71606C9CDC6_ONSKIP_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC4F71606C9CDC6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CCC4F71606C9CDC6_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCC4F71606C9CDC6_METHOD_2_3C56C1AF247AC1EC_OFFSET))(this);
	}
};
