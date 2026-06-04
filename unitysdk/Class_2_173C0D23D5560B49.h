#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class MusicRhythmEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_173C0D23D5560B49_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8C91A0)
#define CLASS_2_173C0D23D5560B49_METHOD_2_E51AFBEDC8C18BC1_OFFSET UNITYSDK_OFFSET(0xA8C9310)
#define CLASS_2_173C0D23D5560B49_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA8C9040)
#define CLASS_2_173C0D23D5560B49_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA8C9150)
#define CLASS_2_173C0D23D5560B49_TICK_OFFSET UNITYSDK_OFFSET(0xA8C9610)
#define CLASS_2_173C0D23D5560B49__CTOR_OFFSET UNITYSDK_OFFSET(0xA8C8EE0)

inline static constexpr unsigned int Class_2_173C0D23D5560B49_TypeDefinitionIndex = 49571;

class Class_2_173C0D23D5560B49 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::RPG::GameCore::MusicRhythmEventListener* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x40

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

	::System::Void Method_2_E51AFBEDC8C18BC1(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_173C0D23D5560B49_METHOD_2_E51AFBEDC8C18BC1_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_173C0D23D5560B49_TICK_OFFSET))(this, a1);
	}
};
