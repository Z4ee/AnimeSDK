#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ST_Main_Predicate_Behaviour; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A23D2BFCDA06CEBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10535DE0)
#define CLASS_3_A23D2BFCDA06CEBD_METHOD_3_831F22657AE76E11_1_OFFSET UNITYSDK_OFFSET(0x10535670)
#define CLASS_3_A23D2BFCDA06CEBD_METHOD_3_831F22657AE76E11_OFFSET UNITYSDK_OFFSET(0x105358C0)
#define CLASS_3_A23D2BFCDA06CEBD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10535410)
#define CLASS_3_A23D2BFCDA06CEBD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10535D20)
#define CLASS_3_A23D2BFCDA06CEBD_TICK_OFFSET UNITYSDK_OFFSET(0x10535B10)
#define CLASS_3_A23D2BFCDA06CEBD__CTOR_OFFSET UNITYSDK_OFFSET(0x10535340)
#define CLASS_3_A23D2BFCDA06CEBD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10535FA0)
#define CLASS_3_A23D2BFCDA06CEBD___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10535F90)

inline static constexpr unsigned int Class_3_A23D2BFCDA06CEBD_TypeDefinitionIndex = 42245;

class Class_3_A23D2BFCDA06CEBD : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_Predicate_Behaviour*>
{
public:
	::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Field_3_3; // 0x28
	::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Field_3_2; // 0x30
	::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Field_3_1; // 0x38
	::Class_1_5F51D4049EA87B7B* Field_3_0; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_Predicate_Behaviour* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_Predicate_Behaviour*))((::PBYTE)hIl2Cpp + CLASS_3_A23D2BFCDA06CEBD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A23D2BFCDA06CEBD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A23D2BFCDA06CEBD_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A23D2BFCDA06CEBD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A23D2BFCDA06CEBD_DISPOSE_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Method_3_831F22657AE76E11()
	{
		return ((::Il2CppArray<::Class_1_5F51D4049EA87B7B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A23D2BFCDA06CEBD_METHOD_3_831F22657AE76E11_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Method_3_831F22657AE76E11_1()
	{
		return ((::Il2CppArray<::Class_1_5F51D4049EA87B7B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A23D2BFCDA06CEBD_METHOD_3_831F22657AE76E11_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A23D2BFCDA06CEBD___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A23D2BFCDA06CEBD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
