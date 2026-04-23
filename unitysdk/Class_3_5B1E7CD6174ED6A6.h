#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ST_Main_Predicate_Behaviour; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5B1E7CD6174ED6A6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7C37D0)
#define CLASS_3_5B1E7CD6174ED6A6_METHOD_3_970E563FDF9D72A6_1_OFFSET UNITYSDK_OFFSET(0xA7C3060)
#define CLASS_3_5B1E7CD6174ED6A6_METHOD_3_970E563FDF9D72A6_OFFSET UNITYSDK_OFFSET(0xA7C32B0)
#define CLASS_3_5B1E7CD6174ED6A6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7C2E00)
#define CLASS_3_5B1E7CD6174ED6A6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA7C3710)
#define CLASS_3_5B1E7CD6174ED6A6_TICK_OFFSET UNITYSDK_OFFSET(0xA7C3500)
#define CLASS_3_5B1E7CD6174ED6A6__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C2D30)
#define CLASS_3_5B1E7CD6174ED6A6___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7C3990)
#define CLASS_3_5B1E7CD6174ED6A6___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA7C3980)

inline static constexpr unsigned int Class_3_5B1E7CD6174ED6A6_TypeDefinitionIndex = 48205;

class Class_3_5B1E7CD6174ED6A6 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_Predicate_Behaviour*>
{
public:
	::Class_1_5F51D4049EA87B7B* Field_3_0; // 0x28
	::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Field_3_3; // 0x30
	::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Field_3_1; // 0x38
	::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Field_3_2; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_Predicate_Behaviour* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_Predicate_Behaviour*))((::PBYTE)hIl2Cpp + CLASS_3_5B1E7CD6174ED6A6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B1E7CD6174ED6A6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5B1E7CD6174ED6A6_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B1E7CD6174ED6A6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B1E7CD6174ED6A6_DISPOSE_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Method_3_970E563FDF9D72A6()
	{
		return ((::Il2CppArray<::Class_1_5F51D4049EA87B7B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B1E7CD6174ED6A6_METHOD_3_970E563FDF9D72A6_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Method_3_970E563FDF9D72A6_1()
	{
		return ((::Il2CppArray<::Class_1_5F51D4049EA87B7B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B1E7CD6174ED6A6_METHOD_3_970E563FDF9D72A6_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5B1E7CD6174ED6A6___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B1E7CD6174ED6A6___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
