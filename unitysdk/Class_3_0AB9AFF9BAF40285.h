#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_5.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ParallelConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_0AB9AFF9BAF40285_DISPOSE_OFFSET UNITYSDK_OFFSET(0x106495D0)
#define CLASS_3_0AB9AFF9BAF40285_METHOD_3_0352744742F7C457_1_OFFSET UNITYSDK_OFFSET(0x10649A70)
#define CLASS_3_0AB9AFF9BAF40285_METHOD_3_0352744742F7C457_OFFSET UNITYSDK_OFFSET(0x10649B70)
#define CLASS_3_0AB9AFF9BAF40285_METHOD_3_6AA4FC7FF94AE6F6_OFFSET UNITYSDK_OFFSET(0x106493A0)
#define CLASS_3_0AB9AFF9BAF40285_METHOD_3_D8E6DC0B27699F85_OFFSET UNITYSDK_OFFSET(0x10649750)
#define CLASS_3_0AB9AFF9BAF40285_METHOD_3_E5E42B46DE6979AF_OFFSET UNITYSDK_OFFSET(0x10649C70)
#define CLASS_3_0AB9AFF9BAF40285_METHOD_3_F2ACC5B1FFC4D55A_OFFSET UNITYSDK_OFFSET(0x1064A1D0)
#define CLASS_3_0AB9AFF9BAF40285_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x106496B0)
#define CLASS_3_0AB9AFF9BAF40285_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10649700)
#define CLASS_3_0AB9AFF9BAF40285_TICK_OFFSET UNITYSDK_OFFSET(0x106499C0)
#define CLASS_3_0AB9AFF9BAF40285__CTOR_OFFSET UNITYSDK_OFFSET(0x10649380)

inline static constexpr unsigned int Class_3_0AB9AFF9BAF40285_TypeDefinitionIndex = 51193;

class Class_3_0AB9AFF9BAF40285 : public ::Class_2_A48F3719AA1CF200_5
{
public:
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* Field_3_0; // 0x18
	::RPG::GameCore::TaskContext* Field_3_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ParallelConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ParallelConfig*))((::PBYTE)hIl2Cpp + CLASS_3_0AB9AFF9BAF40285__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AB9AFF9BAF40285_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AB9AFF9BAF40285_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AB9AFF9BAF40285_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0AB9AFF9BAF40285_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* Method_3_F2ACC5B1FFC4D55A()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AB9AFF9BAF40285_METHOD_3_F2ACC5B1FFC4D55A_OFFSET))(this);
	}

	::System::Void Method_3_6AA4FC7FF94AE6F6(::RPG::GameCore::ParallelConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParallelConfig*))((::PBYTE)hIl2Cpp + CLASS_3_0AB9AFF9BAF40285_METHOD_3_6AA4FC7FF94AE6F6_OFFSET))(this, a1);
	}

	::System::Void Method_3_E5E42B46DE6979AF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0AB9AFF9BAF40285_METHOD_3_E5E42B46DE6979AF_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0352744742F7C457()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AB9AFF9BAF40285_METHOD_3_0352744742F7C457_OFFSET))(this);
	}

	::System::Boolean Method_3_0352744742F7C457_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AB9AFF9BAF40285_METHOD_3_0352744742F7C457_1_OFFSET))(this);
	}

	::System::Void Method_3_D8E6DC0B27699F85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AB9AFF9BAF40285_METHOD_3_D8E6DC0B27699F85_OFFSET))(this);
	}
};
