#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_0AD6129525BF5F86;
class Class_1_2B8E0B4950FE44E7;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdventureFireProjectileBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_59BB61CDD388D438_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14B55160)
#define CLASS_2_59BB61CDD388D438_METHOD_2_C553BAF25E541FB4_1_OFFSET UNITYSDK_OFFSET(0x14B56090)
#define CLASS_2_59BB61CDD388D438_METHOD_2_C553BAF25E541FB4_OFFSET UNITYSDK_OFFSET(0x14B55F70)
#define CLASS_2_59BB61CDD388D438_METHOD_2_EC28FD7AA4FC3328_OFFSET UNITYSDK_OFFSET(0x14B55CF0)
#define CLASS_2_59BB61CDD388D438_METHOD_2_F7AB89EC71D9B64B_OFFSET UNITYSDK_OFFSET(0x14B55A10)
#define CLASS_2_59BB61CDD388D438_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14B552C0)
#define CLASS_2_59BB61CDD388D438_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14B55BF0)
#define CLASS_2_59BB61CDD388D438_TICK_OFFSET UNITYSDK_OFFSET(0x14B55C40)
#define CLASS_2_59BB61CDD388D438__CTOR_OFFSET UNITYSDK_OFFSET(0x14B50190)

inline static constexpr unsigned int Class_2_59BB61CDD388D438_TypeDefinitionIndex = 55327;

class Class_2_59BB61CDD388D438 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::AdventureFireProjectileBase* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::Class_1_0AD6129525BF5F86* Field_2_4; // 0x38
	::Class_1_5F51D4049EA87B7B* Field_2_5; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureFireProjectileBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureFireProjectileBase*))((::PBYTE)hIl2Cpp + CLASS_2_59BB61CDD388D438__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59BB61CDD388D438_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59BB61CDD388D438_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_F7AB89EC71D9B64B(::RPG::GameCore::GameEntity* a1, ::Class_1_2B8E0B4950FE44E7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_2_59BB61CDD388D438_METHOD_2_F7AB89EC71D9B64B_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59BB61CDD388D438_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_59BB61CDD388D438_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_EC28FD7AA4FC3328(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_59BB61CDD388D438_METHOD_2_EC28FD7AA4FC3328_OFFSET))(this, a1);
	}

	::System::Void Method_2_C553BAF25E541FB4(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_59BB61CDD388D438_METHOD_2_C553BAF25E541FB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C553BAF25E541FB4_1(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_59BB61CDD388D438_METHOD_2_C553BAF25E541FB4_1_OFFSET))(this, a1);
	}
};
