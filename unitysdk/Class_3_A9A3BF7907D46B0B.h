#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_980BB27C20DEC196.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_A9A3BF7907D46B0B_METHOD_3_9D0CF92250557C23_OFFSET UNITYSDK_OFFSET(0x1A6CB710)
#define CLASS_3_A9A3BF7907D46B0B_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x1A6CB870)
#define CLASS_3_A9A3BF7907D46B0B_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A6CB790)
#define CLASS_3_A9A3BF7907D46B0B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6CB8C0)

inline static constexpr unsigned int Class_3_A9A3BF7907D46B0B_TypeDefinitionIndex = 65910;

class Class_3_A9A3BF7907D46B0B : public ::Class_2_980BB27C20DEC196
{
public:
	::System::Boolean LOMFLPDGODN; // 0x28
	::UnityEngine::Vector2Int PECPBEOHOJC; // 0x2C
	::System::UInt32 KFIDBNDPNNI; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9A3BF7907D46B0B__CTOR_OFFSET))(this);
	}

	static ::Class_3_A9A3BF7907D46B0B* Method_3_9D0CF92250557C23(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_A9A3BF7907D46B0B*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_A9A3BF7907D46B0B_METHOD_3_9D0CF92250557C23_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9A3BF7907D46B0B_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A9A3BF7907D46B0B_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}
};
