#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_326AAAFC3EB9F4BD_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x15F249C0)
#define CLASS_3_326AAAFC3EB9F4BD_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x15F24A40)
#define CLASS_3_326AAAFC3EB9F4BD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15F24A80)
#define CLASS_3_326AAAFC3EB9F4BD__CTOR_OFFSET UNITYSDK_OFFSET(0x15F24AF0)

inline static constexpr unsigned int Class_3_326AAAFC3EB9F4BD_TypeDefinitionIndex = 62932;

class Class_3_326AAAFC3EB9F4BD : public ::Class_2_980BB27C20DEC196
{
public:
	::System::Boolean Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_326AAAFC3EB9F4BD__CTOR_OFFSET))(this);
	}

	static ::Class_3_326AAAFC3EB9F4BD* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_326AAAFC3EB9F4BD*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_326AAAFC3EB9F4BD_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_326AAAFC3EB9F4BD_ONCLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_326AAAFC3EB9F4BD_ONEXECUTE_OFFSET))(this);
	}
};
