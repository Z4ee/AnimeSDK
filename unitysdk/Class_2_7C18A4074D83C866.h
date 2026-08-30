#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class RogueWorkBenchShowUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7C18A4074D83C866_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16ECF360)
#define CLASS_2_7C18A4074D83C866_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x16ECF870)
#define CLASS_2_7C18A4074D83C866_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x16ECF790)
#define CLASS_2_7C18A4074D83C866_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16ECF4C0)
#define CLASS_2_7C18A4074D83C866_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16ECF310)
#define CLASS_2_7C18A4074D83C866_TICK_OFFSET UNITYSDK_OFFSET(0x16ECF2B0)
#define CLASS_2_7C18A4074D83C866__CTOR_OFFSET UNITYSDK_OFFSET(0x16ECF1D0)

inline static constexpr unsigned int Class_2_7C18A4074D83C866_TypeDefinitionIndex = 58647;

class Class_2_7C18A4074D83C866 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* ABBFFFCMLHL; // 0x18
	::RPG::GameCore::RogueWorkBenchShowUI* JKJPFJALGKO; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x30
	::Class_3_07C3C4D2990C49EE* GGGKNHKPGHP; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueWorkBenchShowUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueWorkBenchShowUI*))((::PBYTE)hIl2Cpp + CLASS_2_7C18A4074D83C866__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7C18A4074D83C866_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C18A4074D83C866_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C18A4074D83C866_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C18A4074D83C866_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C18A4074D83C866_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C18A4074D83C866_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}
};
