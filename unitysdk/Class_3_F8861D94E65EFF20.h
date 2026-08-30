#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_F8861D94E65EFF20_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0xB501E70)
#define CLASS_3_F8861D94E65EFF20_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xB501EF0)
#define CLASS_3_F8861D94E65EFF20_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB501F40)
#define CLASS_3_F8861D94E65EFF20__CTOR_OFFSET UNITYSDK_OFFSET(0xB501FE0)

inline static constexpr unsigned int Class_3_F8861D94E65EFF20_TypeDefinitionIndex = 65937;

class Class_3_F8861D94E65EFF20 : public ::Class_2_980BB27C20DEC196
{
public:
	::System::Boolean GNDCCBNILML; // 0x28
	::System::UInt32 GACEMBBAGMP; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8861D94E65EFF20__CTOR_OFFSET))(this);
	}

	static ::Class_3_F8861D94E65EFF20* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_F8861D94E65EFF20*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_F8861D94E65EFF20_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8861D94E65EFF20_ONCLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8861D94E65EFF20_ONEXECUTE_OFFSET))(this);
	}
};
