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

#define CLASS_2_610EEE5D7459CDEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16159FC0)
#define CLASS_2_610EEE5D7459CDEC_METHOD_2_1FC86D2BFE10815E_OFFSET UNITYSDK_OFFSET(0x1615A4A0)
#define CLASS_2_610EEE5D7459CDEC_METHOD_2_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x16159830)
#define CLASS_2_610EEE5D7459CDEC_METHOD_2_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x16159550)
#define CLASS_2_610EEE5D7459CDEC_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1615A230)
#define CLASS_2_610EEE5D7459CDEC_METHOD_2_C553BAF25E541FB4_OFFSET UNITYSDK_OFFSET(0x1615A590)
#define CLASS_2_610EEE5D7459CDEC_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x16159C10)
#define CLASS_2_610EEE5D7459CDEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1615A020)
#define CLASS_2_610EEE5D7459CDEC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1615A400)
#define CLASS_2_610EEE5D7459CDEC_TICK_OFFSET UNITYSDK_OFFSET(0x1615A2B0)
#define CLASS_2_610EEE5D7459CDEC__CTOR_OFFSET UNITYSDK_OFFSET(0x16159240)

inline static constexpr unsigned int Class_2_610EEE5D7459CDEC_TypeDefinitionIndex = 55272;

class Class_2_610EEE5D7459CDEC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* NINIMEBKNLO; // 0x18
	::System::Collections::Generic::List_1<::System::Single>* NBMCBEDFFBH; // 0x20
	::Il2CppArray<::Class_1_0AD6129525BF5F86*>* MMGFBHHLLOA; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::ProjectileData*>* LJILIDHFNFJ; // 0x30
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x38
	::RPG::GameCore::FireMultiProjectilesBase* JKJPFJALGKO; // 0x40
	::RPG::GameCore::GameEntity* KKFCJOJLGCO; // 0x48
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x50
	::System::Single LCBECIBFJCC; // 0x58
	::System::Int32 BLMPGAGBHHK; // 0x5C
	::System::Int32 BCMHNNPGGBD; // 0x60
	::System::Int32 KNLANGKFPLG; // 0x64

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
