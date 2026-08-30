#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_0AD6129525BF5F86;
class Class_1_D9413DC99216F54F;
class Class_3_07C3C4D2990C49EE;
class Class_3_6B4C8D8139B9F0F6;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4D03016B3F424876_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AA50C0)
#define CLASS_2_4D03016B3F424876_METHOD_2_1FC86D2BFE10815E_OFFSET UNITYSDK_OFFSET(0x15AA55B0)
#define CLASS_2_4D03016B3F424876_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x15AA5340)
#define CLASS_2_4D03016B3F424876_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x15AA4360)
#define CLASS_2_4D03016B3F424876_METHOD_2_C553BAF25E541FB4_OFFSET UNITYSDK_OFFSET(0x15AA56A0)
#define CLASS_2_4D03016B3F424876_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x15AA4640)
#define CLASS_2_4D03016B3F424876_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x15AA4D10)
#define CLASS_2_4D03016B3F424876_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AA5120)
#define CLASS_2_4D03016B3F424876_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AA5510)
#define CLASS_2_4D03016B3F424876_TICK_OFFSET UNITYSDK_OFFSET(0x15AA53C0)
#define CLASS_2_4D03016B3F424876__CTOR_OFFSET UNITYSDK_OFFSET(0x15AA3FF0)

inline static constexpr unsigned int Class_2_4D03016B3F424876_TypeDefinitionIndex = 54123;

class Class_2_4D03016B3F424876 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Il2CppArray<::Class_1_0AD6129525BF5F86*>* MMGFBHHLLOA; // 0x18
	::Class_1_D9413DC99216F54F* EEGKNKIBLHB; // 0x20
	::Class_3_6B4C8D8139B9F0F6* JKJPFJALGKO; // 0x28
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::RPG::GameCore::GameEntity* KKFCJOJLGCO; // 0x40
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* NINIMEBKNLO; // 0x48
	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* NBMCBEDFFBH; // 0x50
	::System::Collections::Generic::List_1<::RPG::GameCore::ProjectileData*>* LJILIDHFNFJ; // 0x58
	::System::Int32 BCMHNNPGGBD; // 0x60
	::System::Int32 BLMPGAGBHHK; // 0x64
	::RPG::GameCore::FixPoint KBDPMBDJIOF; // 0x68
	::System::Int32 KNLANGKFPLG; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6B4C8D8139B9F0F6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6B4C8D8139B9F0F6*))((::PBYTE)hIl2Cpp + CLASS_2_4D03016B3F424876__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D03016B3F424876_METHOD_2_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_2_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D03016B3F424876_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_2_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D03016B3F424876_METHOD_2_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D03016B3F424876_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D03016B3F424876_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4D03016B3F424876_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D03016B3F424876_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_2_1FC86D2BFE10815E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D03016B3F424876_METHOD_2_1FC86D2BFE10815E_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D03016B3F424876_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_C553BAF25E541FB4(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_4D03016B3F424876_METHOD_2_C553BAF25E541FB4_OFFSET))(this, a1);
	}
};
