#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_0AD6129525BF5F86;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class FireMultiProjectilesBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_610EEE5D7459CDEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179D2020)
#define CLASS_2_610EEE5D7459CDEC_METHOD_2_1FC86D2BFE10815E_OFFSET UNITYSDK_OFFSET(0x179D2500)
#define CLASS_2_610EEE5D7459CDEC_METHOD_2_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x179D1890)
#define CLASS_2_610EEE5D7459CDEC_METHOD_2_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x179D15B0)
#define CLASS_2_610EEE5D7459CDEC_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x179D2290)
#define CLASS_2_610EEE5D7459CDEC_METHOD_2_C553BAF25E541FB4_OFFSET UNITYSDK_OFFSET(0x179D25F0)
#define CLASS_2_610EEE5D7459CDEC_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x179D1C70)
#define CLASS_2_610EEE5D7459CDEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179D2080)
#define CLASS_2_610EEE5D7459CDEC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x179D2460)
#define CLASS_2_610EEE5D7459CDEC_TICK_OFFSET UNITYSDK_OFFSET(0x179D2310)
#define CLASS_2_610EEE5D7459CDEC__CTOR_OFFSET UNITYSDK_OFFSET(0x179D12A0)

inline static constexpr unsigned int Class_2_610EEE5D7459CDEC_TypeDefinitionIndex = 52575;

class Class_2_610EEE5D7459CDEC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Il2CppArray<::Class_1_0AD6129525BF5F86*>* Field_2_1; // 0x20
	::RPG::GameCore::FireMultiProjectilesBase* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::ProjectileData*>* Field_2_3; // 0x30
	::RPG::GameCore::GameEntity* Field_2_4; // 0x38
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* Field_2_5; // 0x40
	::System::Collections::Generic::List_1<::System::Single>* Field_2_6; // 0x48
	::RPG::GameCore::GameEntity* Field_2_7; // 0x50
	::System::Int32 Field_2_8; // 0x58
	::System::Int32 Field_2_9; // 0x5C
	::System::Int32 Field_2_10; // 0x60
	::System::Single Field_2_11; // 0x64

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FireMultiProjectilesBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FireMultiProjectilesBase*))((::PBYTE)hIl2Cpp + CLASS_2_610EEE5D7459CDEC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_610EEE5D7459CDEC_METHOD_2_2DCDFF29E7FDDAA8_OFFSET))(this);
	}

	::System::Void Method_2_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_610EEE5D7459CDEC_METHOD_2_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Void Method_2_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_610EEE5D7459CDEC_METHOD_2_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_610EEE5D7459CDEC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_610EEE5D7459CDEC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_610EEE5D7459CDEC_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_610EEE5D7459CDEC_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_2_1FC86D2BFE10815E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_610EEE5D7459CDEC_METHOD_2_1FC86D2BFE10815E_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_610EEE5D7459CDEC_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_C553BAF25E541FB4(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_610EEE5D7459CDEC_METHOD_2_C553BAF25E541FB4_OFFSET))(this, a1);
	}
};
