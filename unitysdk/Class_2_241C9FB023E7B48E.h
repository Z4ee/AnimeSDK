#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_9850514C0F89B91A;
namespace RPG::GameCore { class MonopolyShowSwitchSpeTransition; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_241C9FB023E7B48E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12B1A9E0)
#define CLASS_2_241C9FB023E7B48E_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x12B1A540)
#define CLASS_2_241C9FB023E7B48E_METHOD_2_C54EFB67E9C50C27_OFFSET UNITYSDK_OFFSET(0x12B1A720)
#define CLASS_2_241C9FB023E7B48E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12B1A470)
#define CLASS_2_241C9FB023E7B48E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12B1A960)
#define CLASS_2_241C9FB023E7B48E_TICK_OFFSET UNITYSDK_OFFSET(0x12B1AA60)
#define CLASS_2_241C9FB023E7B48E__CTOR_OFFSET UNITYSDK_OFFSET(0x12B1A460)

inline static constexpr unsigned int Class_2_241C9FB023E7B48E_TypeDefinitionIndex = 53695;

class Class_2_241C9FB023E7B48E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_9850514C0F89B91A* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::RPG::GameCore::MonopolyShowSwitchSpeTransition* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyShowSwitchSpeTransition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyShowSwitchSpeTransition*))((::PBYTE)hIl2Cpp + CLASS_2_241C9FB023E7B48E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_241C9FB023E7B48E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_241C9FB023E7B48E_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_C54EFB67E9C50C27(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_241C9FB023E7B48E_METHOD_2_C54EFB67E9C50C27_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_241C9FB023E7B48E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_241C9FB023E7B48E_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_241C9FB023E7B48E_TICK_OFFSET))(this, a1);
	}
};
