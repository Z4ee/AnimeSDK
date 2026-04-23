#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_97BB4FA12F9980DF;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_18328133A6FD92F2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x124E0210)
#define CLASS_2_18328133A6FD92F2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x124E0280)
#define CLASS_2_18328133A6FD92F2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x124E0410)
#define CLASS_2_18328133A6FD92F2_TICK_OFFSET UNITYSDK_OFFSET(0x124E0460)
#define CLASS_2_18328133A6FD92F2__CTOR_OFFSET UNITYSDK_OFFSET(0x124E0190)

inline static constexpr unsigned int Class_2_18328133A6FD92F2_TypeDefinitionIndex = 53642;

class Class_2_18328133A6FD92F2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_97BB4FA12F9980DF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_97BB4FA12F9980DF*))((::PBYTE)hIl2Cpp + CLASS_2_18328133A6FD92F2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18328133A6FD92F2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18328133A6FD92F2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_18328133A6FD92F2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_18328133A6FD92F2_TICK_OFFSET))(this, a1);
	}
};
