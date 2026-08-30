#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class SwitchHandCatchStateListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_8EB157DBAF836C59_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162AAE50)
#define CLASS_2_8EB157DBAF836C59_METHOD_2_2ADBA02EC0F7C432_OFFSET UNITYSDK_OFFSET(0x162AB460)
#define CLASS_2_8EB157DBAF836C59_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162AB220)
#define CLASS_2_8EB157DBAF836C59_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x162AB6D0)
#define CLASS_2_8EB157DBAF836C59_TICK_OFFSET UNITYSDK_OFFSET(0x162AB060)
#define CLASS_2_8EB157DBAF836C59__CTOR_OFFSET UNITYSDK_OFFSET(0x162AAD70)

inline static constexpr unsigned int Class_2_8EB157DBAF836C59_TypeDefinitionIndex = 53565;

class Class_2_8EB157DBAF836C59 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* OHMNAFJEMJL; // 0x18
	::Class_3_07C3C4D2990C49EE* OFEFKGDFIEN; // 0x20
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
	::RPG::GameCore::SwitchHandCatchStateListener* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandCatchStateListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandCatchStateListener*))((::PBYTE)hIl2Cpp + CLASS_2_8EB157DBAF836C59__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EB157DBAF836C59_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8EB157DBAF836C59_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EB157DBAF836C59_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EB157DBAF836C59_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_2ADBA02EC0F7C432(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8EB157DBAF836C59_METHOD_2_2ADBA02EC0F7C432_OFFSET))(this, a1);
	}
};
