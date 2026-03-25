#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_375;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class MusicRhythmEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_173C0D23D5560B49_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1065CFB0)
#define CLASS_2_173C0D23D5560B49_METHOD_2_BB53EB736DE9EA98_OFFSET UNITYSDK_OFFSET(0x1065D110)
#define CLASS_2_173C0D23D5560B49_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1065CE60)
#define CLASS_2_173C0D23D5560B49_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1065CF60)
#define CLASS_2_173C0D23D5560B49_TICK_OFFSET UNITYSDK_OFFSET(0x1065D400)
#define CLASS_2_173C0D23D5560B49__CTOR_OFFSET UNITYSDK_OFFSET(0x1065CD00)

inline static constexpr unsigned int Class_2_173C0D23D5560B49_TypeDefinitionIndex = 42920;

class Class_2_173C0D23D5560B49 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::MusicRhythmEventListener* Field_2_1; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x30
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x38
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

	::System::Void Method_2_BB53EB736DE9EA98(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_173C0D23D5560B49_METHOD_2_BB53EB736DE9EA98_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_173C0D23D5560B49_TICK_OFFSET))(this, a1);
	}
};
