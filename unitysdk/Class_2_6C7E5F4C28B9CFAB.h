#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RetargetPerSequence; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6C7E5F4C28B9CFAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC43C800)
#define CLASS_2_6C7E5F4C28B9CFAB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC43C880)
#define CLASS_2_6C7E5F4C28B9CFAB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC43CE30)
#define CLASS_2_6C7E5F4C28B9CFAB_TICK_OFFSET UNITYSDK_OFFSET(0xC43CE80)
#define CLASS_2_6C7E5F4C28B9CFAB__CTOR_OFFSET UNITYSDK_OFFSET(0xC43C5A0)

inline static constexpr unsigned int Class_2_6C7E5F4C28B9CFAB_TypeDefinitionIndex = 51677;

class Class_2_6C7E5F4C28B9CFAB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::RPG::GameCore::RetargetPerSequence* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RetargetPerSequence* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RetargetPerSequence*))((::PBYTE)hIl2Cpp + CLASS_2_6C7E5F4C28B9CFAB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C7E5F4C28B9CFAB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C7E5F4C28B9CFAB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C7E5F4C28B9CFAB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6C7E5F4C28B9CFAB_TICK_OFFSET))(this, a1);
	}
};
