#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_28CFF0B23DB66092;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_53B84F02646FBC19_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9702F0)
#define CLASS_2_53B84F02646FBC19_2_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xC970630)
#define CLASS_2_53B84F02646FBC19_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC970370)
#define CLASS_2_53B84F02646FBC19_2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC970520)
#define CLASS_2_53B84F02646FBC19_2_TICK_OFFSET UNITYSDK_OFFSET(0xC9705D0)
#define CLASS_2_53B84F02646FBC19_2__CTOR_OFFSET UNITYSDK_OFFSET(0xC9702E0)

inline static constexpr unsigned int Class_2_53B84F02646FBC19_2_TypeDefinitionIndex = 49490;

class Class_2_53B84F02646FBC19_2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_28CFF0B23DB66092* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_28CFF0B23DB66092* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_28CFF0B23DB66092*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_2_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}
};
