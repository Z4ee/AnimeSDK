#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"
#include "unitysdk/RPG/GameCore/TaskState.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class SO_WeightedSelector; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D08BDD2FD18351E5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F45C00)
#define CLASS_3_D08BDD2FD18351E5_METHOD_3_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x8F46790)
#define CLASS_3_D08BDD2FD18351E5_METHOD_3_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x8F45D60)
#define CLASS_3_D08BDD2FD18351E5_METHOD_3_48A85C2067A778AB_OFFSET UNITYSDK_OFFSET(0x8F46E20)
#define CLASS_3_D08BDD2FD18351E5_METHOD_3_5E2E01A8DF65CA40_OFFSET UNITYSDK_OFFSET(0x8F46200)
#define CLASS_3_D08BDD2FD18351E5_METHOD_3_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x8F46010)
#define CLASS_3_D08BDD2FD18351E5_METHOD_3_C638E91FC0D3A13A_1_OFFSET UNITYSDK_OFFSET(0x8F46BF0)
#define CLASS_3_D08BDD2FD18351E5_METHOD_3_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x8F46640)
#define CLASS_3_D08BDD2FD18351E5_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x8F46E70)
#define CLASS_3_D08BDD2FD18351E5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8F45DD0)
#define CLASS_3_D08BDD2FD18351E5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8F468D0)
#define CLASS_3_D08BDD2FD18351E5_TICK_OFFSET UNITYSDK_OFFSET(0x8F46D40)
#define CLASS_3_D08BDD2FD18351E5__CTOR_OFFSET UNITYSDK_OFFSET(0x8F459F0)
#define CLASS_3_D08BDD2FD18351E5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F46E80)
#define CLASS_3_D08BDD2FD18351E5___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8F46E90)

inline static constexpr unsigned int Class_3_D08BDD2FD18351E5_TypeDefinitionIndex = 48124;

class Class_3_D08BDD2FD18351E5 : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_WeightedSelector*>
{
public:
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* Field_3_0; // 0x40
	::System::Boolean Field_3_2; // 0x48
	::System::Boolean Field_3_4; // 0x49
	::System::Boolean Field_3_3; // 0x4A
	::System::Int32 Field_3_1; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_WeightedSelector* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_WeightedSelector*))((::PBYTE)hIl2Cpp + CLASS_3_D08BDD2FD18351E5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D08BDD2FD18351E5_DISPOSE_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* Method_3_47FCE72550F759BF()
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D08BDD2FD18351E5_METHOD_3_47FCE72550F759BF_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D08BDD2FD18351E5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D08BDD2FD18351E5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D08BDD2FD18351E5_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskState Method_3_5E2E01A8DF65CA40(::System::Single a1)
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D08BDD2FD18351E5_METHOD_3_5E2E01A8DF65CA40_OFFSET))(this, a1);
	}

	::System::Void Method_3_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D08BDD2FD18351E5_METHOD_3_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_3_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D08BDD2FD18351E5_METHOD_3_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_3_C638E91FC0D3A13A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D08BDD2FD18351E5_METHOD_3_C638E91FC0D3A13A_1_OFFSET))(this);
	}

	::System::Void Method_3_48A85C2067A778AB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_D08BDD2FD18351E5_METHOD_3_48A85C2067A778AB_OFFSET))(this, a1);
	}

	::System::Void Method_3_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D08BDD2FD18351E5_METHOD_3_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D08BDD2FD18351E5_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D08BDD2FD18351E5___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D08BDD2FD18351E5___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
