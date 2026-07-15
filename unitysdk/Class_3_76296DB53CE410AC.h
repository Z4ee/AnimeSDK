#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_1D65C84443DC695F;
namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_76296DB53CE410AC_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x186FCC20)
#define CLASS_3_76296DB53CE410AC_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x186FCD80)
#define CLASS_3_76296DB53CE410AC_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x186FCCA0)
#define CLASS_3_76296DB53CE410AC__CTOR_OFFSET UNITYSDK_OFFSET(0x186FCDD0)

inline static constexpr unsigned int Class_3_76296DB53CE410AC_TypeDefinitionIndex = 62938;

class Class_3_76296DB53CE410AC : public ::Class_2_980BB27C20DEC196
{
public:
	::Class_1_1D65C84443DC695F* Field_3_0; // 0x28
	::UnityEngine::Vector2Int Field_3_1; // 0x30
	::System::Boolean Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76296DB53CE410AC__CTOR_OFFSET))(this);
	}

	static ::Class_3_76296DB53CE410AC* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_76296DB53CE410AC*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_76296DB53CE410AC_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76296DB53CE410AC_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76296DB53CE410AC_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}
};
