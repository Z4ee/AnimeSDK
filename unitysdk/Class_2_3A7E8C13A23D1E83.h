#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_636;
namespace RPG::GameCore { class BackToMainPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_3A7E8C13A23D1E83_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18972F40)
#define CLASS_2_3A7E8C13A23D1E83_METHOD_2_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x18973190)
#define CLASS_2_3A7E8C13A23D1E83_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x18972C90)
#define CLASS_2_3A7E8C13A23D1E83_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18972C00)
#define CLASS_2_3A7E8C13A23D1E83_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x189730A0)
#define CLASS_2_3A7E8C13A23D1E83_TICK_OFFSET UNITYSDK_OFFSET(0x189730F0)
#define CLASS_2_3A7E8C13A23D1E83__CTOR_OFFSET UNITYSDK_OFFSET(0x18972BF0)

inline static constexpr unsigned int Class_2_3A7E8C13A23D1E83_TypeDefinitionIndex = 58095;

class Class_2_3A7E8C13A23D1E83 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_0_16E4307DCC419505_636* GEGNDMIMMNL; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::BackToMainPage* OFKGLJOAMLD; // 0x28
	::System::Single HBANLBGKNKP; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BackToMainPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BackToMainPage*))((::PBYTE)hIl2Cpp + CLASS_2_3A7E8C13A23D1E83__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A7E8C13A23D1E83_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A7E8C13A23D1E83_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A7E8C13A23D1E83_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3A7E8C13A23D1E83_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A7E8C13A23D1E83_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_2_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A7E8C13A23D1E83_METHOD_2_25EC451C0EA68F53_OFFSET))(this);
	}
};
