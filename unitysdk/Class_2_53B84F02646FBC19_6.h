#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_FFC9F907EFC2EAD0;
namespace RPG::Client { class LimaoNewsDutyCheckGreetingBranch; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_53B84F02646FBC19_6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x187DC2A0)
#define CLASS_2_53B84F02646FBC19_6_METHOD_2_1DC66375F15E73A5_OFFSET UNITYSDK_OFFSET(0x187DC5F0)
#define CLASS_2_53B84F02646FBC19_6_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x187DC5A0)
#define CLASS_2_53B84F02646FBC19_6_METHOD_2_B45EFE4EA80DB831_OFFSET UNITYSDK_OFFSET(0x187DC460)
#define CLASS_2_53B84F02646FBC19_6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x187DC360)
#define CLASS_2_53B84F02646FBC19_6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x187DC4F0)
#define CLASS_2_53B84F02646FBC19_6_TICK_OFFSET UNITYSDK_OFFSET(0x187DC540)
#define CLASS_2_53B84F02646FBC19_6__CTOR_OFFSET UNITYSDK_OFFSET(0x187DC290)

inline static constexpr unsigned int Class_2_53B84F02646FBC19_6_TypeDefinitionIndex = 53224;

class Class_2_53B84F02646FBC19_6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_FFC9F907EFC2EAD0* OFKGLJOAMLD; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FFC9F907EFC2EAD0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FFC9F907EFC2EAD0*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_6_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_6_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::RPG::Client::LimaoNewsDutyCheckGreetingBranch* Method_2_B45EFE4EA80DB831()
	{
		return ((::RPG::Client::LimaoNewsDutyCheckGreetingBranch*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_6_METHOD_2_B45EFE4EA80DB831_OFFSET))(this);
	}

	::System::Int32 Method_2_1DC66375F15E73A5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_6_METHOD_2_1DC66375F15E73A5_OFFSET))(this);
	}
};
