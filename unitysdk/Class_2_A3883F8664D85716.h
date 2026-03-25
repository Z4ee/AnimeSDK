#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_375;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class ShowMazeBuffSelectInBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A3883F8664D85716_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1169E780)
#define CLASS_2_A3883F8664D85716_METHOD_2_21DB8E6F31E6B2BF_OFFSET UNITYSDK_OFFSET(0x1169E900)
#define CLASS_2_A3883F8664D85716_METHOD_2_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x1169E6A0)
#define CLASS_2_A3883F8664D85716_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x1169E850)
#define CLASS_2_A3883F8664D85716_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1169E270)
#define CLASS_2_A3883F8664D85716_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1169E610)
#define CLASS_2_A3883F8664D85716_TICK_OFFSET UNITYSDK_OFFSET(0x1169E7F0)
#define CLASS_2_A3883F8664D85716__CTOR_OFFSET UNITYSDK_OFFSET(0x1169E1B0)

inline static constexpr unsigned int Class_2_A3883F8664D85716_TypeDefinitionIndex = 47352;

class Class_2_A3883F8664D85716 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x20
	::Il2CppArray<::System::UInt32>* Field_2_2; // 0x28
	::RPG::GameCore::ShowMazeBuffSelectInBattle* Field_2_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMazeBuffSelectInBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMazeBuffSelectInBattle*))((::PBYTE)hIl2Cpp + CLASS_2_A3883F8664D85716__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3883F8664D85716_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3883F8664D85716_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3883F8664D85716_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A3883F8664D85716_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_A3883F8664D85716_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3883F8664D85716_METHOD_2_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_2_21DB8E6F31E6B2BF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A3883F8664D85716_METHOD_2_21DB8E6F31E6B2BF_OFFSET))(this, a1);
	}
};
