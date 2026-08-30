#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_7AA0663B46C8586F_1;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_8209AB47CE58C301_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1895F090)
#define CLASS_2_8209AB47CE58C301_METHOD_2_7FD7D34994C88765_OFFSET UNITYSDK_OFFSET(0x1895F0E0)
#define CLASS_2_8209AB47CE58C301_METHOD_2_A5C4135A88AD533A_1_OFFSET UNITYSDK_OFFSET(0x1895F970)
#define CLASS_2_8209AB47CE58C301_METHOD_2_A5C4135A88AD533A_OFFSET UNITYSDK_OFFSET(0x1895F8D0)
#define CLASS_2_8209AB47CE58C301_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1895F1F0)
#define CLASS_2_8209AB47CE58C301_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1895F7F0)
#define CLASS_2_8209AB47CE58C301_TICK_OFFSET UNITYSDK_OFFSET(0x1895F870)
#define CLASS_2_8209AB47CE58C301__CTOR_OFFSET UNITYSDK_OFFSET(0x1895F080)

inline static constexpr unsigned int Class_2_8209AB47CE58C301_TypeDefinitionIndex = 52591;

class Class_2_8209AB47CE58C301 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_7AA0663B46C8586F_1* IGHAHBNLIJA; // 0x18
	::System::UInt32 HCAGILCDAMP; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7AA0663B46C8586F_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7AA0663B46C8586F_1*))((::PBYTE)hIl2Cpp + CLASS_2_8209AB47CE58C301__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8209AB47CE58C301_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8209AB47CE58C301_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8209AB47CE58C301_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8209AB47CE58C301_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A5C4135A88AD533A(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8209AB47CE58C301_METHOD_2_A5C4135A88AD533A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A5C4135A88AD533A_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8209AB47CE58C301_METHOD_2_A5C4135A88AD533A_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7FD7D34994C88765()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8209AB47CE58C301_METHOD_2_7FD7D34994C88765_OFFSET))(this);
	}
};
