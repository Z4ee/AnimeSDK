#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_2D512E916C716041_5;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_53B84F02646FBC19_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13924820)
#define CLASS_2_53B84F02646FBC19_3_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x13924AB0)
#define CLASS_2_53B84F02646FBC19_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x139248A0)
#define CLASS_2_53B84F02646FBC19_3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x139249A0)
#define CLASS_2_53B84F02646FBC19_3_TICK_OFFSET UNITYSDK_OFFSET(0x13924A50)
#define CLASS_2_53B84F02646FBC19_3__CTOR_OFFSET UNITYSDK_OFFSET(0x13924810)

inline static constexpr unsigned int Class_2_53B84F02646FBC19_3_TypeDefinitionIndex = 49491;

class Class_2_53B84F02646FBC19_3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_2D512E916C716041_5* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2D512E916C716041_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2D512E916C716041_5*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_3_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_3_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}
};
