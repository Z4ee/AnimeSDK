#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_27;
class Class_1_9A1EBEAAD416AF1B;
class Class_2_35962C2B7535512E;
class Class_2_465A9E6CC2B0EF21;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DFCA81E8920AA8E9_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C084A90)
#define CLASS_1_DFCA81E8920AA8E9_METHOD_1_A5AEAE73113C71B0_OFFSET UNITYSDK_OFFSET(0x1C085090)
#define CLASS_1_DFCA81E8920AA8E9__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0849B0)

inline static constexpr unsigned int Class_1_DFCA81E8920AA8E9_TypeDefinitionIndex = 36459;

class Class_1_DFCA81E8920AA8E9 : public ::System::Object
{
public:
	::Class_2_35962C2B7535512E* PDENFEFCAGN; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_27*>* IDLGPCJKGEP; // 0x18
	::Entitas::IGroup_1<::Class_2_465A9E6CC2B0EF21*>* PGJOLIFOBJE; // 0x20

	::System::Void _ctor(::Class_2_35962C2B7535512E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_35962C2B7535512E*))((::PBYTE)hIl2Cpp + CLASS_1_DFCA81E8920AA8E9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFCA81E8920AA8E9_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_A5AEAE73113C71B0(::Class_1_9A1EBEAAD416AF1B* a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9A1EBEAAD416AF1B*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DFCA81E8920AA8E9_METHOD_1_A5AEAE73113C71B0_OFFSET))(this, a1, a2, a3);
	}
};
