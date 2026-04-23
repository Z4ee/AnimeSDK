#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8D2FB691E53C6616_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DF97C0)
#define CLASS_2_8D2FB691E53C6616_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x11DF9B30)
#define CLASS_2_8D2FB691E53C6616_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11DF9AF0)
#define CLASS_2_8D2FB691E53C6616_METHOD_2_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x11DF9990)
#define CLASS_2_8D2FB691E53C6616_METHOD_2_7B12DCDC7C0C0CFC_OFFSET UNITYSDK_OFFSET(0x11DF9C20)
#define CLASS_2_8D2FB691E53C6616_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11DF9800)
#define CLASS_2_8D2FB691E53C6616_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11DF9B70)
#define CLASS_2_8D2FB691E53C6616_TICK_OFFSET UNITYSDK_OFFSET(0x11DF9BC0)
#define CLASS_2_8D2FB691E53C6616__CTOR_OFFSET UNITYSDK_OFFSET(0x11DF97B0)

inline static constexpr unsigned int Class_2_8D2FB691E53C6616_TypeDefinitionIndex = 54110;

class Class_2_8D2FB691E53C6616 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Il2CppArray<::System::Int32>* Field_2_2; // 0x18
	::RPG::Client::UIController* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::Class_1_F3391C70DC37088D* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TaskConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_8D2FB691E53C6616__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D2FB691E53C6616_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D2FB691E53C6616_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_2_5E72916301E347E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D2FB691E53C6616_METHOD_2_5E72916301E347E2_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D2FB691E53C6616_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8D2FB691E53C6616_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B12DCDC7C0C0CFC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8D2FB691E53C6616_METHOD_2_7B12DCDC7C0C0CFC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D2FB691E53C6616_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D2FB691E53C6616_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}
};
