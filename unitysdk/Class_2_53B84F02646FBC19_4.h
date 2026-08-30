#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_7AA0663B46C8586F_5;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_53B84F02646FBC19_4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F4ABA0)
#define CLASS_2_53B84F02646FBC19_4_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x18F4AE30)
#define CLASS_2_53B84F02646FBC19_4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F4AC20)
#define CLASS_2_53B84F02646FBC19_4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18F4AD20)
#define CLASS_2_53B84F02646FBC19_4_TICK_OFFSET UNITYSDK_OFFSET(0x18F4ADD0)
#define CLASS_2_53B84F02646FBC19_4__CTOR_OFFSET UNITYSDK_OFFSET(0x18F4AB90)

inline static constexpr unsigned int Class_2_53B84F02646FBC19_4_TypeDefinitionIndex = 53214;

class Class_2_53B84F02646FBC19_4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_7AA0663B46C8586F_5* OFKGLJOAMLD; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_5*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_4_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_4_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}
};
