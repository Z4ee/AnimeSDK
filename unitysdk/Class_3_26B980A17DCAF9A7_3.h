#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_1D65C84443DC695F;
namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_26B980A17DCAF9A7_3_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x16AAE7C0)
#define CLASS_3_26B980A17DCAF9A7_3_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x16AAE990)
#define CLASS_3_26B980A17DCAF9A7_3_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x16AAE940)
#define CLASS_3_26B980A17DCAF9A7_3_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x16AAE840)
#define CLASS_3_26B980A17DCAF9A7_3__CTOR_OFFSET UNITYSDK_OFFSET(0x16AAE9E0)

inline static constexpr unsigned int Class_3_26B980A17DCAF9A7_3_TypeDefinitionIndex = 62928;

class Class_3_26B980A17DCAF9A7_3 : public ::Class_2_980BB27C20DEC196
{
public:
	::Class_1_1D65C84443DC695F* Field_3_0; // 0x28
	::UnityEngine::Vector2Int Field_3_1; // 0x30
	::UnityEngine::Vector2Int Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_3__CTOR_OFFSET))(this);
	}

	static ::Class_3_26B980A17DCAF9A7_3* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_26B980A17DCAF9A7_3*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_3_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_3_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_3_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26B980A17DCAF9A7_3_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}
};
