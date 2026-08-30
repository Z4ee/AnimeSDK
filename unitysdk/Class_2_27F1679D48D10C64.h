#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_3EE7A6A96DB9FA9B;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitBatch; }
namespace RPG::GameCore { class WaitBatchItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_27F1679D48D10C64_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD53E00)
#define CLASS_2_27F1679D48D10C64_METHOD_2_063ADB01C44981A7_OFFSET UNITYSDK_OFFSET(0xBD54150)
#define CLASS_2_27F1679D48D10C64_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0xBD549B0)
#define CLASS_2_27F1679D48D10C64_METHOD_2_1D461F0A2AEF315F_OFFSET UNITYSDK_OFFSET(0xBD53B50)
#define CLASS_2_27F1679D48D10C64_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xBD54780)
#define CLASS_2_27F1679D48D10C64_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xBD540A0)
#define CLASS_2_27F1679D48D10C64_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xBD545F0)
#define CLASS_2_27F1679D48D10C64_METHOD_2_CEEA8717F1571454_OFFSET UNITYSDK_OFFSET(0xBD546C0)
#define CLASS_2_27F1679D48D10C64_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xBD54670)
#define CLASS_2_27F1679D48D10C64_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD54200)
#define CLASS_2_27F1679D48D10C64_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD53FE0)
#define CLASS_2_27F1679D48D10C64_TICK_OFFSET UNITYSDK_OFFSET(0xBD54270)
#define CLASS_2_27F1679D48D10C64__CTOR_OFFSET UNITYSDK_OFFSET(0xBD53A10)

inline static constexpr unsigned int Class_2_27F1679D48D10C64_TypeDefinitionIndex = 59012;

class Class_2_27F1679D48D10C64 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitBatch* OFKGLJOAMLD; // 0x18
	::Class_3_07C3C4D2990C49EE* LALNHIHMFAK; // 0x20
	::System::Collections::Generic::List_1<::Class_1_3EE7A6A96DB9FA9B*>* HLMNPOPCCAG; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::System::Collections::Generic::List_1<::Class_1_3EE7A6A96DB9FA9B*>* INPJEFACPOH; // 0x38
	::System::Int32 OJNIIIELJGE; // 0x40
	::System::Int32 LFOALCFJHMC; // 0x44
	::System::Boolean NBMLBDAFCBM; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitBatch* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitBatch*))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1D461F0A2AEF315F(::RPG::GameCore::WaitBatchItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaitBatchItem*))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64_METHOD_2_1D461F0A2AEF315F_OFFSET))(this, a1);
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

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_3EE7A6A96DB9FA9B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3EE7A6A96DB9FA9B*))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEEA8717F1571454(::Class_1_3EE7A6A96DB9FA9B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3EE7A6A96DB9FA9B*))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64_METHOD_2_CEEA8717F1571454_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_3EE7A6A96DB9FA9B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3EE7A6A96DB9FA9B*))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_063ADB01C44981A7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_27F1679D48D10C64_METHOD_2_063ADB01C44981A7_OFFSET))(this, a1);
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
