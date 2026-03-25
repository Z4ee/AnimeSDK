#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class RogueWorkBenchShowUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7C18A4074D83C866_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11422EE0)
#define CLASS_2_7C18A4074D83C866_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x11423310)
#define CLASS_2_7C18A4074D83C866_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11423230)
#define CLASS_2_7C18A4074D83C866_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11422F70)
#define CLASS_2_7C18A4074D83C866_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11422E90)
#define CLASS_2_7C18A4074D83C866_TICK_OFFSET UNITYSDK_OFFSET(0x11422E30)
#define CLASS_2_7C18A4074D83C866__CTOR_OFFSET UNITYSDK_OFFSET(0x11422D50)

inline static constexpr unsigned int Class_2_7C18A4074D83C866_TypeDefinitionIndex = 47193;

class Class_2_7C18A4074D83C866 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::RogueWorkBenchShowUI* Field_2_1; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x28
	::RPG::Client::LuaUIController* Field_2_4; // 0x30
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x38

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
