#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_547;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class MusicRhythmEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_173C0D23D5560B49_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB13DD0)
#define CLASS_2_173C0D23D5560B49_METHOD_2_A20DD11EB73C2E66_OFFSET UNITYSDK_OFFSET(0xBB14090)
#define CLASS_2_173C0D23D5560B49_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB13C70)
#define CLASS_2_173C0D23D5560B49_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB13D80)
#define CLASS_2_173C0D23D5560B49_TICK_OFFSET UNITYSDK_OFFSET(0xBB14400)
#define CLASS_2_173C0D23D5560B49__CTOR_OFFSET UNITYSDK_OFFSET(0xBB13B10)

inline static constexpr unsigned int Class_2_173C0D23D5560B49_TypeDefinitionIndex = 53032;

class Class_2_173C0D23D5560B49 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MusicRhythmEventListener* IGHAHBNLIJA; // 0x18
	::Class_3_07C3C4D2990C49EE* JHLKCDGNIPI; // 0x20
	::Class_3_07C3C4D2990C49EE* LPNHNDOGAPI; // 0x28
	::Class_3_07C3C4D2990C49EE* CIFOILLJFNF; // 0x30
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x38
	::System::Boolean BEEEMPBIMGA; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MusicRhythmEventListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MusicRhythmEventListener*))((::PBYTE)hIl2Cpp + CLASS_2_173C0D23D5560B49__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_173C0D23D5560B49_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_173C0D23D5560B49_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_173C0D23D5560B49_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_A20DD11EB73C2E66(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_173C0D23D5560B49_METHOD_2_A20DD11EB73C2E66_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_173C0D23D5560B49_TICK_OFFSET))(this, a1);
	}
};
