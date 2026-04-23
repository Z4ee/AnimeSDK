#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_0AD6129525BF5F86;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class FireMultiProjectilesBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A02A01DE35B55E23_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2FD3A0)
#define CLASS_2_A02A01DE35B55E23_METHOD_2_1FC86D2BFE10815E_OFFSET UNITYSDK_OFFSET(0xA2FD7A0)
#define CLASS_2_A02A01DE35B55E23_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xA2FD5A0)
#define CLASS_2_A02A01DE35B55E23_METHOD_2_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0xA2FCE30)
#define CLASS_2_A02A01DE35B55E23_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0xA2FD110)
#define CLASS_2_A02A01DE35B55E23_METHOD_2_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0xA2FCBF0)
#define CLASS_2_A02A01DE35B55E23_METHOD_2_AFD66A83AEF40D90_OFFSET UNITYSDK_OFFSET(0xA2FD890)
#define CLASS_2_A02A01DE35B55E23_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA2FD400)
#define CLASS_2_A02A01DE35B55E23_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA2FD700)
#define CLASS_2_A02A01DE35B55E23_TICK_OFFSET UNITYSDK_OFFSET(0xA2FD620)
#define CLASS_2_A02A01DE35B55E23__CTOR_OFFSET UNITYSDK_OFFSET(0xA2FC8D0)

inline static constexpr unsigned int Class_2_A02A01DE35B55E23_TypeDefinitionIndex = 50765;

class Class_2_A02A01DE35B55E23 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* Field_2_8; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::ProjectileData*>* Field_2_11; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::System::Collections::Generic::List_1<::Class_3_E21F6DE9B7FA4D05*>* Field_2_9; // 0x30
	::Il2CppArray<::Class_1_0AD6129525BF5F86*>* Field_2_2; // 0x38
	::RPG::GameCore::FireMultiProjectilesBase* Field_2_0; // 0x40
	::System::Collections::Generic::List_1<::System::Single>* Field_2_10; // 0x48
	::RPG::GameCore::GameEntity* Field_2_7; // 0x50
	::System::Int32 Field_2_3; // 0x58
	::System::Single Field_2_4; // 0x5C
	::System::Int32 Field_2_5; // 0x60
	::System::Int32 Field_2_6; // 0x64

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FireMultiProjectilesBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FireMultiProjectilesBase*))((::PBYTE)hIl2Cpp + CLASS_2_A02A01DE35B55E23__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A02A01DE35B55E23_METHOD_2_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_2_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A02A01DE35B55E23_METHOD_2_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A02A01DE35B55E23_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A02A01DE35B55E23_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A02A01DE35B55E23_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A02A01DE35B55E23_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A02A01DE35B55E23_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean Method_2_1FC86D2BFE10815E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A02A01DE35B55E23_METHOD_2_1FC86D2BFE10815E_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A02A01DE35B55E23_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_AFD66A83AEF40D90(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_A02A01DE35B55E23_METHOD_2_AFD66A83AEF40D90_OFFSET))(this, a1);
	}
};
