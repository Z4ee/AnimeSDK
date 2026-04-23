#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_6.h"
#include "unitysdk/RPG/GameCore/TaskState.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ParallelCompleteConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A45E8A5C2B844CDB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12525090)
#define CLASS_3_A45E8A5C2B844CDB_METHOD_3_5D4122635B3B7874_OFFSET UNITYSDK_OFFSET(0x12524ED0)
#define CLASS_3_A45E8A5C2B844CDB_METHOD_3_C8BB109C1CC8C28C_OFFSET UNITYSDK_OFFSET(0x125254B0)
#define CLASS_3_A45E8A5C2B844CDB_METHOD_3_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x125251E0)
#define CLASS_3_A45E8A5C2B844CDB_METHOD_3_E5E42B46DE6979AF_OFFSET UNITYSDK_OFFSET(0x125255B0)
#define CLASS_3_A45E8A5C2B844CDB_METHOD_3_F2ACC5B1FFC4D55A_OFFSET UNITYSDK_OFFSET(0x12525AE0)
#define CLASS_3_A45E8A5C2B844CDB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12525140)
#define CLASS_3_A45E8A5C2B844CDB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12525190)
#define CLASS_3_A45E8A5C2B844CDB_TICK_OFFSET UNITYSDK_OFFSET(0x12525420)
#define CLASS_3_A45E8A5C2B844CDB__CTOR_OFFSET UNITYSDK_OFFSET(0x12524EB0)

inline static constexpr unsigned int Class_3_A45E8A5C2B844CDB_TypeDefinitionIndex = 50527;

class Class_3_A45E8A5C2B844CDB : public ::Class_2_A48F3719AA1CF200_6
{
public:
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* Field_3_1; // 0x18
	::RPG::GameCore::TaskContext* Field_3_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ParallelCompleteConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ParallelCompleteConfig*))((::PBYTE)hIl2Cpp + CLASS_3_A45E8A5C2B844CDB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A45E8A5C2B844CDB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A45E8A5C2B844CDB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A45E8A5C2B844CDB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A45E8A5C2B844CDB_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* Method_3_F2ACC5B1FFC4D55A()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A45E8A5C2B844CDB_METHOD_3_F2ACC5B1FFC4D55A_OFFSET))(this);
	}

	::System::Void Method_3_5D4122635B3B7874(::RPG::GameCore::ParallelCompleteConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParallelCompleteConfig*))((::PBYTE)hIl2Cpp + CLASS_3_A45E8A5C2B844CDB_METHOD_3_5D4122635B3B7874_OFFSET))(this, a1);
	}

	::System::Void Method_3_E5E42B46DE6979AF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A45E8A5C2B844CDB_METHOD_3_E5E42B46DE6979AF_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_C8BB109C1CC8C28C(::RPG::GameCore::TaskState& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskState&))((::PBYTE)hIl2Cpp + CLASS_3_A45E8A5C2B844CDB_METHOD_3_C8BB109C1CC8C28C_OFFSET))(this, a1);
	}

	::System::Void Method_3_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A45E8A5C2B844CDB_METHOD_3_D155D4917B3D2C6A_OFFSET))(this);
	}
};
