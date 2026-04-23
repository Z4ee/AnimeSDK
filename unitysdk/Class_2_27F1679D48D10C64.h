#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_3467D1B5E152C2CB;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitBatch; }
namespace RPG::GameCore { class WaitBatchItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_27F1679D48D10C64_DISPOSE_OFFSET UNITYSDK_OFFSET(0x125487F0)
#define CLASS_2_27F1679D48D10C64_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x12548A20)
#define CLASS_2_27F1679D48D10C64_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0x125492D0)
#define CLASS_2_27F1679D48D10C64_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x125490A0)
#define CLASS_2_27F1679D48D10C64_METHOD_2_79DD59367BDB700B_OFFSET UNITYSDK_OFFSET(0x12548AC0)
#define CLASS_2_27F1679D48D10C64_METHOD_2_BD8F27462968F97B_OFFSET UNITYSDK_OFFSET(0x125486C0)
#define CLASS_2_27F1679D48D10C64_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x12548F20)
#define CLASS_2_27F1679D48D10C64_METHOD_2_CEEA8717F1571454_OFFSET UNITYSDK_OFFSET(0x12548FF0)
#define CLASS_2_27F1679D48D10C64_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x12548FA0)
#define CLASS_2_27F1679D48D10C64_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12548C40)
#define CLASS_2_27F1679D48D10C64_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12548960)
#define CLASS_2_27F1679D48D10C64_TICK_OFFSET UNITYSDK_OFFSET(0x12548CB0)
#define CLASS_2_27F1679D48D10C64__CTOR_OFFSET UNITYSDK_OFFSET(0x12548570)

inline static constexpr unsigned int Class_2_27F1679D48D10C64_TypeDefinitionIndex = 54270;

class Class_2_27F1679D48D10C64 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::Class_1_3467D1B5E152C2CB*>* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x28
	::System::Collections::Generic::List_1<::Class_1_3467D1B5E152C2CB*>* Field_2_3; // 0x30
	::RPG::GameCore::WaitBatch* Field_2_0; // 0x38
	::System::Int32 Field_2_6; // 0x40
	::System::Boolean Field_2_7; // 0x44
	::System::Int32 Field_2_5; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitBatch* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitBatch*))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BD8F27462968F97B(::RPG::GameCore::WaitBatchItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaitBatchItem*))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64_METHOD_2_BD8F27462968F97B_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_3467D1B5E152C2CB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3467D1B5E152C2CB*))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEEA8717F1571454(::Class_1_3467D1B5E152C2CB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3467D1B5E152C2CB*))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64_METHOD_2_CEEA8717F1571454_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_3467D1B5E152C2CB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3467D1B5E152C2CB*))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_79DD59367BDB700B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64_METHOD_2_79DD59367BDB700B_OFFSET))(this, a1);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}
};
