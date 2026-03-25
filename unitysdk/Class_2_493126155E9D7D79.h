#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MonsterHPRatioCheck; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_493126155E9D7D79_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDE4E7D0)
#define CLASS_2_493126155E9D7D79_METHOD_2_56A341554FD6F72F_OFFSET UNITYSDK_OFFSET(0xDE4EDC0)
#define CLASS_2_493126155E9D7D79_METHOD_2_A47BB82463F77F6E_OFFSET UNITYSDK_OFFSET(0xDE4E9A0)
#define CLASS_2_493126155E9D7D79_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE4E810)
#define CLASS_2_493126155E9D7D79_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDE4EC10)
#define CLASS_2_493126155E9D7D79_TICK_OFFSET UNITYSDK_OFFSET(0xDE4EC90)
#define CLASS_2_493126155E9D7D79__CTOR_OFFSET UNITYSDK_OFFSET(0xDE4E780)

inline static constexpr unsigned int Class_2_493126155E9D7D79_TypeDefinitionIndex = 46970;

class Class_2_493126155E9D7D79 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x20
	::RPG::GameCore::MonsterHPRatioCheck* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonsterHPRatioCheck* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonsterHPRatioCheck*))((::PBYTE)hIl2Cpp + CLASS_2_493126155E9D7D79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_493126155E9D7D79_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_493126155E9D7D79_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_493126155E9D7D79_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_493126155E9D7D79_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A47BB82463F77F6E(::RPG::GameCore::GameEntity* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_493126155E9D7D79_METHOD_2_A47BB82463F77F6E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_56A341554FD6F72F(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_493126155E9D7D79_METHOD_2_56A341554FD6F72F_OFFSET))(this, a1, a2);
	}
};
