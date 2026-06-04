#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_0AD6129525BF5F86;
class Class_1_2B8E0B4950FE44E7;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdventureFireProjectileBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DBDA6AC740B5D6A9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8C5430)
#define CLASS_2_DBDA6AC740B5D6A9_METHOD_2_4F021C97EBCA8625_OFFSET UNITYSDK_OFFSET(0xA8C04F0)
#define CLASS_2_DBDA6AC740B5D6A9_METHOD_2_C553BAF25E541FB4_1_OFFSET UNITYSDK_OFFSET(0xA8C5EA0)
#define CLASS_2_DBDA6AC740B5D6A9_METHOD_2_C553BAF25E541FB4_OFFSET UNITYSDK_OFFSET(0xA8C5D80)
#define CLASS_2_DBDA6AC740B5D6A9_METHOD_2_EC28FD7AA4FC3328_OFFSET UNITYSDK_OFFSET(0xA8C5AF0)
#define CLASS_2_DBDA6AC740B5D6A9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA8C54C0)
#define CLASS_2_DBDA6AC740B5D6A9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA8C59F0)
#define CLASS_2_DBDA6AC740B5D6A9_TICK_OFFSET UNITYSDK_OFFSET(0xA8C5A40)
#define CLASS_2_DBDA6AC740B5D6A9__CTOR_OFFSET UNITYSDK_OFFSET(0xA8C0240)

inline static constexpr unsigned int Class_2_DBDA6AC740B5D6A9_TypeDefinitionIndex = 54104;

class Class_2_DBDA6AC740B5D6A9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_0; // 0x18
	::RPG::GameCore::AdventureFireProjectileBase* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::Class_1_0AD6129525BF5F86* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::RPG::GameCore::TaskContext* Field_2_5; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureFireProjectileBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureFireProjectileBase*))((::PBYTE)hIl2Cpp + CLASS_2_DBDA6AC740B5D6A9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBDA6AC740B5D6A9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBDA6AC740B5D6A9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_4F021C97EBCA8625(::RPG::GameCore::GameEntity* a1, ::Class_1_2B8E0B4950FE44E7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_2_DBDA6AC740B5D6A9_METHOD_2_4F021C97EBCA8625_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DBDA6AC740B5D6A9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DBDA6AC740B5D6A9_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_EC28FD7AA4FC3328(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_DBDA6AC740B5D6A9_METHOD_2_EC28FD7AA4FC3328_OFFSET))(this, a1);
	}

	::System::Void Method_2_C553BAF25E541FB4(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_DBDA6AC740B5D6A9_METHOD_2_C553BAF25E541FB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C553BAF25E541FB4_1(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_DBDA6AC740B5D6A9_METHOD_2_C553BAF25E541FB4_1_OFFSET))(this, a1);
	}
};
