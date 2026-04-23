#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class MonopolyCheckHasFinishedQuiz; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D111A823E33F12EE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2D1750)
#define CLASS_2_D111A823E33F12EE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA2D14E0)
#define CLASS_2_D111A823E33F12EE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA2D1700)
#define CLASS_2_D111A823E33F12EE_TICK_OFFSET UNITYSDK_OFFSET(0xA2D17F0)
#define CLASS_2_D111A823E33F12EE__CTOR_OFFSET UNITYSDK_OFFSET(0xA2D13E0)

inline static constexpr unsigned int Class_2_D111A823E33F12EE_TypeDefinitionIndex = 53688;

class Class_2_D111A823E33F12EE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MonopolyCheckHasFinishedQuiz* Field_2_1; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyCheckHasFinishedQuiz* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyCheckHasFinishedQuiz*))((::PBYTE)hIl2Cpp + CLASS_2_D111A823E33F12EE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D111A823E33F12EE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D111A823E33F12EE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D111A823E33F12EE_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D111A823E33F12EE_TICK_OFFSET))(this, a1);
	}
};
