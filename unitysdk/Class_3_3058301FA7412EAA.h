#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"

class Class_1_A043D803AC652E6E;
namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_3058301FA7412EAA_METHOD_3_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0x18227300)
#define CLASS_3_3058301FA7412EAA_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x18227100)
#define CLASS_3_3058301FA7412EAA_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x182273C0)
#define CLASS_3_3058301FA7412EAA_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x18227180)
#define CLASS_3_3058301FA7412EAA__CTOR_OFFSET UNITYSDK_OFFSET(0x18227410)

inline static constexpr unsigned int Class_3_3058301FA7412EAA_TypeDefinitionIndex = 62916;

class Class_3_3058301FA7412EAA : public ::Class_2_980BB27C20DEC196
{
public:
	::Class_1_A043D803AC652E6E* Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3058301FA7412EAA__CTOR_OFFSET))(this);
	}

	static ::Class_3_3058301FA7412EAA* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_3058301FA7412EAA*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_3058301FA7412EAA_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3058301FA7412EAA_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_57F015DFC718ABA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3058301FA7412EAA_METHOD_3_57F015DFC718ABA3_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3058301FA7412EAA_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}
};
