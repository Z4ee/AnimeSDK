#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_4.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ParallelConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_0AB9AFF9BAF40285_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1220B260)
#define CLASS_3_0AB9AFF9BAF40285_METHOD_3_0352744742F7C457_1_OFFSET UNITYSDK_OFFSET(0x1220B7F0)
#define CLASS_3_0AB9AFF9BAF40285_METHOD_3_0352744742F7C457_OFFSET UNITYSDK_OFFSET(0x1220B8F0)
#define CLASS_3_0AB9AFF9BAF40285_METHOD_3_3FAAA518D3F433CC_OFFSET UNITYSDK_OFFSET(0x1220B460)
#define CLASS_3_0AB9AFF9BAF40285_METHOD_3_6AA4FC7FF94AE6F6_OFFSET UNITYSDK_OFFSET(0x1220B030)
#define CLASS_3_0AB9AFF9BAF40285_METHOD_3_9D115FD159B833A3_OFFSET UNITYSDK_OFFSET(0x1220B9F0)
#define CLASS_3_0AB9AFF9BAF40285_METHOD_3_F2ACC5B1FFC4D55A_OFFSET UNITYSDK_OFFSET(0x1220C080)
#define CLASS_3_0AB9AFF9BAF40285_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1220B3C0)
#define CLASS_3_0AB9AFF9BAF40285_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1220B410)
#define CLASS_3_0AB9AFF9BAF40285_TICK_OFFSET UNITYSDK_OFFSET(0x1220B740)
#define CLASS_3_0AB9AFF9BAF40285__CTOR_OFFSET UNITYSDK_OFFSET(0x1220B010)

inline static constexpr unsigned int Class_3_0AB9AFF9BAF40285_TypeDefinitionIndex = 54975;

class Class_3_0AB9AFF9BAF40285 : public ::Class_2_A48F3719AA1CF200_4
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* ECMFFNPIHGD; // 0x20

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

	::System::Void Method_3_9D115FD159B833A3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_0AB9AFF9BAF40285_METHOD_3_9D115FD159B833A3_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0352744742F7C457()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AB9AFF9BAF40285_METHOD_3_0352744742F7C457_OFFSET))(this);
	}

	::System::Boolean Method_3_0352744742F7C457_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AB9AFF9BAF40285_METHOD_3_0352744742F7C457_1_OFFSET))(this);
	}

	::System::Void Method_3_3FAAA518D3F433CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AB9AFF9BAF40285_METHOD_3_3FAAA518D3F433CC_OFFSET))(this);
	}
};
