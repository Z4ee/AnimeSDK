#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueGambleBaseFunc; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class RogueGambleFuncShowUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_E060DA3A6C8B2DD0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA441D90)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0xA442770)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA4428A0)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_41CF9B9431532A25_OFFSET UNITYSDK_OFFSET(0xA442980)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_635445A7258F7A25_OFFSET UNITYSDK_OFFSET(0xA442600)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_6FECEF220D41E8B2_OFFSET UNITYSDK_OFFSET(0xA442650)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xA442850)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0xA4423A0)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_BDED79D5C4FAAACD_OFFSET UNITYSDK_OFFSET(0xA442270)
#define CLASS_2_E060DA3A6C8B2DD0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA441EB0)
#define CLASS_2_E060DA3A6C8B2DD0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA441D40)
#define CLASS_2_E060DA3A6C8B2DD0_TICK_OFFSET UNITYSDK_OFFSET(0xA441CE0)
#define CLASS_2_E060DA3A6C8B2DD0__CTOR_OFFSET UNITYSDK_OFFSET(0xA441B90)

inline static constexpr unsigned int Class_2_E060DA3A6C8B2DD0_TypeDefinitionIndex = 54623;

class Class_2_E060DA3A6C8B2DD0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropComponent* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::RPG::Client::LuaUIController* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::RPG::Client::RogueGambleBaseFunc* Field_2_5; // 0x40
	::RPG::GameCore::RogueGambleFuncShowUI* Field_2_6; // 0x48
	::Class_3_07C3C4D2990C49EE* Field_2_7; // 0x50
	::System::UInt32 Field_2_8; // 0x58
	::System::Boolean Field_2_9; // 0x5C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueGambleFuncShowUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueGambleFuncShowUI*))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_BDED79D5C4FAAACD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_BDED79D5C4FAAACD_OFFSET))(this, a1);
	}

	::System::Void Method_2_635445A7258F7A25(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_635445A7258F7A25_OFFSET))(this, a1);
	}

	::System::Void Method_2_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_2_6FECEF220D41E8B2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_6FECEF220D41E8B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Void Method_2_41CF9B9431532A25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_41CF9B9431532A25_OFFSET))(this);
	}
};
