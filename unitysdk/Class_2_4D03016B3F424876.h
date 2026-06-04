#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_0AD6129525BF5F86;
class Class_1_D9413DC99216F54F;
class Class_3_07C3C4D2990C49EE;
class Class_3_C50E3FB5D05B1D38;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4D03016B3F424876_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C3D3A0)
#define CLASS_2_4D03016B3F424876_METHOD_2_1FC86D2BFE10815E_OFFSET UNITYSDK_OFFSET(0x13C3D7C0)
#define CLASS_2_4D03016B3F424876_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13C3D5C0)
#define CLASS_2_4D03016B3F424876_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x13C3C870)
#define CLASS_2_4D03016B3F424876_METHOD_2_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x13C3CB40)
#define CLASS_2_4D03016B3F424876_METHOD_2_7EA54838B888644E_OFFSET UNITYSDK_OFFSET(0x13C3D8B0)
#define CLASS_2_4D03016B3F424876_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x13C3D0E0)
#define CLASS_2_4D03016B3F424876_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13C3D400)
#define CLASS_2_4D03016B3F424876_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13C3D720)
#define CLASS_2_4D03016B3F424876_TICK_OFFSET UNITYSDK_OFFSET(0x13C3D640)
#define CLASS_2_4D03016B3F424876__CTOR_OFFSET UNITYSDK_OFFSET(0x13C3C560)

inline static constexpr unsigned int Class_2_4D03016B3F424876_TypeDefinitionIndex = 50357;

class Class_2_4D03016B3F424876 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Field_2_3; // 0x30
	::Class_3_C50E3FB5D05B1D38* Field_2_4; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::ProjectileData*>* Field_2_5; // 0x40
	::RPG::GameCore::GameEntity* Field_2_6; // 0x48
	::Class_1_D9413DC99216F54F* Field_2_7; // 0x50
	::Il2CppArray<::Class_1_0AD6129525BF5F86*>* Field_2_8; // 0x58
	::System::Int32 Field_2_9; // 0x60
	::RPG::GameCore::FixPoint Field_2_10; // 0x68
	::System::Int32 Field_2_11; // 0x70
	::System::Int32 Field_2_12; // 0x74

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C50E3FB5D05B1D38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C50E3FB5D05B1D38*))((::PBYTE)hIl2Cpp + CLASS_2_4D03016B3F424876__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D03016B3F424876_METHOD_2_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_2_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D03016B3F424876_METHOD_2_6A0EBEECA245A27C_OFFSET))(this);
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

	::System::Void Method_2_7EA54838B888644E(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_4D03016B3F424876_METHOD_2_7EA54838B888644E_OFFSET))(this, a1);
	}
};
