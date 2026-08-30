#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_8D2FB691E53C6616_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1845C300)
#define CLASS_2_8D2FB691E53C6616_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1845C690)
#define CLASS_2_8D2FB691E53C6616_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1845C650)
#define CLASS_2_8D2FB691E53C6616_METHOD_2_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x1845C4F0)
#define CLASS_2_8D2FB691E53C6616_METHOD_2_AE6D44E5602930B4_OFFSET UNITYSDK_OFFSET(0x1845C780)
#define CLASS_2_8D2FB691E53C6616_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1845C340)
#define CLASS_2_8D2FB691E53C6616_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1845C6D0)
#define CLASS_2_8D2FB691E53C6616_TICK_OFFSET UNITYSDK_OFFSET(0x1845C720)
#define CLASS_2_8D2FB691E53C6616__CTOR_OFFSET UNITYSDK_OFFSET(0x1845C2F0)

inline static constexpr unsigned int Class_2_8D2FB691E53C6616_TypeDefinitionIndex = 58842;

class Class_2_8D2FB691E53C6616 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::Client::UIController* OGOFNHAGOPO; // 0x20
	::Class_1_F3391C70DC37088D* PJHNKKIDLBE; // 0x28
	::Il2CppArray<::System::Int32>* CFKLLAOPMOG; // 0x30

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

	::System::Void Method_2_AE6D44E5602930B4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8D2FB691E53C6616_METHOD_2_AE6D44E5602930B4_OFFSET))(this, a1);
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
