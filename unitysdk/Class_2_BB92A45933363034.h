#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_97BB4FA12F9980DF;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BB92A45933363034_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDE32060)
#define CLASS_2_BB92A45933363034_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE320C0)
#define CLASS_2_BB92A45933363034_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDE32220)
#define CLASS_2_BB92A45933363034_TICK_OFFSET UNITYSDK_OFFSET(0xDE32270)
#define CLASS_2_BB92A45933363034__CTOR_OFFSET UNITYSDK_OFFSET(0xDE31FE0)

inline static constexpr unsigned int Class_2_BB92A45933363034_TypeDefinitionIndex = 54355;

class Class_2_BB92A45933363034 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_97BB4FA12F9980DF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_97BB4FA12F9980DF*))((::PBYTE)hIl2Cpp + CLASS_2_BB92A45933363034__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB92A45933363034_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB92A45933363034_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB92A45933363034_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BB92A45933363034_TICK_OFFSET))(this, a1);
	}
};
